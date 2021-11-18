#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "distributeur.h"
#include "auxiliaire.h"



int selection_produit(struct distributeur d){
	//distributeur est une structure non vide
	//renvoie le l'indice de numéro choisi
	affiche_dispo_simple_num(d.dispo, d.numrt);
	bool b = true;
	printf("Choisir un produit : ");
	while (b){
		int numclient;
		scanf("%d",&numclient);
		if (numclient>=d.numrt.nb_num){
			printf("Numero non valide. Réessayez : ");
		}
		else {
			int indiceproduit = ind_from_num(d.numrt,numclient);
			if (indiceproduit == -1){
				printf("Ce produit n'est plus en stock, désolé.\nSi vous souhaitez autre chose, tapez le numéro correspondant : ");
			}
			else {
				return indiceproduit;
			}
		}
		
	}
	

}


bool transaction (struct distributeur d){
	//distributeur est une structure non vide
	//renvoie 1 si l'utilisateur veux recommencer, 0 sinon
	int indiceproduit = selection_produit(d);
	printf("Ce produit coûte : ");
	int montantprd = d.prd.t_prix[indiceproduit];
	affiche_montant(montantprd);
	printf("\n");
	int i = 0;
	struct caisse cuser = prend_monnaie();
	if (solde(cuser) >= montantprd && caisse_suffit(d.c,solde(cuser)-montantprd)){
		d.prd.t_stock[indiceproduit] = d.prd.t_stock[indiceproduit] - 1;
		if (d.prd.t_stock[indiceproduit] == 0){
			int num = num_from_ind(d.numrt,indiceproduit);
			d.numrt.t_num[num] = 0;
			d.dispo.t_rg[num/10] = d.dispo.t_rg[num/10]-1;

			//affiche_dispo_simple_num(d.dispo, d.numrt);

			affiche_caisse(d.c);
			rend_monnaie(d.c, solde(cuser)-montantprd);
			affiche_caisse(d.c);
			ajoute_caisse(d.c,cuser);
			affiche_caisse(d.c);



			printf("Souhaitez-vous effectuer une nouvelle transaction ?\nTapez 1 pour oui et 0 pour non.\n");
			int reponse;
			scanf("%d", &reponse);
			return reponse;
		}
		affiche_caisse(d.c);
		printf("Souhaitez-vous effectuer une nouvelle transaction ?\nTapez 1 pour oui et 0 pour non.\n");
		int reponse;
		scanf("%d", &reponse);
		return reponse;
	}
	else {
		printf("La transaction n'a pas pu être effectuée.\n");
		rend_monnaie(cuser, solde(cuser));
	
		printf("Souhaitez-vous effectuer une nouvelle transaction ?\nTapez 1 pour oui et 0 pour non.\n");
		int reponse;
		scanf("%d", &reponse);
		return reponse;
	}
}

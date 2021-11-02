#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "produits.h"
#include "auxiliaire.h"


int nb_produits(struct produits prd){
	//hyp : prd est une structure non vide
	//retourne la quantité de produit de prd
	int i = 0;
	int nb =  0;
	while(i < prd.nb_p){
		nb = nb + prd.t_stock[i];
		i++;
	}
	return nb;
}


int valeur_globale(struct produits prd){
	//hyp : prd est une structure non vide
    //retourne le la valeur globale de prd
    int i = 0;
    int somme = 0;
    while(i<prd.nb_p){
        somme = somme + prd.t_stock[i]*prd.t_prix[i];
        i++;
    }
    return somme;
}

void affiche_info_globale(struct produits prd){
	//hyp : prd est une structure non vide
	//affiche le nombre de produit et la valeur globale du stock
	printf("Il y a %d produits totalisant ", nb_produits(prd));
	affiche_montant(valeur_globale(prd));
}

void affiche_info_detaillee(struct produits prd){
	//hyp : prd est une structure non vide
	//affiche un tableau résumant le prix et le stock de chaque type
	printf("Liste des produits\n====================\nprix | quantité\n--------------------\n");
	int i = 0;
	while(i < prd.nb_p){
		affiche_montant(prd.t_prix[i]);
		printf(" | %d\n",  prd.t_stock[i]);
		i++;
	}
	printf("--------------------\n");
}

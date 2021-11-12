#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "produits.h"
#include "auxiliaire.h"


int nb_produits(struct produits prd){
	//hyp : prd est une structure non vide
	//retourne la quantité de produit de prd (si 2 produits différents et 3 de chaque, alors affiche 6)
	int i=0;
	int nb = 0;
	while (i<prd.nb_p){
		nb = nb + prd.t_stock[i];
		i=i+1;
	}
	return nb;
}


int valeur_globale(struct produits prd){
	//hyp : prd est une structure non vide
	//retourne le la valeur globale de prd
	int i=0;
	int somme = 0;
	while (i<prd.nb_p){
		somme = somme + prd.t_stock[i]*prd.t_prix[i];
		i=i+1;
	}
	return somme;

}

void affiche_info_globale(struct produits prd){
	//hyp : prd est une structure non vide
	//affiche le nombre de produit de prd et le prix total
	printf("Il y a %d produits totalisant ",nb_produits(prd));
	affiche_montant(valeur_globale(prd));
}

void affiche_info_detaillee(struct produits prd){
	//hyp : prd est une structure non vide
	//affiche le nombre de produit de prd et le prix total
	printf("Liste des produits\n");
	printf("==================\n");
	printf("prix | quantité\n");
	printf("------------------\n");
	int i = 0;
	while (i<prd.nb_p) {
		affiche_montant(prd.t_prix[i]);
		printf(" | %d\n",prd.t_stock[i]);
		i = i+1;
	}
	printf("------------------\n");
	
}

#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "produits.h"


int main(){
	//on définit une structure prd de type struc produits 
	int nb_p = 2;
	int t_stock[2] = {2,4};
	int t_prix[2] = {50,100};
	struct produits prd = {nb_p,t_stock,t_prix};

	assert(nb_produits(prd) == 6);
	assert(valeur_globale(prd) == 500);

	/*
	L'appel affiche_info_globale(prd) doit afficher :
	Il y a 6 produits totalisant 5€00
	*/
	affiche_info_globale(prd);

	/*
	L'appel affiche_info_detaillee(prd) doit afficher :
	==================
	prix | quantité
	------------------
	0€50 | 2
	1€00 | 4
	------------------
	*/
	affiche_info_detaillee(prd);

	return 0;	
}


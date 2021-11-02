#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "produits.h"


int main(){
	int nb_p = 2;
	int t_stock[2] = {2, 4};
	int t_prix[2] = {50, 100};
	struct produits prd = {
		nb_p,
		t_stock,
		t_prix
	};

	affiche_info_globale(prd);
	affiche_info_detaillee(prd);

	// 1 - créer des structures de produits 

	// 2 - tester les fonctions

	// 3 - tester l'affichage

	return 0;	
}


#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "auxiliaire.h"


int main (){

	//l'appel affiche_montant(50) doit afficher 0€50
	affiche_montant(50);
	printf("\n");
	//l'appel affiche_montant(500) doit afficher 5€00
	affiche_montant(500);
	printf("\n");
	//l'appel affiche_montant(5) doit afficher 0€05
	affiche_montant(5);
	printf("\n");
	//l'appel affiche_montant(0) doit afficher 0€00
	affiche_montant(0);
	printf("\n");
	//l'appel affiche montant(5000) doit afficher 50€00
	affiche_montant(5000);
	printf("\n");

	return 0;
}

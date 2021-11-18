#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "caisse.h"
#include "auxiliaire.h"

int main(){

	int t_pc[6] = {20,30,20,8,7,15};
	struct caisse c = {t_pc};

	assert(solde(c)==8305);
	
	affiche_caisse(c);
	/*
	L'appel affiche_caisse(c) doit afficher : 
	pièce de 2€00 : 20
	pièce de 1€00 : 30
	pièce de 0€50 : 20
	pièce de 0€20 : 8
	pièce de 0€10 : 7
	pièce de 0€05 : 15*/

	int t_pc2[6] = {2,3,2,2,3,5};
	struct caisse p = {t_pc2};

	ajoute_caisse(c,p);
	affiche_caisse(c);
	/* L'appel affiche_caisse(c) doit afficher : (c'est à dire la somme des deux caisses):
	pièce de 2€00 : 22
	pièce de 1€00 : 33
	pièce de 0€50 : 22
	pièce de 0€20 : 10
	pièce de 0€10 : 10
	pièce de 0€05 : 20*/



	assert(!caisse_suffit(c,9201));
	assert(caisse_suffit(c,10));
	assert(caisse_suffit(c,0));

	rend_monnaie(c,4525);
	/* L'appel affiche_rend_monnaie(c,4525) doit afficher :
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 2€00
	une pièce de 1€00
	une pièce de 0€20
	une pièce de 0€05*/

	
	// 1 - créer des caisses

	// 2 - tester l'affichage

	// 3 - tester la fonction solde
	
	// 4 - tester la fonction suffit
	
	// 5 - tester la fonction ajoute
	
	// 6 - tester la fonction rend_monnaie

	// 7 - tester la fonction prend_monnaie

	return 0;
}

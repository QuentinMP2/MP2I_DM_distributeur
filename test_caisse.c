#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "caisse.h"
#include "auxiliaire.h"

int main(){

	int t_pc[6] = {20,30,20,8,7,15};
	struct caisse c = {t_pc};

	printf("%d\n",solde(c));
	
	affiche_caisse(c);

	int t_pc2[6] = {2,3,2,2,3,5};
	struct caisse p = {t_pc2};

	ajoute_caisse(c,p);
	affiche_caisse(c);

	//affiche_caisse(prend_monnaie());

	printf("%d\n",caisse_suffit(c,9201));
	rend_monnaie(c,4525);

	
	// 1 - créer des caisses

	// 2 - tester l'affichage

	// 3 - tester la fonction solde
	
	// 4 - tester la fonction suffit
	
	// 5 - tester la fonction ajoute
	
	// 6 - tester la fonction rend_monnaie

	// 7 - tester la fonction prend_monnaie

	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "disposition.h" 
#include "coherence.h"
#include "numerotation.h" 


int main(){	
	
	// Numéros présents : 1 2 4 6 7 9 10 12 13 15 17 31 32
	int nb_num = 33;
	bool t_num[33] = {0,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
	struct numerotation numrt = {nb_num,t_num};

	int nb_rg = 4;
	int t_rg [4] = {6,5,0,2};
	struct disposition dispo = {nb_rg,t_rg};
	affiche_dispo_simple(dispo);

	affiche_dispo_simple_num(dispo,numrt);

	

	
	// 1 - créer des dispositions
	
	// 2 - tester l'affichage simple de ces dispositions

	// 3 - tester l'affichage vide de ces dispositions

	// 4 - créer des numérotations
	
	// 5 - tester si les numérotations et les dispositions sont cohérentes
	
	// 6 - tester l'affichage simple avec numéros de ces dispositions
	
	// 7 - pour les numerotations et dispositions cohérentes, tester l'affichage 

	return 0;	
}


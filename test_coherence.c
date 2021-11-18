#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "coherence.h" 

int main(){
	
	int nb_p = 3;
	int t_stock[3] = {2,4,6};
	int t_prix[3] = {50,100,150};
	struct produits prd = {nb_p,t_stock,t_prix};

	int nb_num = 33;
	bool t_num[33] = {0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
	struct numerotation numrt = {nb_num,t_num};

	int nb_num1 = 33;
	bool t_num1[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
	struct numerotation numrt1 = {nb_num1,t_num1};

	assert(coherence_numrt_prdts(numrt,prd));
	assert(!coherence_numrt_prdts(numrt1,prd));


	// Numéros présents : 1 2 4 6 7 9 10 12 13 15 17 31 32
	int nb_num2 = 33;
	bool t_num2[33] = {0,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
	struct numerotation numrt2 = {nb_num2,t_num2};

	int nb_rg = 4;
	int t_rg [4] = {6,5,0,2};
	struct disposition dispo = {nb_rg,t_rg};

	assert(!coherence_numrt_dispo(numrt2,dispo));

	// 1 - créer des structures de produits 
	
	// 2 - créer des numérotations

	// 3 - créer des dispositions

	// 4 - tester la fonction coherence_numrt_prdts

	// 5 - tester la fonction coherence_numrt_dispo

	return 0;	
}






#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "numerotation.h"

int main(){

	int nb_num = 33;
	bool t_num[33] = {0,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
	struct numerotation numrt = {nb_num,t_num};
	affiche_numrt(numrt);
	// Numéros présents : 1 2 4 6 7 9 10 12 13 15 17 31 32 

	affiche_numrt_diz(numrt);
	/* Numéros présents : 
	1 2 4 6 7 9 
	10 12 13 15 17 
	31 32 */


	int tab[12] = {1,6,8,9,22,23,27,29,43,50,51,52};
	int lg_tab = 12;
	nb_num = 52;
	affiche_numrt_diz(create_numrt_from_tab(tab,lg_tab,nb_num));
	/* 1 6 8 9 
	22 23 27 29 
	43 
	50 51 52 */
	
	printf("%d\n",ind_from_num(create_numrt_from_tab(tab,lg_tab,nb_num),23));
	//5

	printf("%d\n",prochain_num(create_numrt_from_tab(tab,lg_tab,nb_num),15));
	//22

	printf("%d\n",num_from_ind(create_numrt_from_tab(tab,lg_tab,nb_num),9));
	//50

	// 1 - créer des numérotations "à la main"

	// 2 - créer des numérotations grâce à create_numrt_from_tab
	
	// 3 - tester l'affichage
	
	// 4 - tester la fonction prochain num

	// 5 - tester les conversion numéro indice

	return 0;	
}

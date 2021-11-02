#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "numerotation.h"

int main(){
	int nb_num = 33;
    bool t_num[33] = {0,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};
	struct numerotation numrt = {nb_num, t_num};

	affiche_numrt(numrt);
	affiche_numrt_diz(numrt);

	int tab[4] = {5, 8, 15, 32};
	int lg_tab = 4;
	int nb_num = 32;

	create_numrt_from_tab(tab, lg_tab, nb_num);

	// 1 - créer des numérotations "à la main"

	// 2 - créer des numérotations grâce à create_numrt_from_tab
	
	// 3 - tester l'affichage
	
	// 4 - tester la fonction prochain num

	// 5 - tester les conversion numéro indice

	return 0;	
}

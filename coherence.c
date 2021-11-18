#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "coherence.h"



bool coherence_numrt_prdts (struct numerotation numrt, struct produits prd){
	//hyp : numrt et prd sont des structures non vides
	//renvoie 1 si numrt a autant de valeur que prd.nb_p
	int i = 0;
	int somme = 0;
	while (i<=numrt.nb_num){
		if (numrt.t_num[i]){
			somme = somme + 1;
		}
		i=i+1;
	}
	if (somme == prd.nb_p){
		return 1;
	}
	else {
		return 0;
	}
	
}


bool coherence_numrt_dispo(struct numerotation numrt, struct disposition dispo){
	//hyp : numrt et dispo sont des structures non vides
	//renvoie 1 si numrt a autant de valeur que prd.nb_p
	int i = 1;
	int j = 0;
	while (i<=dispo.nb_rg){
		int somme = 0;
		while (j<i*10){
			if (numrt.t_num[j]){
				somme = somme + 1;
			}
			j=j+1;
		}
		if (!(somme == dispo.t_rg[i-1])){
			return 0;
		} 
		i = i + 1;
	}
	return 1;
}











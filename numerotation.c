#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


#include "numerotation.h"

struct numerotation create_numrt_from_tab(int* tab, int lg_tab,int nb_num){
	//hyp : tap est non vide et nb_num<100, et nb_num>1
	//Retourne un tableau de taille lg_tab et de plus grand élément nb_num de booléens où il est écrit 1 si le numero de la case est dans tab, 0 sinon.  
	int i = 0;
	bool* t_num = (bool*)malloc(sizeof(bool)*nb_num);
	while (i<=nb_num){
		int j = 0;
		while (j<lg_tab){
			if (i == tab[j]){
				t_num[i] = 1;
			}
			else {
				t_num[0] = 0;
			}
			j=j+1;
		}
		i=i+1;
	}
	struct numerotation tableau_final = {nb_num,t_num};
	return tableau_final;
}

void affiche_numrt(struct numerotation numrt){
	//hyp : prd est une structure non vide
	//affiche les valeurs de numrt qui ne sont pas vides
	int i = 0;
	printf("Numéros présents : ");
	while(i<numrt.nb_num){
		if (numrt.t_num[i]){
			printf("%d ",i);
		}
		i = i+1;
	}
	printf("\n");
}

void affiche_numrt_diz(struct numerotation numrt){
	//hyp :prd est une structure non vide
	//affiche les valeurs de numrt qui ne sont pas vides
	int i = 0;
	bool s = false;
	printf("Numéros présents : ");
	while(i<numrt.nb_num){
		if (i%10 == 0){
			int j = i;
			while (j<i+9){
				if (numrt.t_num[j]){
					s = true;
				} 
				j = j+1;
			}
			if (s) {
				printf("\n");
			}
			s = false;
		}
		if (numrt.t_num[i]){
			printf("%d ",i);
		}
		
		i = i+1;
	}
	printf("\n");
}

int prochain_num (struct numerotation numrt, int num){
	//hyp : prd est une structure non vide et num>=0;
	// retourne le prochain numéro de numrt >= num
	int i = 0;
	int nb = -1;
	while (i<=numrt. nb_num){
		if (numrt.t_num[i]==1){
			nb = i;
			if (nb >= num && num <= i){
				return nb;
			}
		}
		i = i+1;
	}
	return -1;
	
}

int num_from_ind(struct numerotation numrt, int ind){
	//hyp : numrt est une structure non vide et num>=0;
	// retourne le ind+1 plus petit numéro de numrt
	int i = -1;
	int num = 0;
	while (i<ind){
		num = prochain_num(numrt,num+1);
		if (num == -1) {
			return num;
		}
		i=i+1;
	}
	return num;
	
}

int ind_from_num(struct numerotation numrt, int num){
	//hyp : numrt est une structure non vide et num>=0;
	// retourne l'indice (le classement) de num dans numrt

	int i = 0;
	int indice = -1;
	while (i<=numrt.nb_num){
		if (numrt.t_num[i]==1){
			indice = indice + 1;
			if (num == i){
				return indice;
			}
		}
		i = i+1;
	}
	return -1;
}
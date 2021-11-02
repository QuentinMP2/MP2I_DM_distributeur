#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


#include "numerotation.h"

struct numerotation create_numrt_from_tab(int* tab, int lg_tab, int nb_num){
	//hyp : tab est non vide, lg_tab >= 0, nb_mun < 100
	//retourne une numérotation de talle nb_num dans laquelle les numéros présents sont exactement les entiers figurants dans tab.
	bool* tab_final = (bool*) malloc(sizeof(bool) * nb_num);
	int i = 0;
	while(i < nb_num){
		
	}
}

void affiche_numrt(struct numerotation numrt){
	//hyp : numrt est une structure non vide
	//affiche les numéros présents dans la vitrine
	int i = 0;
	printf("Numéros présents : ");
	while(i < numrt.nb_num){
		if(numrt.t_num[i]){
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}

void affiche_numrt_diz(struct numerotation numrt){
   //hyp : prd est une structure non vide
   //affiche les valeurs de numrt qui ne sont pas vides
   int i = 0;
   bool s = false;
   printf("Numéros présents : ");
   while(i<numrt.nb_num){
       if(i%10 == 0){
           int j = i;
           while(j<i+9){
               if(numrt.t_num[j]){
                   s = true;
               }
               j = j+1;
           }
           if(s){
               printf("\n");
           }
           s = false;
       }
       if(numrt.t_num[i]){
           printf("%d ",i);
       }
      
       i = i+1;
   }
   printf("\n");
}


int prochain_num (struct numerotation numrt, int num){
	//hyp :
	//
	printf("--- Il faut définir la fonction prochain_num dans le fichier numerotation.c\n");
	assert(false);
}

int num_from_ind(struct numerotation numrt, int ind){
	//hyp :
	//
	printf("--- Il faut définir la fonction num_from_ind dans le fichier numerotation.c\n");
	assert(false);
}

int ind_from_num(struct numerotation numrt, int num){
	//hyp :
	//
	printf("--- Il faut définir la fonction ind_from_num dans le fichier numerotation.c\n");
	assert(false);
}



#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "disposition.h"
#include "auxiliaire.h"


void affiche_dispo_simple(struct disposition dispo){
	//hyp : dispo est une structure non vide
	// afffiche le nombre de produit différent par rangé de dispo
	int i = 1;
	while (i<=dispo.nb_rg){
		printf("rangée %d : %d produits\n",i,dispo.t_rg[i-1]);
		i=i+1;
	}
}


void affiche_dispo_simple_num(struct disposition dispo, struct numerotation numrt){
	//hyp : dispo est une structure non vide
	// afffiche le nombre de produit différent par rangé de dispo
	int i = 1;
	int num = 0;
	while (i<=dispo.nb_rg){
		printf("rangée %d : ",i);
		int j = 0;
		while (j<dispo.t_rg[i-1]){
			printf("%d ",prochain_num(numrt,num));
			num = 1 + prochain_num(numrt,num);
			j = j+1;
		}
		printf("\n");
		i=i+1;
	}
}



int nbc_elem_dispo(struct disposition dispo){
	//hyp :
	//
	printf("--- Il faut définir la fonction nbc_elem_dispo dans le fichier disposition.c\n");
	assert(false);
}



void affiche_trait(int nbc_elem){
	//hyp :
	//
	printf("--- Il faut définir la fonction affiche_trait dans le fichier disposition.c\n");
	assert(false);
}


void affiche_case_vide(int nbc_elem){
	//hyp :
	//
	printf("--- Il faut définir la fonction solde dans le fichier disposition.c\n");
	assert(false);
}


void affiche_case_num(int nbc_elem, int num){
	//hyp :
	//
	printf("--- Il faut définir la fonction affiche_case_num dans le fichier disposition.c\n");
	assert(false);
}


void affiche_ligne_vide(int nbc_elem, int nb_cases){
	//hyp :
	//
	printf("--- Il faut définir la fonction affiche_ligne_vide dans le fichier disposition.c\n");
	assert(false);
}


int affiche_ligne_num(int nbc_elem, int nb_cases, struct numerotation numrt, int num_0){
	//hyp :
	//
	printf("--- Il faut définir la fonction affiche_ligne_num dans le fichier disposition.c\n");
	assert(false);
}


void affiche_dispo_vide(struct disposition dispo){
	//hyp :
	//
	printf("--- Il faut définir la fonction affiche_dispo_vide dans le fichier disposition.c\n");
	assert(false);
}


void affiche_dispo_num(struct disposition dispo, struct numerotation numrt){
	//hyp :
	//
	printf("--- Il faut définir la fonction affiche_dispo_num dans le fichier disposition.c\n");
	assert(false);
}



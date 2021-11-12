#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "caisse.h"
#include "auxiliaire.h"

const int nb_pc = 6;
const int val_pc[6] = {200, 100, 50, 20, 10, 5};

int solde( struct caisse c){
	//hyp : caisse est une structure on vide
	//retourne la somme de la monnaie disponible
	int i = 0;
	int solde = 0;
	while (i<6){
		solde = solde + c.t_pc[i]*val_pc[i];
		i = i+1;
	}
	return solde;
}


void affiche_caisse(struct caisse c){
	//hyp : c est une structure non vide
	//affichge le nombre de pièces pour chaque valeur de pièces
	int i = 0;
	while (i<6){
		printf("pièce de ");
		affiche_montant(val_pc[i]);
		printf(" : %d\n",c.t_pc[i]);
		i=i+1;
	}
}


void ajoute_caisse( struct caisse c, struct caisse p){
	//hyp : c et p sont des structures non vide 
	//ajoute les pièces de c2 à c1
	int i = 0;
	while (i<6){
		c.t_pc[i] = c.t_pc[i] + p.t_pc[i];
		i=i+1;
	}
	
	
}

struct caisse prend_monnaie(){
	//hyp : 
	//retourne une caisse remplie par l'utilisateur
	int i = 0;
	int* t_pc = (int*)malloc(sizeof(int)*6);
	struct caisse c = {t_pc};
	while (i<6){
		printf("Combien de pièces de ");
		affiche_montant(val_pc[i]);
		printf(" voulez-vous insérer dans la machine ? ");
		scanf("%d",&c.t_pc[i]);
		i = i + 1;
	}
	return c;
}

bool caisse_suffit(struct caisse c, int m){
	//hyp : c est une structure non vide, m <= 0
	//renvoie s'il est possible de constituer la somme m avec les pièces disponibles dans c
	int i = 0;
	while (i<6){
		while (m>=val_pc[i] && c.t_pc[i]){
			m = m - val_pc[i];
			c.t_pc[i] = c.t_pc[i] - 1;
		} 
		i = i + 1;
		
	}
	return (m == 0);
}


void rend_monnaie(struct caisse c, int m){
	//hyp : c est une structure non vide, m est un montant valide (que nous pouvons rendre avec les pièces de la caisse c)
	//renvoie s'il est possible de constituer la somme m avec les pièces disponibles dans c
	int i = 0;
	while (i<6){
		while (m>=val_pc[i] && m!=0){
			printf("une pièce de ");
			affiche_montant(val_pc[i]);
			printf("\n");
			m = m - val_pc[i];
			c.t_pc[i] = c.t_pc[i] - 1;
		} 
		i = i + 1;
		
	}
}









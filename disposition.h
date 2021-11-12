#ifndef DISPO_H
#define DISPO_H

#include "numerotation.h"

struct disposition{
	int nb_rg;
	//le nombre de rangées
	int* t_rg;
	//le nombre de produits possibles sur chaque rangée
};

//affichage simple
void affiche_dispo_simple(struct disposition dispo);
void affiche_dispo_simple_num(struct disposition dispo, struct numerotation numrt);

//affichage graphique
//int nbc_elem_dispo(struct disposition dispo);

//void affiche_trait(int nbc_elem);

//void affiche_case_vide(int nbc_elem);
//void affiche_case_num(int nbc_elem, int num);

//void affiche_ligne_vide(int p, int nb_cases);
//int affiche_ligne_num(int nbc_elem, int nb_cases, struct numerotation numrt, int num_0);

//void affiche_dispo_vide(struct disposition dispo);
//void affiche_dispo_num(struct disposition dispo, struct numerotation numrt);

#endif

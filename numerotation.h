#ifndef NUMRT_H
#define NUMRT_H


struct numerotation{
	int nb_num;   	//le nombre de numéros possibles
	bool* t_num;  	//indique pour chaque numéro s'il est présent
};

//pour initialiser + facilement
struct numerotation create_numrt_from_tab(int* tab, int lg_tab, int nb_num);

//affichage basique
void affiche_numrt(struct numerotation numrt);
void affiche_numrt_diz(struct numerotation numrt);

//pour parcourir les numéros présent
//int prochain_num(struct numerotation numrt, int num);

//conversion indice <-> numéros
//int num_from_ind(struct numerotation numrt, int ind);
//int ind_from_num(struct numerotation numrt, int num);

#endif

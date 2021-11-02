#ifndef PRD_H
#define PRD_H


struct produits {
	int nb_p;
	//le nombre de produits
	int* t_stock;
	//pointeur vers un tableau de nb_p entiers indiquant le stock de chaque produit
	int* t_prix;
	//pointeurs vers un tableau de nb_p entiers indiquant le prix de chaque produit
};


int nb_produits(struct produits prd);
int valeur_globale(struct produits prd);

void affiche_info_globale(struct produits prd);
void affiche_info_detaillee(struct produits prd);

#endif

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "distributeur.h"


int main (){

	int nb_rg = 3;
	int t_rg[3] = {4,1,3};
	struct disposition dispo= {nb_rg,t_rg};

	int nb_p = 8;
	int t_stock[8] = {2,3,4,7,2,3,1,9};
	int t_prix[8] = {50,200,70,90,150,60,20,5};
	struct produits prd = {nb_p,t_stock,t_prix};


	int nb_num = 28;
	bool t_num[28] = {0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1};
	struct numerotation numrt = {nb_num, t_num};

	int t_pc[6] = {10,10,10,10,10,10}; 
	struct caisse c = {t_pc};	
	struct distributeur d = {prd, numrt, dispo, c};
	//selection_produit(d);

	bool b = true;
	while (b){
		b = transaction(d);
	}
	

	
	// 1 - creer un a un les objets constituant un distributeur
	
	// 2 - vérifier leur cohérence avant de les rassembler en un distributeur

	// 3 - interragit

	return 0;
}

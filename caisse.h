#ifndef CAISSE_H
#define CAISSE_H

#include <stdbool.h>

struct caisse{
	int* t_pc;
	//le nombre de pièces diponibles pour chaque pièces
};

int solde(struct caisse c);
void affiche_caisse(struct caisse c);
void ajoute_caisse( struct caisse c, struct caisse p);

struct caisse prend_monnaie();
bool caisse_suffit(struct caisse c, int m);
void rend_monnaie( struct caisse c, int m);

#endif

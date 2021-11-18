#ifndef DISTRIB_H
#define DISTRIB_H

#include <stdbool.h>

#include "produits.h"
#include "numerotation.h"
#include "disposition.h"
#include "coherence.h"
#include "caisse.h"


struct distributeur{
	struct produits prd;
	struct numerotation numrt;
	struct disposition dispo;
	struct caisse c;	
};

int selection_produit(struct distributeur d);
bool transaction (struct distributeur d);


#endif

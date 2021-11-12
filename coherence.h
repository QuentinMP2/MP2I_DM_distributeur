#ifndef COHERENCE_H
#define COHERENCE_H

#include <stdbool.h>

#include "produits.h"
#include "disposition.h"
#include "numerotation.h"


bool coherence_numrt_prdts (struct numerotation numrt, struct produits prd);
bool coherence_numrt_dispo(struct numerotation numrt, struct disposition dispo);

#endif

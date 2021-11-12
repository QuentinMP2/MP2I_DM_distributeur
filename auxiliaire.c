#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

void affiche_montant(int nb_centimes){
	//hyp : nb_centimes >= 0
	//affiche nb_centimes en euros
	
	int ucentimes = nb_centimes%10;
	nb_centimes = nb_centimes/10;
	int dcentimes = nb_centimes%10;
	int ccentimes = nb_centimes/10;
	printf("%d€%d%d",ccentimes,dcentimes,ucentimes);

}
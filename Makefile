auxiliaire.o : auxiliaire.c auxiliaire.h
	gcc -c auxiliaire.c -o auxiliaire.o

test_auxiliaire : test_auxiliaire.c auxiliaire.o
	gcc test_auxiliaire.c auxiliaire.o -o test_auxiliaire

produits.o : produits.c produits.h
	gcc -c produits.c -o produits.o
	
test_produits : test_produits.c produits.o auxiliaire.o
	gcc test_produits.c produits.o auxiliaire.o -o test_produits
	
numerotation.o : numerotation.c numerotation.h
	gcc -c numerotation.c -o numerotation.o
	
test_numerotation : test_numerotation.c numerotation.o 
	gcc test_numerotation.c numerotation.o  -o test_numerotation

coherence.o : coherence.c coherence.h
	gcc -c coherence.c -o coherence.o

test_coherence_1 : coherence.o numerotation.o produits.o auxiliaire.o test_coherence.c
	gcc test_coherence.c coherence.o numerotation.o produits.o auxiliaire.o -o test_coherence_1

disposition.o : disposition.c disposition.h
	gcc -c disposition.c -o disposition.o

test_disposition : test_disposition.c disposition.o numerotation.o coherence.o auxiliaire.o
	gcc test_disposition.c disposition.o numerotation.o coherence.o auxiliaire.o -o test_disposition

test_coherence : test_coherence.c coherence.o numerotation.o produits.o disposition.o auxiliaire.o
	gcc test_coherence.c coherence.o numerotation.o produits.o disposition.o auxiliaire.o -o test_coherence

caisse.o : caisse.c caisse.h
	gcc -c caisse.c -o caisse.o	
	
test_caisse : test_caisse.c caisse.o auxiliaire.o
	gcc test_caisse.c caisse.o auxiliaire.o -o test_caisse

distributeur.o : distributeur.c distributeur.h 
	gcc -c distributeur.c -o distributeur.o	
	
test_distributeur : test_distributeur.c distributeur.o numerotation.o produits.o disposition.o coherence.o auxiliaire.o caisse.o
	gcc test_distributeur.c numerotation.o produits.o disposition.o coherence.o caisse.o auxiliaire.o  distributeur.o -o test_distributeur

all : test_auxiliaire test_produits test_numerotation test_disposition test_coherence test_caisse test_distributeur
		
clean :
	rm -f *.o
	rm -f test_produits
	rm -f test_numerotation
	rm -f test_disposition
	rm -f test_coherence_1
	rm -f test_coherence
	rm -f test_auxiliaire
	rm -f test_caisse
	rm -f test_distributeur
	
	

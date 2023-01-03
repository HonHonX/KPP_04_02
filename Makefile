HEADERS = groessereZahl.h

default: vergleich

vergleich.o: vergleich.c $(HEADERS)
	gcc -c vergleich.c -o vergleich.o

vergleich: vergleich.o
	gcc vergleich.o -o vergleich

clean: 
	-rm -f vergleich.o
	-rm -f vergleich

default: vergleich

vergleich.o: vergleich.c
	gcc -c vergleich.c -o vergleich.o

vergleich: vergleich.o
	gcc vergleich.o -o vergleich

clean: 
	-rm -f vergleich.o
	-rm -f vergleich

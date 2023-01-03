HEADERS = vergleich.h

default: vergleich

vergleich.o: vergleich.c
  gcc -c vergleich.c -o vergleich.o
  
rechner: vergleich.o
  gcc vergleich.o -o vergleich
  
clean:
  -rm -f vergleich.o
  -rm -f vergleich

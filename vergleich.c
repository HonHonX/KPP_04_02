#include<stdio.h>

//Funktions-Prototypen
int vergleich (int zahl1, int zahl2);

//Hauptprogramm
int main () {

	/*
	* Vergleich zweier Zahlen
	*/

	printf("\n ************************** ");
	printf("\n *   ^,,,,^   *           * ");
	printf("\n *  ( o x o)  * Vergleich * ");
	printf("\n *  ( 7   7)  *           * ");
	printf("\n *   ´´´´´´   *   ©S.Buch * ");
	printf("\n ************************** \n\n");
	
  //Variablen
  int zahl1, zahl2;
  
	//Eingabe Zahl 1
  printf("\nBitte geben Sie zwei Zahlen ein. Ihre Zahl 1: ");
  scanf("%d", &zahl1);
  
  //Eingabe Zahl 2
  printf("\nIhre Zahl 2: ");
  scanf("%d", &zahl2);
  
  //Ausgabe
  printf("\nDie größere Zahl der beiden Zahlen lautet %d\n",vergleich(zahl1,zahl2)); 
    
  //Ende
  printf("\n\n");
  return 0;
}

//Funktionen
int vergleich (int zahl1, int zahl2) {
  if (zahl1>zahl2)
    return zahl1;
  else
     return zahl2;
}

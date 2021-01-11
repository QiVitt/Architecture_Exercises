//Mentre la ricorsione di Fibonacci è basata su due parametri
//e quindi si rende indispensabile esplicitare due casi base
//AA Tanti casi base quanti parametri esplicitati
//in questo esercizio l'unico parametro/indice su cui iteriamo
//risulta essere l'esponente in modo tale da definire esattamente
//tante chiamate ricorsive quante il valore assunto da questo.

//Può essere d'aiuto valutare il passo ricorsivo facendosi
//la seguente domanda.. Come sono arrivato a questo valore?
//Andando quindi a valutare i termini precedenti nella successione
//ed esplicitando come questi sono stati calcolati a loro volta

//Ulteriore domanda d'aiuto può essere
//Qual è la condizione che deve ricorrere?
//Es caso dell'mcd, deve ricorrere il calcolo stesso aggiornando
//i parametri della funzione nella chiamata ricorsiva

#include <stdio.h>

int rec_pow(int base,int exp)
{
  if(exp==0) return 1;
  else return base*rec_pow(base,(exp-1));
  //Current base che moltiplica tutte le basi precedenti già elevate
  //a potenza
}

int main( )
{
  int initial_base;
  int initial_exponent;
  int result;

  printf("Inserire il valore della base: ");
  scanf("%d", &initial_base);
  printf("Inserire il valore dell'esponente: ");
  scanf("%d", &initial_exponent);

  result = rec_pow(initial_base, initial_exponent);
  printf("Il risultato calcolato e': %d", result);

  return 0;
}
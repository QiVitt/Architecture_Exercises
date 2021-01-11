// ESERCIZI BASE SULLA MANIPOLAZIONE DEI POINTERS

/*
  @filename f_04_pointer.c
  @author(s) Giulio Caravagna, Gaia Saveri, Pietro Morichetti
  @brief esercizi su pointers

  @date 19/10/2020
  @last update 19/10/2020
  @version 1.1

  Esercizi sulla gestione e manipolazione dei pointers in C,
  necessari per una semplice ma chiara comprensione di questi oggetti.

  @compilare gcc ./f_4_pointer.c -o ./f_4.o
  @eseguire ./f_4.o
*/

#include <stdio.h> // printf

/*
  @fun main

  Esempio di come usare i pointers.

  @param VOID
  @see VOID
  @return VOID
*/
int main(void) {

  int check;
  // dichiaro le variabili intere v1 e v2 
  int v1;
  int v2;

  printf("\n\nInserisci un valore compreso in [1; 18].\n");
  printf("Ti mostrerò i risultati di tutti gli esercizi\nfino al valore inserito.\n\ncheck: ");
  scanf("%d", &check);

  /* 1. stampare i valori di v1 e v2 */
  printf("\n\n1. stampare i valori di v1 e v2\n");
  if(1 <= check){
    printf("Valore di v1: %d\n", v1);
    printf("Valore di v2: %d\n", v2);
  }
  printf("\n\n"); 
  
  /* 2. stampare indirizzi di v1 e v2 */
  printf("2. stampare indirizzi di v1 e v2\n");
  if(2 <= check){
    printf("Indirizzo di v1: %p\n", &v1);
    printf("Indirizzo di v2: %p\n", &v2);
  }
  printf("\n\n");

  /* 3. assegnare i valori a v1 e v2 e stamparli */
  printf("3. assegnare i valori a v1 e v2 e stamparli\n");
  v1 = 5;
  v2 = 10;

  if(3 <= check){
    printf("Valore di v1: %d\n", v1);
    printf("Valore di v2: %d\n", v2); 
  }
  printf("\n\n");  

  // dichiaro i pointers p1 e p2
  int *p1;
  int *p2;

  /* 4. stampare i valori delle variabili puntate da p1 e p2 */
  printf("4. stampare i valori delle variabili puntate da p1 e p2\n");
  if(4 <= check){
    printf("Valore di p1: %d\n", *p1);
    printf("Valore di p2: %d\n", *p2);
  }
  printf("\n\n");  

  /* 5. stampare indirizzi di p1 e p2 */
  printf("5. stampare indirizzi di p1 e p2\n");
  if(5 <= check){
    printf("Indirizzo di p1: %p\n", &p1);
    printf("Indirizzo di p2: %p\n", &p2);
  }
  printf("\n\n");  

  // 6. assegno indirizzi ai pointers p1 e p2 
  printf("6. assegno indirizzi ai pointers p1 e p2\n");
  p1 = &v1;
  p2 = &v2;
  if(6 <= check) printf("assegnazione indirizzi eseguita.\n");
  printf("\n\n");

  /* 7. stampare indirizzi salvati in p1 e p2 */
  printf("7. stampare indirizzi salvati in p1 e p2\n");
  if(7 <= check){
    printf("Indirizzo contenuto in p1: %p\n", p1);
    printf("Indirizzo contenuto in p2: %p\n", p2);
  }
  printf("\n\n"); 

  /* 8. stampare i valori delle variabili puntate da p1 e p2 */
  printf("8. stampare i valori delle variabili puntate da p1 e p2\n");
  if(8 <= check){
    printf("Valore puntato da p1: %d\n", *p1);
    printf("Valore puntato da p2: %d\n", *p2);
  }
  printf("\n\n");

  /* 9. incrementare v1 e stampare il suo valore */
  printf("9. incrementare v1 e stampare il suo valore\n");
  if(9 <= check){
    v1++; //v1 = v1 + 1
    printf("Valore incrementato di v1: %d\n", v1);
  }
  printf("\n\n");

  /* 10. stampare l'indirizzo contenuto da p1 */
  printf("10. stampare l'indirizzo contenuto da p1\n");
  if(10 <= check) printf("Indirizzo contenuto in p1: %p\n", p1);
  printf("\n\n");

  /* 11. stampare il valore della variabile puntata da p1 */
  printf("11. stampare il valore della variabile puntata da p1\n");
  if(11 <= check) printf("Valore puntato da p1: %d\n", *p1);
  printf("\n\n");

  /* 12. assegnare a p2 l'indirizzo di v1 */
  printf("12. assegnare a p2 l'indirizzo di v1\n");
  if(12 <= check){
    p2 = &v1;
    printf("assegnazione indirizzo eseguita.\n");
  }
  printf("\n\n");

  /* 13. stampare il valore della variabile puntata da p2 */
  printf("13. stampare il valore della variabile puntata da p2\n");
  if(13 <= check) printf("Valore puntato da p2: %d\n", *p2);
  printf("\n\n"); 

  /* 14. incrementare il valore della variabile puntata da p1, attraverso p1 stesso */
  printf("14. incrementare il valore della variabile puntata da p1, attraverso p1 stesso\n");
  if(14 <= check){
    (*p1)++; // oppure *p1 = *p1 + 1, oppure *p1 += 1;
    printf("incrementato eseguito\n");
  }
  printf("\n\n");

  /* 15. stampare il valore della variabile puntata da p2 */
  printf("15. stampare il valore della variabile puntata da p2\n");
  if(15 <= check) printf("Valore puntato da p2: %d\n", *p2);
  printf("\n\n");

  /* 16. dichiarare e inizializzare il pointer a pointer p3 */
  printf("16. dichiarare e inizializzare il pointer p3 all'indirizzo del pointer p2\n");
  int **p3 = &p2;
  if(16 <= check) printf("assegnazione eseguita\n");
  printf("\n\n");

  /* 17. stampare il valore della variabile puntata da p3 (puntata a sua volta da p2), tramite p3 stesso */
  printf("17. stampare il valore della variabile puntata da p3 (puntata a sua volta da p2), tramite p3 stesso\n");
  if(17 <= check) printf("Valore puntato da p3: %d\n", **p3);
  printf("\n\n");  

  /* 18. decrementare e stampare il valore della variabile puntata da p3 (puntata a sua volta da p2), tramite p3 stesso */
  printf("18. decrementare e stampare il valore della variabile puntata da p3 (puntata a sua volta da p2), tramite p3 stesso\n");
  if(18 <= check){
    (**p3)--;
    printf("Valore puntato da p3: %d\n", **p3);   
  }

  return(0);
}

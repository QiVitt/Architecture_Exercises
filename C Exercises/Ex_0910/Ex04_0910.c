
//Determinare la funzione del seguente frammento di codice in C

int a, b, c;

scanf("%d", &a);
scanf("%d", &b);

if (a>b)
{
  c = a;
  a = b;
  b = c;
}

printf("%d \n", b);

//Il programma prende in input due numeri interi a e b
//Quindi verifica se il primo è più grande del secondo
//In caso la condizione sia verificata scambia i valori delle
//due variabili utilizzando la variabile di appoggio c
//Viene quindi stampato il valore della variabile b aggiornato.
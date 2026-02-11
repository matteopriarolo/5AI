#include <stdio.h>

/*

------------------------------------------------------------------------------------------------------------------------------------------
Si richiede di implementare in linguaggio C, un calcolatore di operazioni. L'utente dovrà inserire due numeri e selezionare l'operazione desiderata tramite un menù, del tipo:
1. Somma

2. Sottrazione

3. Moltiplicazione

4. Divisione 

Dopo aver scelto il calcolo da effettuare, il risultato deve essere stampato a schermo tramite opportuna frase. 

Infine, l'utente dovrà poter effettuare una nuova operazione, inserendo altri due numeri, oppure far terminare il programma.
------------------------------------------------------------------------------------------------------------------------------------------

*/


int main(){
	//variabili input
	int a = 0, b = 0;
	int risultato, simbolo; // simbolo è int per la scelta multimpla (switc-case) e rappresenta il numero scelto del menu
	
	do{
		printf("Inserisci il 1^ numero: ");
		scanf("%d", &a);
		
		printf("Inserisci il 1^ numero: ");
		scanf("%d", &b);
		
		printf("Inserisci l' operazione da fare:  ");
		printf("\n1. Somma \n2. Sottrazione\n3. Moltiplicazione\n4. Divisione \n");
		scanf("%d", &simbolo);
		printf("\n-----------------\n");
	

		switch(simbolo){ // controlla che numero ha messo l' utente 
			case 1: 
				risultato = a+b; break; 
				
			case 2: 
				risultato = a-b; break;
				
			case 3: 
				risultato = a*b; break;
				
			case 4: 
				risultato = a/b; break;	
				
			default: printf("Riprova! \n\n");	simbolo = 0; 
		}
	} while(simbolo == 0); // se il valore della variabile simbolo non è ne 1 n 2 ne 3 ne 4 inserisce il valore 0 e di conseguenza fa ripetere l' azione
	
	
	switch(simbolo){ // ricontrolla cos' ha messo l' utente e in base a quello scrive la frase
		case 1: 
			printf("La tua somma e' "); break; 
			
		case 2: 
			printf("La tua sottrazione e' "); break;
			
		case 3: 
			printf("La tua moltiplicazione e' "); break;
			
		case 4: 
			printf("La tua divisione e' "); break;
	}
	
	printf("%d", risultato); // stampa dopo la frase precendente ilrisultato

	return 0;
}







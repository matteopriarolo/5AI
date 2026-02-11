#include <stdio.h>
/*

------------------------------------------------------------------------------------------------------------------------------------------
Sviluppare un programma in linguaggio C che consente all'utente di registrare le valutazioni degli studenti di una classe. 
Il programma chiede all'utente il numero totale degli studenti della classe e il numero di voti per ciascuno di essi. 
Per ogni studente, bisogna inserire i voti, che possono essere  'A',  'B',  'C',  'D'. 

Calcolare e stampare:

- per ogni studente il totale dei voti ottenuti in ciascuna categoria ('A', 'B', 'C', 'D');  solo di uno 

- il totale complessivo di ogni categoria per tutta la classe; di tutta la calsse

- il massimo e il minimo voto, indicando quale categoria ha ottenuto il maggior e il minor numero di voti. 
(ad esempio “Il maggior numero di voti ottenuti è 3 sulla votazione A.” “Il minor numero di voti ottenuti è 1 sulla votazione D.”)
------------------------------------------------------------------------------------------------------------------------------------------

*/
	
int main(){
	//variabili input
 	int studenti_tot = 0;
 	int voti = 0; // quanti voti per studente 
 	char voto = 0; // A B C o D
 	int a = 0,b = 0,c = 0 ,d = 0; // calcola quanti voti
 	int a_tot = 0,b_tot = 0,c_tot = 0 ,d_tot = 0;
 	
 	
 	//contatori (variabili lavoro)
 	 	int v = 1; // dichiaro variabile contatore v
 	 	int i = 1; // dichiaro variabile contatore i
 	
 	printf("Inserisci quanti studenti sono presenti nella classe: ");
 	scanf("%d", &studenti_tot);
 	

 	for ( i = 1; i <= studenti_tot; i++){ // giro per quanti studenti 
 		printf("\ninserisci quanti voti ha lo studente %d: ", i);
 		scanf("%d", &voti);
{		
	// 		v = 1;
	// 		do{
	// 			printf("Inserisci il %d^ voto", v);
	// 			scanf(" %c", &voto);
	// 			
	// 			switch(voto){ // se voto è... aumenta di 1 contando da 0
	// 				case 'A': 
	//				 	a++; break;
	//				case 'B':
	//					b++; break;
	//				case 'C':
	//					c++; break;
	//				case 'D':
	//					d++; break;
	//					
	//				default: printf("Riprova");
	//			}
	//			v++;	
	//		}while(v<= voti);
}

 		for(v = 1; v <= voti; v += 1){ // giro per quanti voti e determina ogni votoù
 			a = 0;
 			b = 0;
 			c = 0;
 			d = 0;
 			printf("Inserisci il %d^ voto: ", v);
 			scanf(" %c", &voto);
 			
 			switch(voto){ // se voto è... aumenta di 1 contando da 0
 				case 'A': 
				 	a++; a_tot++; break;
				case 'B':
					b++; b_tot++; break;
				case 'C':
					c++; c_tot++; break;
				case 'D':
					d++; d_tot++; break;
			}
 			
		}
		
		printf("Lo studente %d ha avuto voti in categoria: \nA = %d, \nB = %d \nC = %d \nD = %d", i,a,b,c,d);
 		
	}
	printf("\nI voti compessivi di tutta la classe in base ad ogni categoria sono \nA toale = %d \nB toale = %d \nC toale = %d \nD toale = %d", a_tot, b_tot, c_tot, d_tot);
 	


	return 0;
}


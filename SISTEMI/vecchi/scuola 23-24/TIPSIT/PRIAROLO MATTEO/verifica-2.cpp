#include <iostream>
using namespace std;

	const int nVet = 2;
	const int maxDim = 10;
	
	void riempVet( int vet[], int dim ){
		cout<< "Inserisci il numero nelle varie posizioni del vettore: "<< endl;
		
		for( int i = 0; i < dim; i++ ){
			cout<< "pos. "<< i << " ->";
			cin>> vet[i];
		}
		
	}
	
	void pari( int v1[], int v2[], int d1, int d2, int nP, int pariIn[] ){
		for ( int i = 0; i < d1; i++ ){
			if ( v1[i]%2 == 0 ){
				nP += 1;
				pariIn[ i ] = v1[ i ];
			}
		}
	}

int main(){
	int nP = 0; // numero dei numeri pari

	
	int dim[2] = {1,1}; // le due dimensioni degli array
	int pariIn[nP]; // confronto numeri pari 
	
	// dimensione array
	for ( int i = 0; i < nVet; i++ ){
		do{ // pone che dim deve essere monore di 11
			

			cout<< "Inserisci il numero di numeri che vuoi inserire nel vettore "<< i+1 << ":";
			cin>> dim[i];
		
		
			if( dim[i] > maxDim ) // messsaggio di errore
				cout<< "Errore! il valore deve essere minore di " << maxDim+1<<"! Riprova" << endl;	
					
		}while( dim[ i ] > maxDim );
	}
	
	
	int vet1[ dim[ 0 ] ];
	int vet2[ dim[ 1 ] ];
	
	riempVet( vet1, dim[ 0 ] );
	riempVet( vet2, dim[ 1 ] );
	
	
	pari( vet1, vet2, dim[0], dim[1], nP, pariIn );
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout<< "Inserisci ilnumero della gransdezza della matrice: ";
	cin>> n;
	
	int matr[n][n];
	int diag[n*2];
	
	for( int i = 0; i < n; i++ ){ // inserimento matrice
		for( int k = 0; k < n; k++ ){
			cin>> matr[i][k];
		}
	}
	
	
		// stampa matrice 
	for( int i = 0; i < n; i++ ){
		for (int k = 0; k < n; k++){
			cout<< matr[i][k] << "\t";
		} 
		cout<<"\n";
	}
	
	
	for( int i = 0; i< n; n++ ){ // diagonale della matrice
		for( int k = 0; k < n; k++ ){
			if( i == k ){
				diag[ i ] = matr[ i ][ i ];
			}
		}
	}
	

	
	// calcolo somma delle diagonali
	for( int i = 0; i < n*2; i++ ){
		diag[ i ] = diag[ i ]+ diag[ i +1 ];
	}
	
	
	for ( int i = 0; i < n; i++ ){
		cout<< diag[ i ];
	}
	
	
	
	return 0;
}

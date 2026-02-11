#include <iostream>
using namespace std;

const int fam = 12; // 12famiglie
const int periodoMin = 7; // 7 giorni è periodo minimo

int giorniIn[ fam ] ; // arrei di n di giorni in cui ogni famiglia sta in cambping


int main(){
	
	for( int i = 0; i < fam; i++){
		do{
			
			cout<< "Inserisci il nuero di giorni che la famiglia numero " << i+1 <<" soggiorna: "<<endl;
			cout<<"->";
			
			cin>> giorniIn[ i ]; // inserimento dei giorni di quella famiglia	
			
			if( giorniIn[i] <= periodoMin)
				cout<< "La permanenza deve essere minimo di 7 giorni, riprova "<< endl << endl;
					
		}while( giorniIn[i] <= periodoMin); // finchè il periodo dei giorni non sia maggiore o uguale
	}
	
	
//	for( int i = 0; i<fam; i++)
//		cout<< "--"<< giorniIn[i];
	
	int min = giorniIn[0], max = 0;
	for ( int k = 0; k < fam; k++){ // controlla il minore e mggiore
		
		if ( min >= giorniIn[ k ] ) // controllo mnore
			min = giorniIn[ k ];
			
		if ( max <= giorniIn[ k ] ) // controllo maggiore
			max = giorniIn[ k ];
		
	}
	

	cout<< "Il minor soggiorno e': "<< min << endl;
	cout<< "Il maggior soggiorno e': "<< max << endl;

		
		
	
    


    return 0;
}

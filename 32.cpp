#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	
	
	int n;
	cout<<"Digite el tamanio de la fila y columna: ";
	cin>>n;
	
	int latino[n][n];
	int i,aux=i++;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				latino[i][j]=1;
			}else{
				latino[i][j]=n+aux;
			}
		}
	}
	
	cout<<"\nLA MATRIZ UNITARIA DE N*N\n\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<latino[i][j]<<"\t\t";
		}
		cout<<"\n\n";
	}
	
getch();
return 0;
}

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	
	
	int n;
	cout<<"Digite el tamanio de la fila y columna: ";
	cin>>n;
	
	int unitario[n][n];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				unitario[i][j]=1;
			}else{
				unitario[i][j]=0;
			}
		}
	}
	
	cout<<"\nLA MATRIZ UNITARIA DE N*N\n\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<unitario[i][j]<<"\t\t";
		}
		cout<<"\n\n";
	}
	
getch();
return 0;
}

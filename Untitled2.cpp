#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	
	int matriz[10][10],aux=0;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			matriz[i][j] = rand() % 99;
		}
	}
	
	cout<<"\nLA MATRIZ GENERADA ALEATORIAMENTE DE 10*10\n\n";
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<matriz[i][j]<<"\t\t";
		}
		cout<<"\n\n";
	}
	
	
	for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            for(int x=0; x<10;x++){
                for(int y=0; y<10; y++){
                    if(matriz[i][j]<matriz[x][y]){
                        aux=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=aux;
                    }
                }
            }
         }
    }
    
	cout<<"\nLA MATRIZ ORDENADA DE 10*10\n\n";
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cout<<matriz[i][j]<<"\t\t";
		}
		cout<<"\n\n";
	}
   
getch();
return 0;
}

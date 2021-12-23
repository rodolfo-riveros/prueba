#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int n=0;
   
    cout<<"ingrese el tamanio n del cuadrado: ";
    cin>>n;
      
    for(int i=1;i<=n;i++) {
            for(int j=i;j <=n ;j++){
            	for(int k=0;k<=n;k++){
            	if (j>n){
                        for(int j=1; k <= n ; k++,j++){
                        	cout<<j;
                        }
                }
                else
                    cout<<j;	
				}
            }
        cout<<"\n";
        }    
    system ("pause");
}

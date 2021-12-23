#include<iostream>

using namespace std;
int main(){
	int n;
	cout<<"Digite el tamanio del vector:";
	cin>>n;
	
	
	int vector[n];
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>vector[i];
	}
	
	cout<<"Vector Original"<<endl;
	for(int i=0;i<n;i++){
		cout<<vector[i];	
	}
	
	cout<<"\nVector Inversa"<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<vector[i];	
	}
	return 0;
}

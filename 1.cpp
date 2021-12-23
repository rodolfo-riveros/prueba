#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n,p=0,i=0,c=0;
	cout<<"Digite el numero:";
	cin>>n;
	
	if(n % 2==0){
	p=p+1;
	}else{
	i=i+1;
	c=c+1;	
	}
	cout<<"los numeros pares son:"<<p<<endl;
	cout<<"los numeros impares son:"<<i<<endl;	
getch();
return 0;	
}


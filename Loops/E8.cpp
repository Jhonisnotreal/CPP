//Escriba un programa que calcule el valor de: 1+3+5+�+2n-1

#include<iostream>
using namespace std;

int main(){
	int nElementos, sumaTotal = 0;
	
	cout<<"Digite el numero de elementos a sumar: "; cin>>nElementos;
	
	for(int i=1; i<=2*nElementos-1; i+=2){
		sumaTotal += i; 
	}
	
	cout<<"\nLa suma total es: "<<sumaTotal<<endl;
	
	
	return 0;
}

//pide al usuario su nombre en mayuscula si empieza por A convierte lo a minusculas si no pues no

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char nombre[20];

	cout<<"Digita tu nombre en mayusculas: "; cin.getline(nombre, 20, '\n');

	if(strncmp(nombre,"A",1) == 0 ){
		strlwr(nombre);
		cout<<nombre<<endl;
	}
	else {
		cout<<"El nombre no empieza con la letra A"<<endl;
	}

	return 0;
}
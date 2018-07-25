#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float socio1, socio2,socio3;
	cout<<"Ingrese la inversion del socio 1"<<endl;
	cin>>socio1;
	cout<<"Ingrese la inversion del socio 2"<<endl;
	cin>>socio2;
	cout<<"Ingrese la inversion del socio 3"<<endl;
	cin>>socio3;
	
	float suma=socio1+socio2+socio3;
	cout<<"El total invertido es: "<<suma<<endl;
	cout<<"El porcentaje invertido por el socio 1 es: "<<(socio1*100)/suma<<"%"<<endl;
	cout<<"El porcentaje invertido por el socio 1 es: "<<(socio2*100)/suma<<"%"<<endl;
	cout<<"El porcentaje invertido por el socio 1 es: "<<(socio3*100)/suma<<"%"<<endl;
	
	system("pause");
	return 0;
}

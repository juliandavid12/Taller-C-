#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int limite, numero, m;
	cout<<"Ingrese el numero limite"<<endl;
	cin>>limite;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	
	for (int i=2; i<=limite; i++){
		cin>>m;
		if(m<numero){
			numero=m;
		}
	}
	
	cout<<"El numero menor es: "<<numero<<endl;
	
	system("pause");
	return 0;
}


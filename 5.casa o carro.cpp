#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float valor, casa, carro;
	cout<<"Ingrese el valor (casa o carro)"<<endl;
	cin>>valor;
	
	casa=valor+(valor*0.30)*3;
	carro=valor-(valor*0.10)*3;
	
	if((valor*0.10)*3<(valor*0.30)*3/2){
		cout<<"El usuario debe comprar el carro"<<endl;
	}else{
		cout<<"El usuario no debe comprar el carro"<<endl;
	}
	
	system("pause");
	return 0;
}

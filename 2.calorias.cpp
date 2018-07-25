#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float reposo, minutos;
	cout<<"Ingrese 1 si la persona guarda reposo dormido o 2 si lo hace sentado"<<endl;
	cin>>reposo;
	cout<<"Ingrese el numero de minutos que la persona guarda reposo"<<endl;
	cin>>minutos;
	
	if(reposo==1){
		cout<<"El numero de calorias que la persona consume dormido son: "<<minutos*1.08<<endl;
	}else{
		cout<<"El numero de calorias que la persona consume sentada son: "<<minutos*1.66<<endl;
	}
	
	system("pause");
	return 0;
}

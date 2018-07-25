#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int horast;
	cout<<"Ingrese el numero de horas trabajadas"<<endl;
	cin>>horast;
	
	if(horast<=40){
		cout<<"El sueldo a pagar es: "<<"$"<<horast*16<<endl;
	}else{
		cout<<"El sueldo a pagar es: "<<"$"<<(horast-40)*20+640<<endl;
		
	}
	
	system("pause");
	return 0;
}

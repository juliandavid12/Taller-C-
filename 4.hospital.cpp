#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float presupuesto;
	cout<<"Ingrese el presupuesto total"<<endl;
	cin>>presupuesto;
	
	cout<<"El area de Ginecologia recibira: "<<"$"<<presupuesto*0.40<<endl;
	cout<<"El area de traumatologia recibira: "<<"$"<<presupuesto*0.30<<endl;
	cout<<"El area de pediatria recibira: "<<"$"<<presupuesto*0.30<<endl;
	
	system("pause");
	return 0;
}

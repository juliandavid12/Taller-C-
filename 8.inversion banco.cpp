#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float dinero=0, ganancia=0, mes=1;
	cout<<"Ingrese el valor que desea invertir en el banco"<<endl;
	cin>>dinero;
	
	while(mes<=12){
	ganancia=(dinero*2)/100;
	dinero=dinero+ganancia;
	mes=mes+1;
	}
	
	cout<<"El total invertido al cabo de 12 meses es: "<<"$"<<dinero<<endl;
	system("pause");
	return 0;
}


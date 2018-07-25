#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int a, b, c;
	cout<<"Ingrese 3 numeros para determinar el numero medio"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if((a>b and a<c) or (a<b and a>c)){
		cout<<"El numero medio es: "<<a<<endl;
	}else if((b>a and b<c) or (b<a and b>c)){
		cout<<"El numero medio es: "<<b<<endl;
	}else if((c>a and c<b) or (c<a and c>b)){
		cout<<"El numero medio es: "<<c<<endl;
	}
	
	system("pause");
	return 0;
}

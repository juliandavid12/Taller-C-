#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int n;
	cout<<"Ingrese el numero que desea multiplicar"<<endl;
	cin>>n;
	
	for(int i=1; i<11; i++){
		int c=i*n;
		cout<<n<<"X"<<i<<"="<<c<<"\n";
	}
	
	system("pause");
	return 0;
}



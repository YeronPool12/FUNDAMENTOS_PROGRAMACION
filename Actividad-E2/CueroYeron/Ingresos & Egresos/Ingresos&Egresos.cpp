#include<iostream>

using namespace std;

int main()

{

	float x,l,c=0,a=0,ai=0,ae=0;
	cout<<"INGRESE EL NUMERO LIMITE: ";
	cin>>l;
	
	do {
		cout<<"INGRESE EL VALOR MENSUAL: ";
		
		cin>>x;
		c=c+1;
		a=a+x;
		if (x>0){
			ai=ai+x;
		}else{
			ae=ae+x;
		}
		
	}
	
	while (c<l);
	
	cout<<"EL SALDO DE EGRESOS ES DE:"<<ae<<endl;
	cout<<"EL SALDO DE INGRESOS ES DE:"<<ai<<endl;
	cout<<"EL SALDO TOTAL ES:"<<a<<endl;

	return 0;
}

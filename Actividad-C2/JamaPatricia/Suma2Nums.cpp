// TAREA, JAMA PATRICIA //
#include<iostream>
using namespace std;

int main ()
{
	int c=0,n;
	float s=0,x;
	
	cout<<"ingresar valores a sumar : ";
	cin>>n;
	do{
		cout<<"ingresar el elemento "<<c+1;
		cin>>x;
		c=c+1;
		s=s+x;	
	}while (c<n);
	
	cout<<"la suma de los elementos es : "<<s<<endl;
	return 0;	
}

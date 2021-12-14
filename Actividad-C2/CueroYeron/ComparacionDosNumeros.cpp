#include<iostream>
using namespace std;

int main ()
{
	float x,y;
	cout<<"INGRESE X: ";
	cin>>x;
	cout<<"INGRESE Y: ";
	cin>>y;
	
	
	if(x==y){
		cout<<"EL VALOR DE X= "<<x<<" es igual a Y= "<<y<<endl;
		
	}else{
		if(x<y){
			cout<<"EL VALOR DE X= "<<x<<" es menor a Y= "<<y<<endl;
			
		}else{
			cout<<"EL VALOR DE Y= "<<x<<" es menor a X= "<<x<<endl;
			
		}
		
	}
	
	return 0;

}

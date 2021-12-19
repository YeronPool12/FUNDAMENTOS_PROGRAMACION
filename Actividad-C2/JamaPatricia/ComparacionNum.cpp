#include<iostream>
using namespace std;

int main ()
{
	float x,y;
	cout<<"ingresar x: ";
	cin>>x;
	cout<<"ingresar y: ";
	cin>>y;
	if(x==y){
		cout<<"el valor de x= "<<x<<" es igual a y= "<<y<<endl;
		
	}else{
		if(x<y){
			cout<<"el valor de x= "<<x<<" es menor a y= "<<y<<endl;
			
		}else{
			cout<<"valor de y= "<<x<<" es menor a x= "<<x<<endl;	
		}	
	}
	return 0;

}

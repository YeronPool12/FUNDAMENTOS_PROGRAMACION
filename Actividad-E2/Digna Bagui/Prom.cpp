#include <iostream>
using namespace std;
int main()
{
float z, x=0,Limi=30,aprob=0,repro=0;
do{
cout<<"Ingrese el promedio: "; cin>>z;
x=x+1;
if(z>7){
	aprob=aprob+1;
}else{
	if(z<5){
		repro=repro+1;
	}else{}
}
}while(x<Limi);
cout<<"Aprueban: "<<aprob<<endl;
cout<<"Reprueban: "<<repro<<endl;
return (0) ;
}
#include <iostream>
using namespace std;
int main()
{
float z,co=0,limi,sto=0,sin=0,seg=0;
cout<<"Cuantos valores va ingresar: "; cin>>limi;
do{
cout<<"Ingrese los valores: "; cin>>z;
co=co+1;
sto=sto+z;
if(z>0){
	sin=sin+z;
}else{
	seg=seg+z;
}
}while(co<limi);
cout<<"El saldo de egresos es: "<<seg<<endl;
cout<<"El saldo de ingresos es: "<<sin<<endl;
cout<<"El saldo total es: "<<sto<<endl;
}
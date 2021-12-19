#include <iostream>
/*Nicole Karen Banchón Angulo*/
using namespace std;
int main() {
	int c=0, l=30,ca=0,cr=0;
	do{
		float x;
		//Se piden cada uno de los promedios
		cout << "Ingrese el promedio "<< c+1<<": ";
		cin >> x;
		c = c + 1;
		if(x > 7){
			//Aumenta la cantidad de alumnos reprobados
			ca = ca + 1;
		}else{
			if(x < 5){
				//Aumenta la cantidad de alumnos reprobados
				cr = cr + 1;
			}
		}
	}while(c < l);
	//Se muestran las cantidades respectivas.
	cout << "La cantidad de aprobados es: " << ca << endl;
	cout << "La cantidad de reprobados es: " << cr << endl;
	return 0;
}

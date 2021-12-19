#include <iostream>
/*Nicole Karen Banchón Angulo*/
using namespace std;
int main() {
	double x, s = 0, si = 0, se = 0;
	int l = 0, c = 0;
	//Límite de ingreso
	cout << "Ingrese el limite" << endl;
	cin >> l;
	do{
		//Ingreso de cantidad negativa o positiva
		cout << "Ingrese el ingreso o egreso." << endl;
		cin >> x;
		c = c + 1;
		s = s + x;
		//Condición que determina si es ingreso o egreso
		if(x > 0){
			si = si + x;
		}else{
			se = se + x;
		}
	}while(c < l);
	//Suma de ingresos, egresos y saldo
	cout << "Suma ingresos: $" << si << endl;
	cout << "Suma egresos: $" << se << endl;
	cout << "Saldo total: $" << s << endl;
	return 0;
}

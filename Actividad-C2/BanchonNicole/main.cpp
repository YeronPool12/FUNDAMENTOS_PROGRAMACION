#include <iostream>
using namespace std;
/*Pregunta 5: Ingreso, egreso y saldo*/
int main(int argc, char** argv) {
	double x, s = 0, si = 0, se = 0;
	int l = 0, c = 0;
	cout << "Ingrese el limite" << endl;
	cin >> l;
	do{
		cout << "Ingrese el ingreso o egreso." << endl;
		cin >> x;
		c = c + 1;
		s = s + x;
		if(x > 0){
			si = si + x;
		}else{
			se = se + x;
		}
	}while(c < l);
	cout << "Suma ingresos: $" << si << endl;
	cout << "Suma egresos: $" << se << endl;
	cout << "Saldo total: $" << s << endl;
	return 0;
}

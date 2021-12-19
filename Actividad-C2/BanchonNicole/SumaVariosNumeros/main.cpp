#include <iostream>
/*Nicole Karen Banchón Angulo*/
using namespace std;
int main() {
	//Se declaran las variables
	int c=0,n;
	//También se usarán variables flotantes.
	float s=0, x;
	//Se solicita la cantidad de valores a sumar.
	cout << "Ingrese la cantidad de valores a sumar: ";
	cin >> n;
	do{
		cout << "Ingrese el elemento " << c + 1 << ": ";
		cin >> x;
		//Se suma 1 al contador
		c = c + 1;
		s = s + x;
	}while(c < n);
	//Finalmente, se muestra el mensaje con la sumatoria.
	cout << "La suma de los elementos fue: " << s << endl;
	return 0;
}

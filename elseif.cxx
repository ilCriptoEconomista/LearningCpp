#include  <iostream>
using namespace std;

int main()
{
int numero;

cout << "Insert a number: ";
cin >> numero;

if (numero > 0) {
	cout << "Il numero è positivo" << endl;
} 
else if (numero < 0) {
	cout << "Il numero è minore di 0" << endl;
}
else {
	cout << "Il numero è zero" << endl;
}

return 0;
}
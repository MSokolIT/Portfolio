#include <iostream>
using namespace std;

int main()
{
	double a, b;
	char op;
	cout << "----------Kalkulator----------" << endl<<endl;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;

	cout << "Podaj operator (+,-,*,/) ";
	cin >> op;

	cout << "Podaj druga liczbe: ";
	cin >> b;

	switch (op) {
	case '+':
		cout << "Wynik: " << a + b<< endl;
		break;
	case '-':
		cout << "Wynik: " << a - b<< endl;
		break;
	case '*':
		cout << "Wynik: " << a * b<< endl;
		break;
	case '/':
		if (b == 0) {
			cout << "Błąd. Nie dziel przez zero"<<endl;
		}
		else {
			cout << "Wynik: " << a / b;
		}
		break;
	default:
		cout << "Niepoprawny operator" << endl;
	}
	cout << endl;
	cout << "----------Kalkulator----------";
}

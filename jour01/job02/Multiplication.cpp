#include <iostream>
using namespace std;

int main() {
	int a;
	int b;

	cout << "Choisisser le premier chiffre a multiplier : ";
	cin >> a;

	cout << "Choisisser le deuxième chiffre a multiplier : ";
	cin >> b;

	int result = a * b;

	cout << "Le résultat est : " << result;
	return 0;
}
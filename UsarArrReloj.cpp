#include <iostream>
#include <string>
#include "Reloj.h"

using namespace std;
int main(int argc, char *argv[]) {
	Reloj arr[5];
	int h, m;
	for (int i = 0; i < 5; i++) {
		cout << "Dar hora ";
		cin >> h;
		cout << "Dar min iniciales: ";
		cin >> m;
		arr[i].setHora(h);
		arr[i].setMin(m);
	}
	for (int i = 0; i < 5; i++) {
		arr[i].muestra();
	}
}
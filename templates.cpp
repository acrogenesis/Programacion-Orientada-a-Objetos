#include <iostream>

using namespace std;
template <class T>
T suma(T n1, T n2, T n3){
	return n1+n2+n3;
}
int main(int argc, char *argv[]) {
	double a=2.5, b =4.3, c=6.1, d;
	int e=8, f=10, g=12, h;
	d = suma(a,b,c);
	h = suma(e,f,g);
	cout << d << endl;
	cout << h << endl;
}

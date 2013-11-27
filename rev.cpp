#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	int *p, *r;
	int hola;
	hola =40;
	p = new int(20);
	r = new int;
	r = p;
	cout << *p << " " << *r;
	delete p;
}

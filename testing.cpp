#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
	stringstream str("abc def ghi");
	string a, b, c;
	str >> a >> b >> c; // ta da
	cout << a << b << c;
}

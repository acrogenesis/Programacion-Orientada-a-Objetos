#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(int argc, char *argv[]) {
	char entrada1[11], entrada2[11], entrada3[11], temp[11];
	int N, varEntera;
	cin >> N;
	
	for (int i=1; i<=N; i++) {
		cin >> entrada1 >> entrada2 >> entrada3;
		varEntera = strcmp(entrada1, entrada2);
		if (varEntera > 0) {
			strcpy(temp,entrada1);
			strcpy(entrada1,entrada2);
			strcpy(entrada2,temp);
		}
		varEntera = strcmp(entrada2, entrada3);
			if (varEntera > 0) {
				strcpy(temp,entrada2);
				strcpy(entrada2,entrada3);
				strcpy(entrada3,temp);
			}
		varEntera = strcmp(entrada1, entrada2);
			if (varEntera > 0) {
				strcpy(temp,entrada1);
				strcpy(entrada1,entrada2);
				strcpy(entrada2,temp);
			}
		
		cout << entrada1 << " " << entrada2 << " " << entrada3 <<endl;
		
	}
	
}
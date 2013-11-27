#include <iostream>
#include <string>

using namespace std;

int main(){
	int N, temp, tempf;
	bool swap = true;
	cout << "Dar la N: ";
	cin >> N;
	//N=5
	int array[N];
	int arrayp[N];
	
	for (int i=0;i<N;i++){
		cout << "Dar los datos: ";
		cin >> array[i];
	}
	
	//12345
	
	arrayp[0] = array[N-1];
	for (int i=0;i<N;i++){
			arrayp[i+1]=array[i];
			cout << arrayp[i] << " ";
	}
	
	//51234
	
	cout << endl;
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
	int N, temp;
	bool swap = true;
	cout << "Dar la N: ";
	cin >> N;
	int array[N];
	
	
	for (int i=0;i<N;i++){
		cout << "Dar los datos: ";
		cin >> array[i];
	}
	while(swap){
		swap = false;
		for (int i=0;i<N-1;i++){
			if(array[i]>array[i+1]){
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
				temp = 0;
				swap = true;
			}
		}
	}
	for (int i=0;i<N;i++){
		cout << array[i] << " ";
	}

	cout << endl;
	return 0;
}
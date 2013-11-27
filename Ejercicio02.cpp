#include <iostream>

using namespace std;


void despliega(int arr[], int tam){
	int mayor=arr[0];
	int menor=arr[0];
	
	for(int i=0;i<tam;i++){
		if(arr[i]<menor)
			menor=arr[i];
		else if(arr[i]>mayor)
			mayor=arr[i];
	}
	
	cout << "el menor es: " << menor << endl;
	cout << "el mayor es: " << mayor << endl;
}

int main(){
	int array[5];
	
	
	for(int i=0;i<5;i++){
		cout << "dato" << i+1 << ": ";
		cin >> array[i];
	}
	
	despliega(array,5);
	return 0;
}
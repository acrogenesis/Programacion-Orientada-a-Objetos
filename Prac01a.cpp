#include <iostream>
#include <string>

using namespace std;

int main(){
	bool letras[26];
	string s, sal;
	char letra;
	getline(cin,s);
	while (s!="FIN"){
		sal = "";
		for (int j=0; j<26; j++)
			letras[j] = false;
		for(int i=0; i<s.length(); i++){
			letra = s[i];
			if (letra == ' ')
				sal+= letra;
			else if (!letras[letra-'A']){
				sal+=letra;
				letras[letra-'A'] = true;
			}
		}	
		cout << sal << endl;
		getline(cin,s);
	}

	return 0;
}
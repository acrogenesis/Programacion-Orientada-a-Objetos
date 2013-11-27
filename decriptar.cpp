#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	map<char, char> deco;
	string line, line2;
	int numline = 0;
	char file[256];
	string fox;
	string key, base;
	bool letras[26];
	bool letras2[26];
	char letra;
	char letra2;
	
	base = "the quick brown fox jumps over the lazy dog";
	
	for (int j=0; j<26; j++)
		letras2[j] = false;
	for(int k=0; k<base.length(); k++){
		letra2 = base[k];
		if (!letras2[letra2-'a']){
			fox+=letra2;
			letras2[letra2-'a'] = true;
		}
	}
	
	ifstream myFile;
	cout << "Nombre del archivo a decriptar: " ;
	cin >> file;
	myFile.open(file);
 
	if (! myFile)
	{
		cout << "Error opening file"  << endl;
		return -1;
	}
	while (myFile.good())
	{
		getline(myFile,line);
		//encontrar linea con 43 de length quitar letras repetidas de linea y espacios y pasar a string key
		for (int i=0; i<numline; i++) {
			if (line.length() == base.length()) {
				key = "";
				for (int j=0; j<26; j++)
					letras[j] = false;
				for(int k=0; k<line.length(); k++){
					letra = line[k];
					if (!letras[letra-'a']){
						key+=letra;
						letras[letra-'a'] = true;
					}
				}
			} 
		}		
		++numline;
	}
	myFile.close();
	
	for (int i = 0; i < 26; i++) {
		deco[key[i]] = fox[i];
	}
	vector<string> v;
	myFile.open(file);
	while (myFile.good()) {
		getline(myFile,line2);
		
		for (int i=0;i<line2.length();i++) {
			if(line2[i] != ' '){
				char c = line2[i];
				char d = deco[c];
				line2[i] = d;
				
			}else{
			}
		}
		v.push_back (line2);
	}
	myFile.close();
	ofstream myFileo;
	cout << "Nombre del archivo a decriptado: " ;
	cin >> file;
	myFileo.open(file);
	for (int i = 0; i < numline; i++) {
		myFileo << v[i] << endl;
	}
	return 0;
}
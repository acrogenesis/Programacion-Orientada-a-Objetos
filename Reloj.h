w#include <iostream>
#include <string>
class Reloj{
	private:
		int hora;
		int minu;
	public:
		Reloj();
		Reloj(int h);
		Reloj(int h, int m);
		void setHora(int h);
		void setMin(int m);
		int getHora();
		int getMin();
		void  muestra();
};	
Reloj::Reloj(){
	hora = 0;
	minu = 0;
}
Reloj::Reloj(int h){
	hora = h;
	minu = 0;
}
Reloj::Reloj(int h, int m){
	hora = h;
	minu = m;
}

void Reloj::setHora(int h){
	hora = h;
}

void Reloj::setMin(int m){
	minu = m;
}

int Reloj::getHora(){
	return hora;
}
int Reloj::getMin(){
	return minu;
}
void Reloj::muestra(){
	cout << hora << ":";
	if (minu<10)
		cout << "0" << minu << endl;
	else
		cout << minu << endl;
}
#include <iostream>
#include <string>
class Evento{
	private:
		Reloj horaInicio;
		int duracion;
		string asunto;
	
	public:
		Evento();
		int getDuracion();
		void setDuracion(int d);
		string getAsunto();
		void setAsunto(string a);
		Reloj getHoraInicio();
		void setHoraInicio(Reloj r);
};
Evento::Evento(){
	Reloj aux(8);
	horaInicio = aux;
	duracion = 30;
	asunto = "SIN ASUNTO";
}

int Evento::getDuracion(){
	return duracion;
}

void Evento::setDuracion(int d){
	duracion = d;
}

string Evento::getAsunto(){
	return asunto;
}

void Evento::setAsunto(string a){
	asunto = a;
}

Reloj Evento::getHoraInicio{
	return horaInicio;
}

void Evento::setHoraInicio(Reloj r){
	horaInicio = r;
}
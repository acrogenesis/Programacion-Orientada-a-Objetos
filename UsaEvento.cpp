#include <iostream>
#include <string>
#include "Evento.h"
#include "Reloj.h"
using namespace std;
int main(int argc, char *argv[]) {
	Evento arrEventos[3];
	string as;
	int dur, min, hora;
	for (int i = 0; i < 3; i++) {
		cout << "Dar el asunto del evento" <<i<<" :";
		cin >> as;
		cout << "Dar la hora de inicio: ";
		cin >> hora;
		cout << "Dar los min de Inicio: ";
		cin >> min;
		Reloj aux(hora, min);
		cout << "Dar la duracion: ";
		cin >> dur;
		arrEventos[i].setAsunto(as);
		arrEventos[i].setDuracion(dur);
		arrEventos[i].setHoraInicio(aux);
	}
	for (int i = 0; i < 3; i++) {
		cout << arrEventos[i].getAstunto() << " ";
		cout << arrEventos[i].getDuracion() << " ";
		arrEventos[i].getHoraInicio.muestra();
	}
}
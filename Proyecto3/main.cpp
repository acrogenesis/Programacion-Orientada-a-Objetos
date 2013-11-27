#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Sala.h"
#include "Reservacion.h"



using namespace std;
void menu(){
	cout << endl << "Opciones seleccione una: " << endl << "A: Consultar la lista de salas            - " << "B: Consultar la lista de reservaciones," <<
	endl << "C: Consultar los eventos de una sala dada - " << "D: Consular los eventos de una fecha dada" << endl 
	<< "E: Hacer una reservación                  - " << "F: Terminar" << endl;
}
void guardar(int diag, int mesg, int anog, int durag){
	int idg;
	string nombreeventog;
	cout << "Especifique la sala de preferencia: ";
	cin >> idg;
	cout << "Nombre del evento que desea: "<<endl;
	cin.ignore();
	getline(cin,nombreeventog);
	ofstream reservag;
	reservag.open("Reserva.txt", ios::app);
	reservag << endl << diag << " " << mesg << " " << anog << " " << idg << " " << durag << " " << nombreeventog;
	reservag.close();
	cout << "Reserva exitosa" << endl;
}
int main() {
	string line, nomsala, opcion, fecha;
	int id, proyector, computadora, capacidad;
	int dia, mes, ano, idr, dura, espacio, cantp = 0;
	int salac = 0, reservc = 0, count =0;
	string nombreevento, snp, snc;
	bool check = true, checkg = true;;
	bool compu, proy;
	bool array[100];
	for (int i = 0; i < 100; i++) {
		array[i] = true;
	}
	
	Sala sal[5];
	Reservacion reserv[100];
	
	ifstream salatxt;
	salatxt.open("Salas.txt");
		if (! salatxt){
			cout << "Error opening file"  << endl;
			return -1;
		}
		while (salatxt.good()){
			salatxt >> id >> proyector >> computadora >> capacidad >> nomsala;
			sal[salac].setIdSala(id);
			sal[salac].setProyector(proyector);
			sal[salac].setComputadora(computadora);
			sal[salac].setCapacidad(capacidad);
			sal[salac].setNomSala(nomsala);
			salac++;
		}
	salatxt.close();
	
	ifstream reservatxt;
	reservatxt.open("Reserva.txt");
		if (! reservatxt){
			cout << "Error opening file"  << endl;
			return -1;
		}
		while (reservatxt.good()){
			reservatxt >> dia >> mes >> ano >> idr >> dura;
			getline(reservatxt, nombreevento);
		
			reserv[reservc].setdd(dia);
			reserv[reservc].setmm(mes);
			reserv[reservc].setaa(ano);
			reserv[reservc].setIdSala(idr);
			reserv[reservc].setduracion(dura);
			reserv[reservc].setnombreEvento(nombreevento);
			reservc++;
		}
		reservatxt.close();
	
	menu();
	cin >> opcion;
	while (true){
		if (opcion == "A" or opcion == "a"){
			for (int i = 0; i < salac; i++) {
				sal[i].Muestra();
			}
			menu();
			cin >> opcion;
		}
		if (opcion == "B" or opcion == "b"){
			
			Fecha tempB[reservc];
			for (int i = 0; i < reservc; i++) {
				tempB[i].setdd(reserv[i].getdd());
				tempB[i].setmm(reserv[i].getmm());
				tempB[i].setaa(reserv[i].getaa());
				tempB[i] = tempB[i] + reserv[i].getDuracion();
				cout << "Nombre de la sala: " << reserv[i].getIdSala() << " Nombre Evento:" << reserv[i].getnombreEvento()
				<< ", Fecha de inico: " << reserv[i].getdd() << "/" << reserv[i].getmm() << "/" << reserv[i].getaa()
				<< ", Fecha final: " << tempB[i].getdd() << "/" << tempB[i].getmm() << "/" << tempB[i].getaa() << endl;
			}
			menu();
			cin >> opcion;
			//Consultar la lista de reservaciones, al hacerlo deberás mostrar el nombre de la sala, el nombre del evento, la fecha en la que inicia la reservación y la fecha en la que termina (no muestres la duración en días).
		}
		if (opcion == "C" or opcion == "c"){
			
			Fecha tempC[reservc];
			cout << "Dar sala a consultar: ";
			cin >> id;
			for (int i = 0; i < reservc; i++) {
				if (reserv[i].getIdSala() == id) {
					tempC[i].setdd(reserv[i].getdd());
					tempC[i].setmm(reserv[i].getmm());
					tempC[i].setaa(reserv[i].getaa());
					tempC[i] = tempC[i] + reserv[i].getDuracion();
					cout << "Nombre Evento: " << reserv[i].getnombreEvento() << ", Fecha de inico: " << reserv[i].getdd() << "/" << 
					reserv[i].getmm() << "/" << reserv[i].getaa()
					<< ", Fecha final: " << tempC[i].getdd() << "/" << tempC[i].getmm() << "/" << tempC[i].getaa() << endl;
				}
			}
			//Consultar los eventos de una sala dada, que muestre el nombre del evento, su fecha de inicio y su fecha de terminación.
			menu();
			cin >> opcion;
		}	
		if (opcion == "D" or opcion == "d"){
			cout << "Dar dia: ";
			cin>>dia;
			cout << "Dar mes: ";
			cin>>mes;
			cout << "Dar ano: ";
			cin>>ano;

			Fecha temp(dia,mes,ano);
			for (count=0;count<10;count++){
				if (mes==reserv[count].getmm()||(mes==reserv[count].getmm()-1)){
					Fecha tempo(reserv[count].getdd(),reserv[count].getmm(),reserv[count].getaa());
					int duro=reserv[count].getDuracion();
					for(int h=0;h<duro;h++){
						if (tempo+h==temp){
			                reserv[count].getIdSala();
			                for(int q=0;q<5;q++){
			                    if (sal [q].getIdSala()==reserv[count].getIdSala()){
			                        cout<<"Nombre: "<<sal[q].getNomSala()<<" Evento:"<<reserv[count].getnombreEvento()<<endl;
			                    }
			                }
						}
					}
				}
			}
			count = 0;
			menu();
			cin >> opcion;
			//Consular los eventos de una fecha dada, que muestre la lista de: el nombre de la sala y el nombre del evento que hay en esa fecha. Nota que no son los eventos que inician en esa fecha, sino los que se vayan a realizar en esa fecha (tienes que revisar el rango de fechas de cada evento).
		}	
		if (opcion == "E" or opcion == "e"){
			cout << "Para cuantas personas? ";
			cin >> cantp;
			cout << "Dia? : ";
			cin >> dia;
			cout << "Mes? : ";
			cin >> mes;
			cout << "Año? : ";
			cin >> ano;
			cout << "Duración : ";
			cin >> dura;
			while(check){
				cout << "Requiere proyector? (s/n) ";
				cin >> snp;
				if(snp == "s" or snp == "n"){
					check = false;	
					if(snp == "s"){
						proy = true;
					}
					if (snp == "n"){
						proy = false;
					}
				}
			}
			check = true;
			while (check) {
				cout << "Requiere computadora? (s/n) ";
				cin >> snc;
				if(snc == "s" or snc == "n"){
					check = false;
					if(snc == "s"){
						compu = true;
					}
					if(snc == "n"){
						compu = false;
					}
				}
			}
			check = true;
			Fecha tempE(dia,mes,ano);
			
			Fecha temp[salac];
			Fecha tempfinal[salac];
			
			for (int i = 0; i < salac; i++) {
				if(sal[i].getProyector() != proy){
					array[i] = false;
				}
				if(sal[i].getComputadora() != compu){
					array[i] = false;
				}
				if(sal[i].getCapacidad() < cantp){
					array[i] = false;
				}
				
				temp[i].setdd(reserv[i].getdd());
				temp[i].setmm(reserv[i].getmm());
				temp[i].setaa(reserv[i].getaa());
				
				tempfinal[i] = temp[i] + reserv[i].getDuracion();
				
				if((tempE < temp[i]) or (tempE > tempfinal[i])){
					if(((tempE + dura) < temp[i]) or ((tempE + dura) > tempfinal[i])){}
					else array[i] = false;
				}else array[i] = false;
			}
			
			for (int i = 0; i < salac; i++) {
				if(array[i] == true){
					cout << "la sala " << sal[i].getIdSala() << " esta disponible"<<endl;
					checkg = true;
				}else count++;
				if (count == salac){
					cout << "No hay ninguna sala disponible" <<endl;
					checkg = false;
				}
			}
			while(checkg){
				guardar(dia, mes, ano,dura);
				checkg = false;
			}
			count = 0;
			menu();
			cin >> opcion;
		}	
		if (opcion == "F" or opcion == "f"){
			return 0;
		}
	}
}
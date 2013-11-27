#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;
class Reservacion: public Fecha{
    private:
        int idSala, duracion;
        string nombreEvento;
        int dd, mm, aa;
    public:
        Reservacion();
        Reservacion(int id, int dur, string nom, int dd, int mm, int aa);

        int getIdSala();
        int getDuracion();
        string getnombreEvento();

        void setIdSala(int id);
        void setduracion(int dur);
        void setnombreEvento(string nom);

        void Muestra();
};

Reservacion::Reservacion(){
    idSala=0;
    duracion=0;
    nombreEvento="N/A";
    }

Reservacion::Reservacion(int id, int dur, string nom, int dd, int mm, int aa):Fecha(dd,mm,aa){
    idSala=id;
    duracion=dur;
    nombreEvento=nom;
}

int Reservacion::getIdSala(){
    return idSala;
}

int Reservacion::getDuracion(){
    return duracion;
}

string Reservacion::getnombreEvento(){
    return nombreEvento;
}

void Reservacion::setIdSala(int id){
    idSala=id;
}

void Reservacion::setduracion(int dur){
    duracion=dur;
}

void Reservacion::setnombreEvento(string nom){
    nombreEvento=nom;
}

void Reservacion::Muestra(){
    cout<<"Id de Sala: "<<idSala<<endl;
    cout<<"Duracion: "<<duracion<<endl;
    cout<<"Nombre Evento: "<<nombreEvento<<endl;
}
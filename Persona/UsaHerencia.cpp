#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;
int main(int argc, char *argv[]) {
	Estudiante juan("Juan",20,"ISD"), pepe;
	Persona rosa("Rosa", 15), maria;
	juan.muestraDatos();
	pepe.muestraDatos();
	rosa.muestraDatos();
	maria.muestraDatos();
}
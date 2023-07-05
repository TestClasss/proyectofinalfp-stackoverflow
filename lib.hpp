#include <iostream>
#ifndef Lib_h
#define Lib_h
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

//Declaracion de las funciones
void MenuPrincipal();
void MenuAdministrador();
void MenuUsuario();
void Limpiar();
void Slogan();
void Tiquete();
void ImprimirCantidadTipoVehiculo(string nombreArchivo);
string Crear_Fecha();
//Declaracion funciones darlyn
bool Comprobar(string placa, string nombreArchivo);
void ImprimirContenidoArchivo(string nombreArchivo);

void AgregandoPlacasArchivo(string date);
void ParqueosDisponiblesYnoDisponibles(string nombreArchivo);

void ParqueosDisponibles(string nombreArchivo);
void frecuentes(string placas, string nombreArchivo);
void Bloqueados();
#endif 
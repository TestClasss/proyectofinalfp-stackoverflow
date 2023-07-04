#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

void MenuPrincipal();
void MenuAdministrador();
void MenuUsuario();
void Limpiar();
void Slogan();

int main(){



    return 0;
}
void MenuPrincipal()
{
    int opcion;
    string opcion1;
    string contra;
    string nombre;
    string NombreAdmin = "usuario";
    string ContraAdmin = "ABC123";
    cout << " 1) Usuario Administrador.\n 2) Usuario General.\n";
    cout << "Elija una opcion:\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese nombre de administrador:" << endl;
        cin >> nombre;
        cout << "Ingrese la clave:" << endl;
        cin >> contra;
        break;
    case 2:
    break;
    case 3:
    break;
    default:
        break;
    }
}
void MenuAdministrador()
{

}
void MenuUsuario()
{

}
void Limpiar()
{

}
void Slogan()
{

}
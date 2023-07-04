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
void Tiquete();
void ImprimirCantidadTipoVehiculo(string nombreArchivo);
string Crear_Fecha();
struct Parqueo
{
    string nombreEspacios;
};
struct Vehiculo
{

    string placa;
    struct Parqueo espacios;
} tipo[50];

int main(){

    string date = Crear_Fecha();
    Limpiar();
    Slogan();
    cout << endl;
    MenuPrincipal();
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
        Limpiar();
        cout << "Ingrese nombre de administrador:" << endl;
        cin >> nombre;
        cout << "Ingrese la clave:" << endl;
        cin >> contra;
        if (nombre == NombreAdmin && contra == ContraAdmin)
        {
            Limpiar();
            MenuAdministrador();
        }
        else
        {
            Limpiar();
            cout << "Usted no es un Usuario Administrador" << endl;
            cout << "Usted se ha movido al Menu de Usuario General" << endl;
            cout << "--------------------------------------------" << endl;
            MenuUsuario();
        }
        break;
    case 2:
        Limpiar();
    break;
    default:
    Limpiar();
    cout << "El sistema se esta apagando\n";
    cin.ignore();
        break;
    }
}
void MenuAdministrador()
{
    int opcion;
    int opcion1;
    string archivo;
    string nombreArchivo=Crear_Fecha();

    cout << endl;
    cout << " 1) Mostrar cantidad por tipo de vehiculos parqueados.\n 2) Autos, motos y discapacitados/embarazadas frecuentes que ingresan al parqueo.\n 3) Cantidad de parqueos disponibles y no disponibles.\n 4) Bloquear parqueos especificos.\n 5) Registro.\n 6) Retornar al menu principal.\n 7)Mostrar Contenido de .txt.\n 8)Salir.\n";
    cout << "Elija una opcion:\n";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        Limpiar();
        cout << "Mostrar cantidad por tipo de vehículos parqueados\n";
        ImprimirCantidadTipoVehiculo(nombreArchivo);
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuAdministrador();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;

    case 2:
        Limpiar();
        cout << "Autos, motos y discapacitados/embarazadas frecuentes que ingresan al parqueo\n";
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuAdministrador();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;

    case 3:
        cout << "Cantidad de parqueos disponibles y no disponibles\n";
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            MenuAdministrador();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;

    case 4:
        Limpiar();
        cout << "Bloquear parqueos especificos\n";
        // Hacer funcion
        cout << "Los parqueos de discapacitado/embarazada esta bloqueados." << endl;
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuAdministrador();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;
        case 5:
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuAdministrador();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;

    case 6:
        cout << "-------------------------------------\n";
        cout << endl;
        return MenuPrincipal();
        break;
    case 7:
        cout << "Imprimir contenido de un archivo"<<endl;
        cout << "Que nombre de archivo desea imprimir:";
        cin >> archivo;
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuAdministrador();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
    break;
    default:
        cout << "El sistema se esta apagando\n";
        cin.ignore();
        break;
    }
}
void MenuUsuario()
{
    int opcion;
    int opcion1;
    string placa;

    cout << endl;
    cout << " 1) Tiquete.\n 2) Parqueos disponibles.\n 3) Busqueda por numero de placa.\n 4) Regresar al menu principal.\n 5) Salir.\n";
    cout << "Eliga su opcion:" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Su tiquete:\n";
        Tiquete();
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuUsuario();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;

    case 2:
        cout << "Tipo de parqueo disponible\n";
        cout << "\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuUsuario();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;
        case 3:
        Limpiar();
        cout << "Buscar auto por numero de placa.\n";
        // Buscar el numero de placa
        cout << "Ingrese el numero de placa:\n";
        cin >> placa;

        cout << "\n\nDesea continuar o desea salir" << endl;
        cout << "Seleccione 1 para continuar y 0 para salir:";
        cin >> opcion1;
        if (opcion1 == 1)
        {
            Limpiar();
            MenuUsuario();
        }
        else if (opcion1 == 0)
        {
            Limpiar();
            Slogan();
            cout << endl;
            MenuPrincipal();
        }
        break;
    case 4:
        Limpiar();
        cout << "-------------------------------------";
        cout << endl;
        return MenuPrincipal();
        break;
    default:
        Limpiar();
        cout << "El Sistema se esta apagando\n";
        cin.ignore();
        break;
    }
}
void Limpiar()
{
    system("cls");
}
void Slogan()
{
    string slogan = "El mejor servicio para tu automovil";
    cout << slogan;
    cout << endl;
}
void Tiquete()
{
    string numeroPlaca;
    int tiempoTranscurrido;
    double precioHora = 1.00;
    double totalPagar;

    // Solicitar los datos al usuario
    cout << "Ingrese el número de placa: ";
    cin >> numeroPlaca;
    cout << "Ingrese el tiempo transcurrido en horas: ";
    cin >> tiempoTranscurrido;

    // Calcular el total a pagar
    totalPagar = tiempoTranscurrido * precioHora;
     // Imprimir factura
    cout << "Factura" << endl;
    cout << "*********************************" << endl;
    cout << "* Numero de placa:  " << endl;
    cout << "* " << numeroPlaca << " " << endl;
    cout << "* Tiempo transcurrido: \n";
    cout << "* " << tiempoTranscurrido << " horas"
         << " " << endl;
    cout << "* Total a pagar: $ " << totalPagar << " " << endl;
    cout << "*********************************";
}
void ImprimirCantidadTipoVehiculo(string nombreArchivo)
{
    Limpiar();

    // Crear una variable para la salida del texto
    string linea;
    ifstream archivoLectura(nombreArchivo, ios::in);
    int cantidadCarros = 0;
    int cantidadMotos = 0;
    int cantidadDis = 0;

    while (getline(archivoLectura, linea))
    {

        if (linea.size() == 13 || linea.size() == 14)
        {

            cantidadCarros++;
        }
        else if (linea.size() == 11 || linea.size() == 12)
        {
            cantidadMotos++;
        }
        else if (linea.size() == 9)
        {
            cantidadDis++;
        }
    }
    archivoLectura.close();
    cout << "El numero de carros parqueados es de: " << cantidadCarros << endl;
    cout << "El numero de motos parqueadas es de: " << cantidadMotos << endl;
    cout << "El numero de discapacitados parqueadas es de: " << cantidadDis << endl;
}
string Crear_Fecha()
{
    time_t now = time(0);
    tm *time = localtime(&now);

    string fecha = to_string(time->tm_mday) + "-" + to_string(time->tm_mon + 1) + "-" + to_string(time->tm_year + 1900) + ".txt";

    return fecha;
}
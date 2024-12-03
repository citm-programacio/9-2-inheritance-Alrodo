// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Building {
protected:
    string name;

public:
    Building(string buildingNom) : name(buildingNom) {}
    string getName() {
        return name;
    }
};
class Warehouse : public Building {
private:
    int wood, rocks, wheat;
public:
    Warehouse(string warehouseNom, int fusta, int roques, int trigo) : Building(warehouseNom), wood(fusta), rocks(roques), wheat(trigo) {}
    void printResources() {
        cout << "Nom del magatzem: " << name << endl;
        cout << "Unitats de fusta: " << wood << endl;
        cout << "Unitats de roca: " << rocks << endl;
        cout << "Unitats de trigo: " << wheat << endl;
    }
};
class House : public Building {
private:
    int floors, inhabitants, servants;
public:
    House(string houseNom, int plantes, int habitants, int servents) : Building(houseNom), floors(plantes), inhabitants(habitants), servants(servents) {}
    void printHouse() {
        cout << "Nom de la casa: " << name << endl;
        cout << "Numero de plantes: " << floors << endl;
        cout << "Numero d'habitants: " << inhabitants << endl;
        cout << "Numero de servents: " << servants << endl;
    }
};
class Temple : public Building {
private:
    string god;
    int priests;
public:
    Temple(string houseNom, string deu, int apostols) : Building(houseNom), god(deu), priests(apostols) {}
    void printTemple() {
        cout << "Nom de la casa: " << name << endl;
        cout << "Nom del Deu: " << god << endl;
        cout << "Numero d'apostols: " << priests << endl;
    }
};

int main()
{
    Warehouse warehouse("the warehouse", 21, 34, 56);
    House house("Casablanca", 2, 6, 3);
    Temple temple("Esglesia", "Joselu", 38);
    warehouse.printResources();
    cout << endl;
    house.printHouse();
    cout << endl;
    temple.printTemple();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

#include "laboratorio.h"
#include <fstream>

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarPersonaje(const Computadora &p)
{
    if (cont < 5){
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout<<"Arrelgo lleno"<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(20) << "Sistema Operativo";
    cout << setw(20) << "Nombre Usuario";
    cout << setw(20) << "Almacenamiento";
    cout << setw(15) << "RAM";
    cout << endl;

    for (size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout << p;
        // cout<<"Sistema Operativo: "<<p.getSo()<<endl;
        // cout<<"Nombre de Usuario: "<<p.getNomuser()<<endl;
        // cout<<"Almacenamiento: "<<p.getAlmacenamiento()<<endl;
        // cout<<"RAM: "<<p.getRam()<<endl;
        // cout<<endl;
    }
    
}

void Laboratorio::respaldar_tabla(){
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()) {

        archivo << left;
        archivo << setw(20) << "Sistema Operativo";
        archivo << setw(20) << "Nombre Usuario";
        archivo << setw(20) << "Almacenamiento";
        archivo << setw(15) << "RAM";
        archivo << endl;

        for (size_t i = 0; i < cont; i++){
            Computadora &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()) {
        for (size_t i = 0; i < cont; i++){
            Computadora &p = arreglo[i];
            archivo << p.getSo()<< endl;
            archivo << p.getNomuser()<< endl;
            archivo << p.getAlmacenamiento()<< endl;
            archivo << p.getRam()<< endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int ram;
        Computadora p;

        while (true){
            getline(archivo, temp); //sistema operativo
            if(archivo.eof()){ break;}
            p.setSo(temp);

            getline(archivo, temp); // nombre usuario
            p.setNomuser(temp);
            
            getline(archivo, temp); // Almacenamiento
            p.setAlmacenamiento(temp);
            
            getline(archivo, temp); // memoria RAM
            ram = stoi(temp);       // string to int
            p.setRam(ram);

            agregarPersonaje(p);
        }
        
    }
    archivo.close();
}
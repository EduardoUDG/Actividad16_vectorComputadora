#include<iostream>
#include<conio.h>
#include<cstdlib>

#include "laboratorio.h"

using namespace std;

int main(){

    Laboratorio l;
    string op;

    while (true){
        
        system("cls");
        cout << "1) Agregar personaje" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) Inicializar" << endl;
        cout << "0) Salir" << endl;
        cout << "Opcion:" << endl;
        getline(cin, op);




        if (op == "1"){
            Computadora c;

            cin >> c;

            l.agregarPersonaje(c);
            cin.ignore();
        }
        else if (op == "2"){
            l.mostrar();
            cout << endl;
            system("pause");

        }
        else if (op == "3"){
            l.respaldar();
        }
        else if (op == "4"){
            l.recuperar();
        }
        else if (op == "5"){
            Computadora c;
            cin >> c;

            size_t pos;
            cout << "Posicion: " << endl;
            cin >> pos; cin.ignore();

            if (pos >= l.size()){
                cout << "Posicion no valida" << endl;
            }
            else {
                l.insertar(c,pos);
            }
            
        }
        else if (op == "6"){
            Computadora c;
            cin >> c;

            size_t n;
            cout << "n: " << endl;
            cin >> n; cin.ignore();

            l.inicializar(c, n);
        }
        
        else if (op == "0")
        {
            system("pause");
            break;
        }
        
    }
    


    getch();
    return 0;
}

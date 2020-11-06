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
        cout << "5) Salir" << endl;
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
            system("pause");
            break;
        }
    }
    


    getch();
    return 0;
}

#include<iostream>
#include<conio.h>
#include<cstdlib>

#include "laboratorio.h"

using namespace std;

int main(){

    Laboratorio l;
    string op;

    while (true){
        
        cout << "1) Agregar personaje" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Salir" << endl;
        getline(cin, op);

        if (op == "1"){
            
        }
        else if (op == "2"){
            l.mostrar();
        }
        else if (op == "3"){
            l.respaldar();
        }
        else if (op == "4"){
            l.recuperar();
        }
        else if (op == "5"){
            break;
        }
        
        
        

    }
    


    getch();
    return 0;
}

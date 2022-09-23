/*

Christian Daniel Ruiz Cervantes
22110108 --- 2°O
Activida 1 --- Parcial 2 --- POO

*/

#include <iostream>
#include <string>
#include "date.h"
int main(){
	
    date *puntero_f;
    string cad;
    cout <<"Ingrese fecha con el formato (yyyyMMdd)"<< endl;
    cin >> cad;
    puntero_f = new date(cad);
    puntero_f->val_d();

    return 0;
}

/*

Christian Daniel Ruiz Cervantes
22110108 --- 2°O
Activida 1 --- Parcial 2 --- POO

*/

#include <iostream>
#include <string>

using namespace std;

class date{
    private:
        int day;
        int month;
        int year;
        int year_b;
        int validar_f;
        string fecha;

    public:
        date(string);
        int val_d();
};

date::date(string _fecha){fecha = _fecha;}

int date::val_d(){
	
	int number_days = 31;    	
    validar_f = 0;

    if(fecha.length() != 8){
        cout <<"El formato no es valido, vuelvo a intentarlo." << endl;
        return validar_f;
    };

    year = stoi(fecha.substr(0,4));
    month = stoi(fecha.substr(4,2));
    day = stoi(fecha.substr(6,2));
    year_b = 0;
    
    // Condicional de años bisiestos

    if(year %400 == 0 || (year %4 == 0 && year %100 != 0)){
        cout << endl <<"Este Anio Es Bisiesto"<< endl;
        year_b = 1;
    } else{
    	cout << endl <<"Este Anio No Es Bisiesto: " << year << endl;
	};
	
	// Condicional de los meses
	
    if(month < 1 || month > 12){
        cout <<"El mes colocado es incorrecto, vuelve a intentarlo.";
        return validar_f;
    };
    
    // Meses que tienen 30 dias

    if(month == 4 || month == 6 || month == 9 || month == 11){
	number_days = 30;
	};
	
	// CONDICIONAL ESCLUSIVO DEL MES DE FEBRERO

    if(month = 2){
        number_days = 28;

        if(year_b == 1){
            number_days = 29;
        };
    }
	// Condicional de los dias

    if(day < 1 || day > number_days)
    {
        cout <<"El dia colocado es incorrecto, vuelve a intentarlo."<< number_days << endl;
        return validar_f;
    };
    
    cout <<"Esta fecha es valida: ";
    cout << fecha.length() << year << "/" << month << "/" << day << endl;
}

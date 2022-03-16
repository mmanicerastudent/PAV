#include "DtFecha.h"

int main(){


cout << "Inserte dia" << endl;
int diaIngresado;
  cin >> diaIngresado;

cout << "Inserte mes" << endl;
int diaIngresado;
  cin >> mesIngresado;

cout << "Inserte anio" << endl;
int diaIngresado;
  cin >> anioIngresado;


Dtfecha* fecha = new DtFecha(diaIngresado, mesIngresado, anioIngresado);

cout<fecha->showDate()>

}
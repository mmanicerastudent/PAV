#ifndef DTFECHA
#define DTFECHA
#include <iostream>


Class DtFecha {
    private:

        int dia;
        int mes;
        int anio;

    public:
        DtFecha();
        DtFecha(int dia, int mes, int anio);
        int getDia();
        int getMes();
        int getAnio();
        void setDia();
        void setMes();
        void setAnio();
        void showDate();
        


}
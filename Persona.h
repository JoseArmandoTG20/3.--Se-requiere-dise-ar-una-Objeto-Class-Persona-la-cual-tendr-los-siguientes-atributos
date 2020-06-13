#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <cstring>

class Persona
{
    private:
        char nombre[100];
        char apellido[10];
        int edad;
        char genero[100];
        char domicilio[100];
        double peso;
        double estatura;
        float imC = peso/(estatura*estatura);

    public:
        Persona();
        Persona(char[],char[],int,char[],char[],double,double,float);
        void registro ();
        void imc();
        void toString();
        void mayored();

};

#endif // PERSONA_H

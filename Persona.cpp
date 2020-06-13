#include "Persona.h"
#include <iostream>
#include <cstring>

using namespace std;

Persona::Persona()
{

}

Persona::Persona(char nombre[100],char apellido[100],int edad,char genero[100],char domicilio[100],double peso,double estatura,float imc)
{
    this->nombre[100] = nombre[100];
    this->apellido[100] = apellido[100];
    this->edad = edad;
    this->genero[100] = genero[100];
    this->domicilio[100] = domicilio[100];
    this->peso = peso;
    this->estatura = estatura;
    this->imC = imC;

    strcpy(this->nombre,nombre);
    strcpy(this->apellido,apellido);
    strcpy(this->genero,genero);
    strcpy(this->domicilio,domicilio);

}

void Persona::registro()
{
    char nom[100];
    char apel[100];
    double ed;
    char gen[100];
    char dom[100];
    double po;
    double est;
    float imCc;

    cout <<"-----[REGISTRO]-----" << endl;
    cout << "Nombre:";
    cin >> nom;
    cout << "Apellido:";
    cin >> apel;
    cout << "Edad:";
    cin >> ed;
    cout << "Genero:";
    cin >> gen;
    cout << "Domicilio:";
    cin >> dom;
    cout << "Peso (kilos):";
    cin >> po;
    cout << "Estatura (metro):";
    cin >> est;

    imCc = po/(est*est);

    this->nombre[100] = nom[100];
    this->apellido[100] = apel[100];
    this->edad = ed;
    this->genero[100] = gen[100];
    this->domicilio[100] = dom[100];
    this->peso = po;
    this->estatura = est;
    this->imC = imCc;

    strcpy(this->nombre,nom);
    strcpy(this->apellido,apel);
    strcpy(this->genero,gen);
    strcpy(this->domicilio,dom);

}

void Persona::imc()
{
    cout << "IMC: " << imC << endl;

    if(imC <= 18.5)
    {
        cout << "Bajo peso" << endl;
    }
    else if(imC > 18.5 && imC <= 24.9)
    {
        cout << "Normal" << endl;
    }
    if(imC >= 25.0 && imC <= 29.9)
    {
        cout << "Sobrepeso" << endl;
    }
    else if(imC >= 30.0)
    {
        cout << "Obeso" << endl;
    }


}

void Persona::mayored()
{
    if(this->edad >= 18)
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
    }
}

void Persona::toString()
{
    cout << "Nombre: " << this-> nombre<< endl;
    cout << "Apellido: " << this-> apellido<< endl;
    cout << "Edad: " << this->edad << endl;
    cout << "Genero: " << this-> genero<<endl;
    cout << "Domicilio: "<< this-> domicilio<< endl;
    cout << "Peso: " << this-> peso << endl;
    cout << "Estatura: " << this-> estatura << endl;
    cout << "IMC:" << this-> imC <<endl;
}

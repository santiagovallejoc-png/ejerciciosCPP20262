//definir libreria en c++
#include <iostream> //esto es para que entienda los tipos de datos que coloquemos
#include <iomanip>//sir>//ve para alinear como tabla
#include <string>//de la biblioteca estandar para manejar caracteres

using namespace std;//estos nos evita utilizar esto (std::cout<<"")

int main(){
    //esto es si el programa que vamos a crear no tiene objetos
    //siguiendo con el ejercicio creamos las variables
    string ciudad;
    float temperatura;
    int humedad;
    char alertalluvia;
    //ya declaramos las variables ahora necesitamos los datos
    cout<<"========================ESTACION METEOROLOgICA================\n"; //cout es para texto
    cout<<" Ingrese el nombre de la ciudad: ";
    getline(cin,ciudad);//cin es para las variables

    cout <<" Ingrese la temperatura: ";
    cin>>temperatura;

    cout<<" Ingrese la humedad: ";
    cin>>humedad;

    cout<<" Alerta de lluvia (S para si,N para no):";
    cin>>alertalluvia;

    
    cout<<"\n\n";
    cout<<"======================================\n";
    cout<< left << setw(15) <<"CIUDAD"
        << setw(15) <<"TEMPERATURA"
        << setw(15) <<"ALERTA" <<"\n";
    cout<<"======================================";

    cout<<"======================================\n";
    cout<< left << setw(15) << ciudad
        << setw(15) << temperatura
        << setw(15) << alertalluvia <<"\n";
    cout<<"======================================";

    return 0;
}

#include <iostream>
using namespace std;


//ejericio 1 pedir por pantalla al usuario 2 digitox y hacer  operaciones aritmeticas basicas. e imprimir por pantalla

int main (){

    int n1,n2, suma=0, resta=0, multiplicacion=0,division=0;


    cout<<"digite un numero  "<<endl; cin>>n1;
    cout<<"digite un otronumero numero  "<<endl; cin>>n2;

    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;

    cout<<"\nLa suma es; "<<suma<<endl;

    cout<<"\nLa resta es; "<<resta<<endl;

    cout<<"\nLa multiplicacion es; "<<multiplicacion<<endl;

    cout<<"\nLa division es; "<<division<<endl;


    //ejercicio 2 ingresar un precio y calcular el iva customizado


    int precio,precioconiva=0;
    float porciva,transformacionporc=0;

    cout<<"\nIngrese el precio a calcular iva: "<<endl; cin>>precio;
    cout<<"\nIngrese el % de iva de su pais"<<endl; cin>>porciva;

    transformacionporc=(porciva/100)+1;

    precioconiva=precio*transformacionporc;

    cout<<"\nEl precio total con iva  es: " <<precioconiva<<endl;



    return 0;


    }



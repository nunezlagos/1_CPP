#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int calcularDV(const string& rut) {
    int sum = 0;
    int multiplier = 2;

    // Iterar de derecha a izquierda sobre el RUT ingresado (sin contar el dígito verificador)
    for (int i = rut.length() - 1; i >= 0; --i) {
        sum += (rut[i] - '0') * multiplier;
        multiplier = (multiplier % 7) + 2;
    }

    int remainder = sum % 11;
    int verificador = 11 - remainder;

    if (verificador == 11)
        return 0;
    else if (verificador == 10)
        return -1; // En caso de que el dígito verificador sea K (10)
    else
        return verificador+1;
}

int main() {
    bool repetir = true;

    while (repetir) {
        // Solicitar los datos personales y calcular la edad actual (2023) según el año de nacimiento
        string nombre;
        int anonac, rut;

        cout << "Ingrese su nombre: ";
        cin >> nombre;
        cout << "Ingrese su año de nacimiento: ";
        cin >> anonac;
        cout << "Ingrese su RUT sin dígito verificador: ";
        cin >> rut;

        int edad = 2023 - anonac;

        cout << "Cliente con nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;

        int verificador = calcularDV(to_string(rut));

        if (verificador == -1)
            cout << "rut completo es :  "<<rut<<"-K" << endl;
        else
            cout << "rut completo es :  " <<rut<<"-"<< verificador << endl;

        // Preguntar si el usuario desea repetir el programa
        char opcion;
        cout << "¿Desea ingresar otro RUT? (s/n): ";
        cin >> opcion;

        if (opcion != 's' && opcion != 'S') {
            repetir = false;
        }

        cout << endl;
    }

    return 0;
}


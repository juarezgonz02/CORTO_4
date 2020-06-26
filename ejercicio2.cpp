#include <iostream>
#include <string>
using namespace std;
void comparar(double, double[]);
double promedio(double[]);
int main()
{
    int estudiantes = 24;
    double datos[estudiantes];

    for (int i = 0; i < estudiantes + 1; i++)
    {
        double x;
        cout << "Datos: ";
        cin >> x;
        datos[i] = x;
    }
    double x = promedio(datos);
    cout << "El promedio de la altura de los estudiantes es: " << x << endl;
    comparar(x, datos);
    return 0;
}

double promedio(double data[])
{
    int estudiantes = 24;
    double suma = 0.0;
    for (int i = 0; i < estudiantes + 1; i++)
    {
        suma += data[i];
    }

    double average = suma / estudiantes;
    return average;
}

void comparar(double promedio, double data[])
{
    int estudiantes = 24;
    int arriba = 0, abajo = 0;

    for (int i = 0; i < estudiantes + 1; i++)
    {
        if (data[i] > promedio)
        {
            arriba += 1;
        }
        else
        {
            abajo += 1;
        }
    }
    cout << "Hay " << arriba << " arriba del promedio" << endl;
    cout << "y hay " << abajo << " abajo del promedio" << endl;
}

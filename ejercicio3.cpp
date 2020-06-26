#include <iostream>
#include <string>
using namespace std;
void registro(double[]);
double nota_final(double[]);
int main()
{
    double notas[4];
    registro(notas);
    int notaF = nota_final(notas);

    if (notaF >= 6.0)
    {
        cout << "Ha aprobado la materia con " << notaF << endl;
    }
    else
    {
        cout << "Ha reprobado la materia con " << notaF << endl;
    }

    return 0;
}
void registro(double notas[])
{
    for (int i = 0; i < 5; i++)
    {
        double calificacion;
        cout << "Ingrese sus calificaciones: ";
        cin >> calificacion;

        notas[i] = calificacion;
    }
}
double nota_final(double notas[])
{
    double final = 0.0;
    for (int i = 0; i < 5; i++)
    {
        final += (notas[i] * 0.2);
    }
    return final;
}
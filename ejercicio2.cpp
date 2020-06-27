#include <iostream>
#include <string>
using namespace std;

void comparacion(double, double[]);
void llenar(double[]);
double promedio(double[]);
int alumnos = 25;//Cantidad de alumnos

int main()
{   
    cout << "-----Registro de alturas de los alumnos-----"<<endl;
    double alturas[alumnos-1];//Arreglo para las alturas
    double prom;//Promedio

    llenar(alturas);
    prom = promedio(alturas);//Se recibe el promedio de las alturas

    cout << "El promedio de la altura de los alumnos es: " << prom << endl;
    comparacion(prom, alturas);

    return 0;
}

//Se debe llenar el array
void llenar(double alturas[]){

    for (int i = 0; i < alumnos; i++)
    {
        double altura;
        cout << "Alummno "<<i+1<<endl;
        cout << "Ingresa tu altura: ";
        cin >> altura;
        alturas[i] = altura;
    }
}
double promedio(double alturas[])
{
    double suma = 0.0;//Varible a llenar con los valores de las alturas.

    //Se recorre el arreglo y se agrega cada cantidad a la variable suna.
    for (int i = 0; i < alumnos; i++)
    {
        suma += alturas[i];
    }

    //Calculo del promedio
    double promedio = suma / alumnos;
    return promedio;
}

/*Aqui se manda el promedio 
y las alturas para comprobar quien esta sobre y debajo.
*/
void comparacion(double promedio, double alturas[])
{
    //int alumnos = 25;
    int sobre = 0, bajo = 0;

    for (int i = 0; i < alumnos; i++)
    {   
        if(promedio<alturas[i]){
            sobre++;
        }
        else{
            bajo++;
        }
    }
    cout << "Hay " << sobre << " alumnos arriba del promedio" << endl;
    cout << "y hay " << bajo << " alumnos abajo del promedio" << endl;
}

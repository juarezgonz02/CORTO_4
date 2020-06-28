#include <iostream>
#include <string>
using namespace std;
void registro(double[]);
double calculo_nFinal(double[]);

int main()
{
    double notas[4];//Calificaciones
    cout << "-----Calculo de nota de final de periodo-----"<<endl;
    
    registro(notas);//Se reciben las notas

    double notaFinal = calculo_nFinal(notas);//resultado del calculo de la nota final
    double Nminima = 6.0;//Nota minima para aprobar
    
    /*
     Más o igual que la minima se aprueba, menos se reprueba
    */ 
    if (notaFinal >= Nminima){
        cout << "Ha aprobado la materia con " << notaFinal << endl;
    }
    else{
        cout << "Ha reprobado la materia con " << notaFinal << endl;
    }

    return 0;
}
//Se debe llenar el arreglo
void registro(double notas[])
{
    for (int i = 0; i < 5; i++)
    {
        double calificacion;
        cout << "Ingrese sus calificaciones: ";
        cin >> calificacion;
        if(calificacion>10.0){
            cout << "--Compruebe el numero introducido--"<<endl;
            i-=1;
        }
        notas[i] = calificacion;
    }
}

//Calculo de la nota final
double calculo_nFinal(double notas[])
{
    
    double nFinal = 0.0;
    for (int i = 0; i < 5; i++)
    {//Cada nota se multiplica por 20 y luego se agrega a la nota final.    
        nFinal += (notas[i] * 0.2);
    }
    return nFinal;
}
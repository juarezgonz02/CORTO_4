#include <iostream>
#include <string>
using namespace std;
char clave_m(char);

int main()
{
    string palabra;//Variable inicial
    cout << "-----Encriptador clave murcielago-----"<<endl;
    cout << "Ingresa una palabra: "; cin>>palabra;

    //Bucle letra por letra.
    for(int i=0; i<palabra.length();i++){
        //Llama a la funcion, la cual regresa el caracter encriptado.
        char replace = clave_m(palabra[i]);

        /* si se encuentra la letra, entonces no se regresa '',
         y el programa intercambia los caracteres */
        if(replace!=' '){
            palabra[i]=replace;
        }
    }
    cout << "La nueva frase encriptada es: "<<palabra<<endl;
    return 0;
}

/*Esta función busca coincidencias de los caracteres en "murcielago"
para intercambiarlos por su respectivo número.*/
char clave_m(char s){
    char replace;//esta varible se asignará con un caracter especifico
    switch (s)
    {
    case 'm':
        replace = '0';     
        break;
    
    case 'u':
        replace = '1';     
        break;

    case 'r':
        replace ='2';
        break;

    case 'c':
        replace ='3';
        break;

    case 'i':
        replace ='4';
        break;

    case 'e':
        replace='5';
        break;

    case 'l':
        replace='6';
        break;

    case 'a':
        replace ='7';
        break;

    case 'g':
        replace ='8';
        break;

    case 'o':
        replace ='9';
        break;
    /*
    En el caso de que no haya coincidencia, entonces se regresa ' '
    que es reconocible como generico y hace que no se cambie por nada   
    */
    default:
        replace =' ';
        break;
    }
    //un numero hecho caracter es devuelto.
    return replace;
}
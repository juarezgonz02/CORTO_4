#include <iostream>
#include <string>
using namespace std;
char clave_m(char);

int main(){
    string x;
    cout << "-----Encriptador clave murcielago-----"<<endl;
    cout << "Ingresa una palabra: "; cin>>x;
    for(int i=0; i<x.length();i++){
    
        char replace = clave_m(x[i]);
        if(replace!=' '){
            x[i]=replace;
        }
    }
    cout << "La nueva frase encriptada es: "<<x;
    return 0;
}
char clave_m(char s){
    char replace;
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

    default:
        replace =' ';
        break;
    }
    return replace;
}
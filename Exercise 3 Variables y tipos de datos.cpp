#include<iostream>

int main(){

int x;
int dias;
int suma1;

x=5;
dias=7;
suma1=x+dias;


/* Sin embargo la funcion int se usa para
variables con valores iguales a enteros
, mo decimales ni de otro caracter que 
no sean numeros */

/* Para valores que contengan decimales
exixte la siguiente funcion de double
 */
double precio;
double peso;
double suma2;
precio=10.7;
peso=68.7;
suma2=precio+peso;

std::cout<<"se muestran valores de int con valores enteros: \n";
std::cout<<"x = ";
std::cout<<x<<std::endl;
std::cout<<"dias = ";
std::cout<<dias<<std::endl;

std::cout<<"suma de enteros: x + dias = \n";
std::cout<<suma1<<std::endl;


std::cout<<"Ahora valores usando DOUBLE, (Valores con decimales) \n";
std::cout<<"precio = ";
std::cout<<precio<<std::endl;
std::cout<<"peso = ";
std::cout<<peso<<std::endl;

std::cout<<"suma de valores con decimales \n";
std::cout<<"precio + peso = ";
std::cout<<suma2<<std::endl;

std::cout<<"FIN DEL PROGRAMA";

return 0;
}
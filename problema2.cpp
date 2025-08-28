#include <iostream>
using namespace std;
int main (){
int dia ;
int mes ;
int año ;
mes = 02 ;
cin >> dia ;
cin >> mes ;
cin >> año ;
if (dia < 29){
    cout << "Error\n";
}
 if (mes == 2){
    cout <<"Descuento valido" ;
 }
else {
    cout << "su fecha no aplica para los decuentos";
}
}

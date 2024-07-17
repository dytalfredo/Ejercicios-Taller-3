#include <iostream>
#include <string>
using namespace std;

int factorial(int e){
int resultado=1;
for (int p=1; p<=e;p++){
resultado= resultado*p;
}
return resultado;
}

float combinacion(int e, int g){
if(g>e){
return 0.0;
}else{
float combinatorio = (factorial(e))/(factorial(g)*factorial(e-g));
return combinatorio;
}
}

float permutaciones(int e, int g){
if(e>g && g>0){
float resultado = (factorial(e)/factorial(e-g));
return resultado;
}else{
return 0.0;
}


}

int main(){
int e,g;

cout<<"ingresa el valor de e" <<endl;
cin >> e;
cout<<"ingresa el valor de g" <<endl;
cin >> g;

float combinatorio = combinacion(e,g);
cout << "El combinatorio es: " <<combinatorio<< endl;
float permutacion = permutaciones(e,g);
cout << "La permutacion es : " <<permutacion<< endl;

cout << "El equipo está conformado por Melary Morales, Darío Montero y Alfredo Mendoza"<<endl;

return 0;
}
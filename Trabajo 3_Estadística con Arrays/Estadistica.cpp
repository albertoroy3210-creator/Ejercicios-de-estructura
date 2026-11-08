#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"ingrese la cantidad de numeros ";
    cin>>n;
    if(n<=0){
        cout<<"la cantidad debe ser mayor que cero "<<'\n';
        return 0;}
    double numeros[n];
    double suma=0,minimo,maximo;
    /*ingreso de datos*/
    for(int i=0;i<n;i++) {
        cout<<"ingrese el numero "<<i + 1<<'\n';
        cin>>numeros[i];
        suma+=numeros[i];}
    /*promedio*/
    double promedio = suma / n;
    /*minimo y maximo*/
    minimo=numeros[0];
    maximo=numeros[0];
    for (int i=1;i<n;i++) {
        if (numeros[i]<minimo)
            minimo=numeros[i];
        if (numeros[i]>maximo)
            maximo=numeros[i];}
    sort(numeros,numeros+n);
    double mediana;
    if (n % 2 == 0) {
        mediana=(numeros[n/2 - 1]+numeros[n/2])/2.0;
    } else {mediana=numeros[n / 2];}
    /*varianza */
    double sumaCuadrados = 0;
    for (int i=0;i<n;i++) {
        sumaCuadrados+=pow(numeros[i]-promedio,2);}
    double varianza=sumaCuadrados/n;
    /*desviacion estandar*/
    double desviacion = sqrt(varianza);
    /*coeficiente de variacion*/
    double cv=0;
    if(promedio != 0) {
        cv=(desviacion/abs(promedio))*100;}
    cout<<"minimo " <<minimo<<endl;
    cout<<"maximo " <<maximo<<endl;
    cout<<"mediana " <<mediana<<endl;
    cout<<"promedio " <<promedio<<endl;
    cout<<"varianza " <<varianza<<endl;
    cout<<"desviacion estandar "<<desviacion<<endl;
    if(promedio != 0)
        cout <<"coeficiente de variacion  "<<cv<<"%"<<endl;
    else
        cout <<"cv no definido porque el promedio es cero "<<endl;
    return 0;
}
//
// Created by NITRO 5 on 8/09/2023.


#include <iostream>

using namespace std;


int contarCiclos(int i, int cont){

    if(i==1) return cont+1;
    if(i%2!=0) return contarCiclos((3*i)+1,cont+1);
    return contarCiclos(i/2,cont+1);

}

int hallarMayorCicloAux(int i, int j, int max) {
    //En hallar mayor aux, se debe poner j+1 a la hora de retornar max, para que tambien haga la del 10
    if(i==j+1) return max;
    int aux= contarCiclos(i,0);
    if(aux>max) return hallarMayorCicloAux(i+1,j,aux);
    return hallarMayorCicloAux(i+1,j,max);

}
int hallarMayorCiclo(int i, int j){
    if(j<i) return hallarMayorCicloAux(j,i,0);
    return hallarMayorCicloAux(i,j,0);
}


int main(){
    int i,j,max;
    while (cin >> i >> j) {
        max= hallarMayorCiclo(i,j);
        cout<<i<<" "<<j<<" "<<max<<endl;
    }
    return 0;
}














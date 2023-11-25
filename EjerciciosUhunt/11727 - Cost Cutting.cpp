//
// Created by NITRO 5 on 25/11/
//

#include <iostream>
using namespace std;


int main() {


    int empleados;
    cin>>empleados;
    for(int i =0;i<empleados;i++) {
        int sueldo1, sueldo2, sueldo3;
        cin >> sueldo1;
        cin >> sueldo2;
        cin >> sueldo3;
        int mitad;
        if (sueldo1 >= sueldo2 && sueldo1 >= sueldo3) {
            mitad = (sueldo2>=sueldo3) ? sueldo2:sueldo3;
        } else if (sueldo2 >= sueldo1 && sueldo2 >= sueldo3) {
            mitad = (sueldo1>=sueldo3) ? sueldo1:sueldo3;
        } else {
            mitad = (sueldo2 >= sueldo1) ? sueldo2 : sueldo1;
        }
        cout<<"Case "<<i+1<<": "<<mitad<<endl;




    }
    return 0;
}
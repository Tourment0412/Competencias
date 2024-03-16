//
// Created by NITRO 5 on 2/03/2024.
//

#include <iostream>
using namespace std;

int main (){

    int cant,index=0;
    cin>>cant;
    while(index<cant){
        int ini,fin,sum=0;
        cin>>ini>>fin;
        while(ini!=fin+1){
            if(ini%2!=0){
                sum+=ini;
            }
            ini+=1;
        }
        cout<<"Case "<<index+1<<": "<<sum<<endl;
        index+=1;
        sum=0;
    }




    return 0;
}
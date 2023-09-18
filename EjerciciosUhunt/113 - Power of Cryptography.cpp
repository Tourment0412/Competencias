//
// Created by NITRO 5 on 15/09/2023.
//


#include <iostream>
#include <cmath>

using namespace std;


int main(){
    float i,j;


    while (cin >> i >> j) {

        printf("%.0f\n", pow(j,1/i));
    }


    return 0;
}
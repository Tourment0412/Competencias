//
// Created by NITRO 5 on 15/09/2023.
//


#include <iostream>
#include <cmath>

using namespace std;


int main(){
    double p,n;


    while (scanf("%lf %lf", &n, &p) != -1) {

        printf("%.1f\n", pow(p,1/n));
    }


    return 0;
}
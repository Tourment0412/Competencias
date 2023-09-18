//
// Created by NITRO 5 on 15/09/2023.
//


#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j;
    for(int k=0;k<n;k++) {
        cin>>i>>j;
        if(i>j){
            cout<<'>'<<endl;
        }else if(i<j){
            cout<<'<'<<endl;
        }else{
            cout<<'='<<endl;
        }
    }
    return  0;
}
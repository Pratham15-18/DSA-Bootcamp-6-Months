//FACTORIAL N Practice Problem

#include<iostream>
using namespace std;

int main(){
    int factorial = 1;
    int n = 6;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    cout<<factorial<<endl;

    return 0;
}
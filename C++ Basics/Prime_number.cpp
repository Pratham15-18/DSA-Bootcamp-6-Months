#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    bool isPrime = true;

    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
           isPrime = false;
           break;
        }
    
    }

    if (isPrime == true){
         cout<<"Prime number"<<endl;
    }else{
        cout<<"Non Prime number"<<endl;
    }
 return 0;
}
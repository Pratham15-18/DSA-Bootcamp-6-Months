#include<iostream>
using namespace std;

int main(){
    char op;
    int a,b;
    cout<<"Enter the value for a: "<<endl;
    cin>> a;
    cout<<"Enter the value for b: "<<endl;
    cin>> b;
    cout<<"Choose the operator(+,-,*,/): " <<endl;
    cin>>op;

    if(op=='+'){
        cout<<"The sum of two numbers are: "<<(a+b)<<endl;
    }
    else if(op=='-'){
        cout<<"The diff between two num is: "<<(a-b)<<endl;
    }
    else if(op=='*'){
        cout<<"The product of two num is: "<<(a*b)<<endl;
    }
    else if(op=='/'){
        cout<<"The division between two num is: "<<(a/b)<<endl;
    }
    else{
        cout<<"Please enter a operator from the given options"<<endl;
    }

   return 0;

}
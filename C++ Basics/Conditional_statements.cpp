#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;

    if(age>=18){
        cout<<"You are eligible for vote\n"<<endl;
    }else{
        cout<<"You are a child ! Go home\n"<<endl;
    }
    return 0;
}
    

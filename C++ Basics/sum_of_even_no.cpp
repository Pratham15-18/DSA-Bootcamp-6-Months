#include<iostream>
using namespace std;

int main(){
    int n = 20;
    int evenSum = 0;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            evenSum+= i;
        }
    
        
    }
    cout<<"Sum of Even Numbers : "<<evenSum<<endl;

 return 0;
}
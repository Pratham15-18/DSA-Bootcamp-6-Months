// Hollow diamond pattern in C++

#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        //spaces
       for(int j=0; j<n-i-1; j++){
           cout << " ";
         }
        cout << "*";


        if(i !=0){
            //spaces
           for(int j=0; j<2*i-1; j++){
           cout << " ";
         }


            cout << "*";


    }
    cout << endl;
  }
//bottom half
  for(int i=0; i<n-1; i++){
    //spaces
    for(int j=0; j<i+1; j++){
      cout << " ";
    }

      cout << "*";

    cout << endl;
  }
  return 0;
}


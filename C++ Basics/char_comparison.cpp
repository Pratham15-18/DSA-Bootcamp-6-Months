#include<iostream>
using namespace std;

int main(){

  char ch;
  cout<<"Enter to check lowercase or Uppercase: ";
  cin>>ch;

  if(ch>=65 && ch<=90){//Trying it through implicit coversion (This is Ascii value)
    cout<<"You have entered Uppercase Characters"<<endl;
  }else{
    cout<<"Mate! This is lowercase"<<endl;
  }
 
  return 0;

}

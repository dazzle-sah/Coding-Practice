//sum of all digits of a number

#include <iostream>
using namespace std;
int leap(int k){
  if(k%400==0){
      cout<<"Leap Year";}
     else if(k%4==0 && k%100!=0){
          cout<<"Leap Year";
     }
 else{
          cout<<"Not Leap year";
      }
      return 0;
}

int main() {
    int n;
    cin>>n;
leap(n);
    return 0;
}
// swap two numbers-

#include <iostream>
using namespace std;
int swap(int a,int b){
  int temp=0;
  temp=a;
  a=b;
  b=temp;
  cout<<a<<endl<<b<<endl;
 return 0;
}
int main() {
   int m,n;
   cin>>m>>n;
   swap(m,n);
    return 0;
}

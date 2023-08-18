//calculate fatorial of any number

#include <iostream>
using namespace std;
int fact(int k){
     int p,sum=1;
    while(k>1){
       sum*=k;
       k--;
    }
   cout<<sum<<endl;
}

int main() {
    int n;
    cin>>n;
fact(n);
    return 0;
}
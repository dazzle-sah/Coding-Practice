//sum of all digits of a number
#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    while(n>0){
        int m;
        m=n%10;
        sum+=m;
        n=n/10;
    }
cout<<sum;
    return 0;
}
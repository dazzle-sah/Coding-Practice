//reversing the digit of a number

#include <iostream>
using namespace std;
int reverse(int k){
int p,r=0;
while(k>0){
p=k%10;
k=k/10;
r=r*10+k; //error occuring statement
}
return r;
}

int main() {
int n;
cin>>n;
cout<<reverse(n);
return 0;
} 
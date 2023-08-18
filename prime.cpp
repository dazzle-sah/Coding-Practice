//check whether a number is prime or not

#include <iostream>
using namespace std;

int prime(int k) {
    if (k <= 1) {
        cout << "Neither Prime nor Composite";
        return 0;
    }

    for (int i = 2; i < k; i++) {
        if (k % i == 0) {
            cout << "Composite";
            return 0;
        }
    }
    
    cout << "Prime";
    return 0;
}
int main() {
    int n;
    cin>>n;
prime(n);
    return 0;
}
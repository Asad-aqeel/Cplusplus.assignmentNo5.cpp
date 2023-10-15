#include <iostream>
using namespace std;

int main() {
    int fib[500]; 
    fib[0] = 0; 
    fib[1] = 1; 

    cout << fib[0] << endl; 
    cout << fib[1] << endl; 

    for (int i = 2; i <= 500; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl; 
    }

    return 0;
}

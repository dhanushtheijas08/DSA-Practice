#include<iostream>
using namespace std;

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int total = factorial(0);
    cout << total;
    return 0;
}
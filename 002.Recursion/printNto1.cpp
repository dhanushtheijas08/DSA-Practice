#include<iostream>
using namespace std;

void print_num(int n) {
    cout << n << endl;
    if(n <= 1) 
        return;
    print_num(n - 1);
}

int main() {
    print_num(5);
    return 0;
}
#include<iostream>
using namespace std;

int print_N_number_nonTail(int n) {
    if(n == 1) 
        return 1;
    return n + print_N_number_nonTail(n -1);
}
int main() {
    int total = print_N_number_nonTail(5);
    cout << total;
    return 0;
}


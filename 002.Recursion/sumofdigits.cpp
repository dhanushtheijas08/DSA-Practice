#include <iostream>
#include <string>

using namespace std;


int sum(int n) {
    if(n == 0)
        return n;
    return sum(n / 10) + (n % 10);
}
int main() {
    int total = sum(32);
    cout << total;
    return 0;
}
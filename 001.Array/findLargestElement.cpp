#include<iostream>
using namespace std;

int greatest_element(int arr[], int n) {
    if(n < 1)
        return -1;
    int greatest_num = -1;
    for(int i = 0; i < n; i++) {
        if(greatest_num < arr[i])
            greatest_num = arr[i];
    }

    return greatest_num;
}
int main() {
    int arr[5] = {90, 50, 80, 88, 55};
    int greatest_num = greatest_element(arr, 5);
    cout << greatest_num;
    return 0;
}
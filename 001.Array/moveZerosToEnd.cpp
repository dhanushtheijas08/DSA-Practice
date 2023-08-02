#include<iostream>
using namespace std;

void move_zero_to_end(int arr[], int n) {
    int non_zero_count = 0;
    for(int i = 0;i < n;i++) {
        if(arr[i] !=0) {
            arr[non_zero_count] = arr[i];
            arr[i] = 0;
            non_zero_count++;
        }
    }

    for(int i = 0; i < n;i++)
        cout << arr[i] << endl;
}

int main() {
    int arr[] = {0, 0, 8, 10, 10, 0, 5, 0, 0, 0, 2};
    move_zero_to_end(arr, 11);
    return 0;
}
#include<iostream>
using namespace std;

void remove_duplicate_elements(int arr[], int n) {
    int new_index = 1;
    for(int i =1;i < n;i++) {
        if(arr[new_index - 1] != arr[i]) {
            arr[new_index] = arr[i];
            new_index++;
        }
    }
    for(int i =0; i<new_index;i++) 
        cout << arr[i] << endl;
}
int main() {
    int arr[] = {10, 20, 30, 30, 30, 60};
    remove_duplicate_elements(arr, 6);
    return 0;
}
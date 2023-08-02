#include<iostream>
using namespace std;

void reverse_array(int arr[], int n) {
    int low = 0, high = n - 1, temp;
    while(low < high) {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for(int i =0;i<n;i++)
        cout << arr[i] << endl;
}
int main() {
    int arr[] = {1, 4, 5, 6, 3};
    reverse_array(arr, 5);
    return 0;
}
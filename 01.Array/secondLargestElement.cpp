#include<iostream>
using namespace std;

int find_second_largest_element(int arr[], int n) {
    int largest_element = 0, second_largest_element = -1;
    for(int i=0; i <n;i++) {
        if(largest_element < arr[i]) 
            largest_element = arr[i];
    }
    for(int i = 0; i < n -1; i++) {
        if(arr[i] != largest_element) {
            if(second_largest_element < arr[i]) 
                second_largest_element = arr[i];
        }
    }
    return second_largest_element;
}

int main() {
    int arr[] = {10, 10, 10, 10, 10};
    int second_largest_element = find_second_largest_element(arr, 5);
    cout << second_largest_element << endl;
    return 0;
}
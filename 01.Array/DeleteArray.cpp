#include<iostream>
using namespace std;

int search_index(int arr[], int num_to_find, int n) {
    for(int i = 0;i < n;i++) {
        if(num_to_find == arr[i])
            return i;
    }
    return -1;
}

void delete_index(int arr[], int num_to_delete, int n) {
    int index = search_index(arr, num_to_delete, n);
    for(int i = index; i < n;i++)
        arr[i] = arr[i+1];
    for(int i = 0; i<n;i++)
        cout << arr[i] << endl;
}
int main() {
    int arr[5] = {2,7,9,10,6};
    int num_to_delete = 6;
    delete_index(arr, num_to_delete, 5);
    return 0;
}

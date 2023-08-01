#include<iostream>
using namespace std;


void insert_new_number(int arr[], int new_num, int position, int n) {
    int index_to_inserted = position - 1;
    for(int i = n - 1; i > index_to_inserted; i--) 
        arr[i] = arr[i - 1];
    arr[index_to_inserted] = new_num;
    for(int i = 0;i < n;i++)
        cout << arr[i] << endl;
}
int main() {
    int arr[6] = {2,5,8,9};
    int new_num = 20;
    int position = 2;
    insert_new_number(arr, new_num, position, 6);
    return 0;
}
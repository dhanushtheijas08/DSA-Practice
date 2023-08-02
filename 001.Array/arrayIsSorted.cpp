#include<iostream>
using namespace std;

bool find_is_sorted(int arr[], int n) {
    for(int i =0;i<n -1;i++) {
        if(arr[i] >= arr[i+1])
            return false;
    }

    return true;
}

int main() {
    int arr[] = {1,2,3,7,5};
    bool is_sorted = find_is_sorted(arr, 5);
    cout << "hi" << endl << is_sorted << endl;
    return 0;
}
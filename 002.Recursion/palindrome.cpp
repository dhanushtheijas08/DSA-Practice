#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(string &str, int start, int end ) {
    if(start >= end) 
        return true;
    return (str[start] == str[end]) && check_palindrome(str, start + 1, end - 1);
}

int main() {
    string str = "rara";
    bool is_palindrome = check_palindrome(str, 0, 3);
    cout << is_palindrome;
    return 0;
}
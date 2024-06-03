#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int start, int end) {

    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
 bool val= isPalindrome(str, start + 1, end - 1);
 return val;
}

int main() {
    string str;
    cin>>str;
    if (isPalindrome(str, 0, str.length() - 1)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
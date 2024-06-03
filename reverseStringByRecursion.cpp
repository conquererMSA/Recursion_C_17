#include<bits/stdc++.h>
using namespace std;
void reverseString(string s, int index, int size){
    if(index==size-1){
        cout<<s[index];
        return;
    }
    // cout<<s[index]; //straight print
    reverseString(s, index+1, size);
    cout<<s[index]; //revers print
}
int main(){
    string s;
    getline(cin, s);
    reverseString(s, 0,s.length());
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void stringPermutation(string s, int left, int right){
  if(left==right){
    cout<<s<<endl;
    return;
  }
  for(int i=left; i<=right; i++){
    swap(s[left], s[i]);
    stringPermutation(s, left+1, right);
    swap(s[left],s[i]);
  }

}
int main(){
    string s;
    cin>>s;
    stringPermutation(s, 0, s.length()-1);
    return 0;
}
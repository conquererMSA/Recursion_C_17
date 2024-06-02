#include<bits/stdc++.h>
using namespace std;
int calFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int val=calFactorial(n-1);
    return val*n;
}
int main(){
    int n;
    cin>>n;
    int factValue=calFactorial(n);
    cout<<factValue;
    return 0;
}
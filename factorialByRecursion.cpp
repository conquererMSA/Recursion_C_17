#include<bits/stdc++.h>
using namespace std;
int calFactorial(int n){
    int fact=1;
    if(n==0 || n==1){
        return fact;
    }
    return fact*calFactorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int factValue=calFactorial(n);
    cout<<factValue;
    return 0;
}
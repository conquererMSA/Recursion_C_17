#include<bits/stdc++.h>
using namespace std;
int findGCD(int x, int y){
 if(x==0){
    return y;
 }
 if(y==0){
    return x;
 }
 int gcd=findGCD(y, x%y);
 return gcd;
}
int main(){
    int x, y;
    cin>>x>>y;
    int gcd=findGCD(x,y);
    cout<<gcd;
    return 0;
}

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
 //ekhane protita recursion function call e x and y er man and obostan er poriborton hoy. zotokkhon na porzonto x and y er moddhye kuno value 0 na hocce recursive function call hotei thake. Kuno ekti value 0 holei onno value return kore deya hoy.
 return gcd;
}
int main(){
    int x, y;
    cin>>x>>y;
    int gcd=findGCD(x,y);
    cout<<gcd;
    return 0;
}

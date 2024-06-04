#include<bits/stdc++.h>
using namespace std;
bool isOdd(int n){
    return n%2!=0?true:false;
}
int sumOfOdd(int x, int y){
    if(x>y){
        return 0;
    }
    int odd=isOdd(x)?x:0;
    int val=sumOfOdd(x+1, y);//ekhan theke 0 return pabo. then current value x odd hole sumOfOdd er return kora value er sathe zug hobe and return kora hobe.
    return val+odd;

}
int main(){
    int x, y;
    cin>>x>>y;
    int result=sumOfOdd(x,y);
    cout<<result;
    return 0;
}
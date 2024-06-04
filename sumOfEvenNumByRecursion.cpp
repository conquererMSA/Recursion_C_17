#include<bits/stdc++.h>
using namespace std;
bool isEven(int n){
    return n%2==0?true:false;
}
int sumOfEven(int x, int y){
    if(x>y){
        return 0;
    }
    int even=isEven(x)?x:0;
    int val=sumOfEven(x+1,y);
    return val+even;
}
int main(){
    int x,y;
    cin>>x>>y;
    int total=sumOfEven(x,y);
    cout<<total;
    return 0;
}
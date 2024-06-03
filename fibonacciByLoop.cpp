#include<bits/stdc++.h>
using namespace std;
int main(){
    //fibonacci hocce number gulur zugfol
    int input;
    cin>>input;
    int a=0, b=1, fibo;
    //ekhane fibo hobe a and b er sum. karon fibonacci hocce purboborti songkha gulur zugfol.
    if(input==0){
        fibo=a;
    }else if(input==1){
        fibo=b;
    }else{
        for(int i=2; i<=input; i++){
            //ekhane a+b kore fibo te rakhbo;
            fibo=a+b;
            a=b;
            b=fibo;
        }
    }
    cout<<"fibonacci for "<<input<<" is: "<<fibo;
    return 0;
}
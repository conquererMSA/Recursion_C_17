#include<bits/stdc++.h>
using namespace std;
int findMultiplication(int x, int y){
    //multiplication operator chara multiplicatopn result ber korte hole. kuno ekta number ke nirdistoar zug korte hobe. ekhane x ke y bar zug kora hoyeche.
    //baseCase
    if(x==0 || y==0){
        return 0;
    }
    //Recursive case
    if(y==1){
        return x;
    }
    //ekhane y er value 1 1 kore komte komte zokhon 1 hoye zabe tokhon x return kore dibo.
    // int number=x;
    int result=findMultiplication(x,y-1);
    //recursive function e x er man opribortito rekhe and y er man 1 1 kore komiye x ke y bar zug kora hoyeche. recursive function protibar x and ager x er zug fol return kore.
    return result+x;
}
int main(){
    int x,y;
    cin>>x>>y;
    int result=findMultiplication(x,y);
    cout<<result;
    return 0;
}
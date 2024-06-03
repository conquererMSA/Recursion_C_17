#include<bits/stdc++.h>
using namespace std;
int findMin(int arr[], int size, int index){
    if(index==size-1){
        return arr[index];
    }
    int lastElem=findMin(arr, size, index+1);
    //ekhane findMin func er index barte barte zokhon last index e cole zabe , skhan teke array er last elem return hobe. last index er elem er sathe er ager ghorer elem compare korbo. ekhane findMin func shudhu matro last element return kore, onno index gulur kkhetre index diye access kora hoy. ekhane findMin function reversly elem return korbe.
    return arr[index]<lastElem?arr[index]:lastElem;
    //ekhane findMin er return kora array er last elem er sathe findMin function er current index eleme access kore compare kora hoy. zeti smaller seti return kora hocce.
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int result=findMin(arr, size, 0);
    cout<<result;
    return 0;
}
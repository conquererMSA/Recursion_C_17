#include<bits/stdc++.h>
using namespace std;

int findMax(float arr[], int index) {
    if(index==4){
        return arr[index];
    }
    float lastEle=findMax(arr, index+1); //only return last elem of array, then we compare every time with index number
    //ekhane findMin func er index barte barte zokhon last index e cole zabe , skhan teke array er last elem return hobe. last index er elem er sathe er ager ghorer elem compare korbo. ekhane findMin func shudhu matro last element return kore, onno index gulur kkhetre index diye access kora hoy. ekhane findMin function reversly elem return korbe.
    return lastEle>arr[index]?lastEle:arr[index]; //for integer elem
    //ekhane findMin er return kora array er last elem er sathe findMin function er current index eleme access kore compare kora hoy. zeti smaller seti return kora hocce.

    // for float number
    // int max=INT_MIN;
    // if(arr[index]>lastEle&&arr[index]>max){
    //     return max=arr[index];
    // }else if(arr[index]>max){
    //     return max=arr[index];
    // }else{
    //     return max;
    // }
}

int main() {
    float arr[5] = {16,33,99,11,45};
    int size = 5;
    int max = findMax(arr, 0);
    cout << "The maximum number in the array is: " << max << endl;
    return 0;
}

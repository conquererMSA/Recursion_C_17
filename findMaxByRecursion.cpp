#include<bits/stdc++.h>
using namespace std;

int findMax(float arr[], int index) {
    if(index==4){
        return arr[index];
    }
    float lastEle=findMax(arr, index+1); //only return last elem of array, then we compare every time with index number
    return lastEle>arr[index]?lastEle:arr[index]; //for integer elem

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

#include<stdio.h>
void printArray(int * ar, int n, int i){
  if(i==n) return;
  printf("%d ",ar[i]);
  printArray(ar,n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printArray(a,n,0);

    return 0;
}
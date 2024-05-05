#include<stdio.h>
int len(char a[], int i){
    if(a[i]=='\0') return 0;
    int l=len(a,i+1);
    return l+1;
}
int main(){
    char a[100];
    scanf("%s",&a);
    int length=len(a,0);
    printf("%d",length);
    return 0;
}
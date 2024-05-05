//callStack function call er sathe somporkito. kuno fu nction call hole callStack e function ti obostan kore , oi function er sob kaj shesh na hoaya porzonto.
#include<stdio.h>
void fun(int i){
    if(i>5) return;
    printf("%d\n",i);
    fun(i+1);
}
int main(){
    fun(1);
    return 0;
}
#include <stdio.h>

int f(int n);

int main(){
    printf("Result = %d\n", f(5));
    return 0;
}

int f(int n){
    int a, b;
    if (n > 2) {
        a = f(n-1);
        b = f(n-2);
        printf("a = %d, b = %d\n", a, b);
        return a + b;
    } 
    else {
        return 2;
    } 
}
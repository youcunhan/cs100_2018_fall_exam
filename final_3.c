#include<stdio.h>
#include<stdlib.h>

void countZeros(int num, int *count)
{
    if (num == 0) 
        return;
    if (num % 10 == 0) 
    (*count)++;
    countZeros(num/10, count);
}

// int main() {
//     int *ptr = (int*)malloc(sizeof(int));
//     *ptr = 0;
//     countZeros(10020,ptr);
//     printf("%d\n", *ptr);
//     return 0;
// }
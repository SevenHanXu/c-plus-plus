/*************************************************************************
	> File Name: volatile.c
	> Author: 
	> Mail: 
	> Created Time: 四  9/27 22:36:59 2018
 ************************************************************************/

#include<stdio.h>
int main(){
    const volatile int i = 10;
    int *p = (int *)(&i);
    *p = 100;
    printf("i : %d\n", i);
    printf("*p : %d\n", *p);
    printf("&i : %p\n", &i);
    printf("p : %p\n", p);
    return 0;
}

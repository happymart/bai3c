/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on February 18, 2019, 11:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a, b;
    printf("Nhập số a: ");
    scanf("%d",&a);
    printf("Nhập số b: ");
    scanf("%d",&b);
    printf("Tổng %d + %d = %d \n",a,b,a+b);
    printf("Tích %d * %d = %d \n",a,b,a*b);   
    printf("Hiệu %d - %d = %d \n",a,b,a-b);
    if(b==0){
        printf("không thực hiện được phép chia vì b=0 ");
    }else{
        printf("Thương %d / %d = %f \n",a,b,(double)a / (double)b); 
    }
    
    return (EXIT_SUCCESS);
}


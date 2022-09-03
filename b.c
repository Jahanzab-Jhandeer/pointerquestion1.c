#include<stdio.h>

int main () {
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("Using & operator\n");

int *ptr1;
float *ptr2;
char *ptr3;

ptr1 = &m;
ptr2 = &fx;
ptr3 = &cht;

    printf("Demonstrate the use of & and * operator\n");
    printf("m = %d\n" , m);
    printf("fx =  %f\n" , fx);
    printf("z = %c\n" , cht);

    printf("using the & operator\n");
    printf("address of m = %p\n" , &m);
    printf("address of fx =  %p\n" , &fx);
    printf("address of z = %p\n" , &cht);

    printf("Using & and * operator\n");
    printf("value at address of m = %d\n" , *(&m));
    printf("value at address of fx =  %f\n" , *(&fx));
    printf("value at address of cht  = %c\n" , *(&cht));

    printf("Using only pointer variable\n");
    printf("address of m = %p\n" , ptr1);
    printf("address of fx = %p\n" , ptr2);
    printf("address of cht = %p\n" , ptr3);

    printf("use only the pointer opreator\n");
    printf("value of address m = %d\n" , *ptr1);
    printf("value of address fx = %f\n" , *ptr2);    
    printf("value of address cht = %c\n" , *ptr3);

}
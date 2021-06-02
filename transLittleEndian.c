#include<netinet/in.h>
#include<stdio.h>
void main(){
    unsigned long int val1 = 0x010203;
    unsigned long int val2 = htonl(val1);
    printf("val2:%d\n",val2);
}


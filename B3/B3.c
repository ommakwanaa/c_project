#include <stdio.h>
#include <stdbool.h>
int main()
{   unsigned int inp_number,rev_number=0,factor=1;
    int i;
    bool inp_number_bits[32];
    printf("enter number:");
    scanf("%d",&inp_number);
    printf("Before:");
    for(i=31;i>=0;i--)
    {inp_number_bits[i]=(bool)(inp_number & factor);
    inp_number=inp_number>>factor;
    rev_number=((rev_number<<factor)|inp_number_bits[i]);}
    for(i=28;i<32;i++)
    {printf("%d",(int)inp_number_bits[i]);}
    printf(" After:");
    for(i=0;i<4;i++)
    {printf("%d",(int)inp_number_bits[31-i]);}
    return 0;
}

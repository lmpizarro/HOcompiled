#include <stdio.h>
//#include "c-sum.h"

#define NUM 200

int main(int argc, char **argv)
{
    int data[NUM], num, i;
    int sum;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }

    sum_abs_(data, &num, &sum);
    printf("sum=%d\n", sum);
    return 0;
}

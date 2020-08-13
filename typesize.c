#include <stdio.h>

int main(void){
    // %zd(c99) sizeof

    printf("Type int has a size of %zd bytes\n",sizeof(int));
    printf("Type long has a size of %zd bytes\n",sizeof(long));
    printf("Type short has a size of %zd bytes\n",sizeof(short));
    printf("Type char has a size of %zd bytes\n",sizeof(char));
    printf("Type long long has a size of %zd bytes\n",sizeof(long long));
    printf("Type float has a size of %zd bytes\n",sizeof(float));
    printf("Type long double has a size of %zd bytes\n",sizeof(long double));
    printf("Type double has a size of %zd bytes\n",sizeof(double));
    return 0;
}
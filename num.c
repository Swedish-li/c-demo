#include <stdio.h>

void printName(void);

void printYear(void);

int main(void){
    int n;
    float fl ;
    printf("first num: %d\n",n);

    printf("first float num: %f\n",fl);

    printName();
    printYear();
    return 0;
}

void printName(void){
    printf("Gustav Mahler\n");
    
    printf("Gustav\nMahler\n");

    printf("Gustav Mahler\n");

    printf("Gustav Mahler\n");
}

void printYear(void){
    int days = 365 * 27;

    printf("year: %d\n",days);

}
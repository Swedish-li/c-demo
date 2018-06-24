#include <stdio.h>
#include <string.h>
// windows中文乱码
// -fexec-charset=gbk
// -finput-charset=utf-8
int show(void){

    int x = 2888;
    printf("%x\n",x);

    printf("%o\n",x);

    printf("%d\n",x);

    printf("%e\n",x);

    char* str = "葫芦娃";

    printf("str:%s, strlen:%d\n",str,strlen(str));

}
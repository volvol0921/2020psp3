#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p;
    int i;

    p = (int*)malloc(sizeof(int) *5);
    if (p == NULL){

    } else{
        for(i=0;i<5;i++){
            p[i] = i+1;
        }
        for(i=0; i<5; i++){
            printf("%d\n",*(p+i));
        }
        free(p);
    }
}
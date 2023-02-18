#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    printf("address of ptr = %p\n",ptr);
    ptr = (int *)malloc(sizeof(int)*1);
    if(ptr!=NULL){
        printf("address of allocated momory =%p\n",ptr);
        free(ptr);
    }
    printf("address of ptr after free= %p\n",ptr);
    ptr = NULL;
    printf("address of ptr = %p\n",ptr);
    

    return 0;
}

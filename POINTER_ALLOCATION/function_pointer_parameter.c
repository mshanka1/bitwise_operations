
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next_node;
};
struct node* create_node(struct node*);

int main()
{
    struct node *ptr=NULL;
    struct node *ret_node=NULL;
    ret_node = create_node(ptr);
    printf("return address =%p\n",ret_node);
    free(ret_node);
    return 0;
}
struct node* create_node(struct node* param_node)
{
    param_node = (struct node*)malloc(sizeof(struct node));
    if(param_node==NULL)
    {
        printf("failed to allocate memory\n");
        return NULL;
    }
    else
    {
        printf("address =%p\n",param_node);
    }
    return param_node;
}


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* (*fn_ptr_add_data)(struct node*);
    struct node *next_node;
};
struct node* create_node(struct node*);
struct node* add_node_data(struct node*);

int main()
{
    struct node *ptr=NULL;
    struct node *ret_node=NULL;
    ret_node = create_node(ptr);
    printf("return address =%p\n",ret_node);
    ret_node = ret_node->fn_ptr_add_data(ret_node);//calling the callback
    printf("data stored=%d\n",ret_node->data);
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
        param_node->fn_ptr_add_data = add_node_data;//registering the call back
        printf("address =%p\n",param_node);
    }
    return param_node;
}

struct node* add_node_data(struct node* param_node)
{
    param_node->data = 10;
    param_node->next_node = NULL;
    return param_node;
}


#include <stdio.h>
#include <stdlib.h>

#define NO_OF_NODES 3
struct MYNODE{
    int node_num;
    struct MYNODE *next_node;
};

int main()
{
    struct MYNODE *ptr_node=NULL;//temp node
    struct MYNODE *ptr_node_start=NULL;//head node
    struct MYNODE *ptr_node_curr=NULL;//current node
    int count =0;
    for(count=0;count<NO_OF_NODES;count++)
    {
        ptr_node = (struct MYNODE*)malloc(sizeof(struct MYNODE));//allocate memory
        if(ptr_node==NULL)
        {//if memory allocation fails
            printf("memory allocation failed\n");
            break;
        }
        else
        {
            ptr_node->node_num=count+1;//set the value
            ptr_node->next_node=NULL;//set the next node to null
            if(ptr_node_start==NULL)
            {//if head is not filled
                ptr_node_start = ptr_node_curr = ptr_node;
            }
            else
            {
                ptr_node_curr->next_node = ptr_node;//set the current nodes next node to temp address
                ptr_node_curr=ptr_node;//set current node to temp address
            }
        }
    }
    //display list
    ptr_node=ptr_node_start;//assign temporary address to head address
    count=0;
    while(ptr_node!=NULL)
    {
        printf("node address (%p): %d=%d\n",ptr_node,count,ptr_node->node_num);
        count++;
        ptr_node=ptr_node->next_node;//assgin temporary node to temporary nodes next node address
    }
    ptr_node=ptr_node_start;//assign temporary address to head address
    count=0;
    while(ptr_node!=NULL)
    {
        ptr_node_curr=ptr_node->next_node;
        free(ptr_node);
        printf("node address (%p):Freed and added %d=%d\n",ptr_node,count,ptr_node->node_num);//value displayed will be junk
        ptr_node=NULL;
        count++;
        ptr_node=ptr_node_curr;
        printf("Freed node=%d\n",count);
    }
    ptr_node=ptr_node_start;//assign temporary address to head address
    count=0;
    while(ptr_node!=NULL)
    {
        printf("node address (%p):after Freed %d=%d\n",ptr_node,count,ptr_node->node_num);
        count++;
        ptr_node=ptr_node->next_node;//assgin temporary node to temporary nodes next node address
    }
    printf("Ending...\n");
    return 0;
}

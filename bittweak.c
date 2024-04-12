#include <stdio.h>
#define SETBIT(x,pos)   (x|=(1<<pos))
#define CLEARBIT(x,pos)  (x&=(~(1<<pos)))
#define ISBITSET(x,pos)  ((x&(1<<pos))?1:0)
#define SWAPBYTE(x,y)    (x^=y^=x^=y)
#define CHECKSIGN(x)     (-(x<0))
#define CHECKOPPSIGNS(x,y) (((x^y)<0)?1:0)
#define MIN(x,y)         (y^((x^y)&-(x<y)))
#define MAX(x,y)         (x^((x^y)&-(x<y)))
#define CHECKPOWER2(x)   (x&&!(x&(x-1)))
#define TOGGLEBIT(x,pos)  (x^=(1<<pos))
int main()
{
    int x=8;
    int y=0;
    if(CHECKOPPSIGNS(-8,11))
    {
        printf("opposite signs\n");
    }
    else
    {
        printf("same signs\n");
    }
    if(CHECKSIGN(-7)==0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negetive\n");
    }
    printf("min= %d\n",MIN(-8,1));
    printf("max= %d\n",MAX(-8,1));
    if(CHECKPOWER2(6))
    {
        printf("power of 2\n");
    }
    else
    {
        printf("not power of 2\n");
    }
    SWAPBYTE(x,y);
    printf("swapped = %d,%d\n",x,y);
    SETBIT(x,3);
    SETBIT(x,0);
    printf("%d\n",x);
    if(ISBITSET(x,3))
    {
        printf("Bit set\n");
    }
    else
    {
        printf("Bit not set\n");
    }
    CLEARBIT(x,3);
    printf("%d\n",x);
    if(ISBITSET(x,3))
    {
        printf("Bit set\n");
    }
    else
    {
        printf("Bit not set\n");
    }
    TOGGLEBIT(x,3);
    printf("%d\n",x);
    return 0;
}

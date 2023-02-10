/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define SETBIT(x,pos) (x|=(1<<pos))
/*
SETBIT(1,3) --> (x=1|(1<<3))
1<<3 = 8 (1000)
0001|1000 = 1001 =9 (bit is set)
*/
#define CHECKBIT(x,pos) (x&(1<<pos)?1:0)
/*
CHECKBIT(9,3) --> 9&(1<<3)?1:0
1<<3 = 8 (1000)
9&8 = 1001 & 1000 = 1000 which is true
returns 1
*/
#define CLEARBIT(x,pos) (x&=(~(1<<pos)))
/*
CLEARBIT(15,3)--> x=15&(~(1<<3))
1<<3 = 8 (1000)
~8 = ~(1000) = 0111
15&7 = 1111 & 0111 = 0111
BIT is cleared
*/
#define TOGGLEBIT(x,pos) (x^=(1<<pos))
/*
TOGGLEBIT(5,2) --> x=5^(1<<2)
1<<2 = 4 (0100)
5^4 = 0101 ^ 0100 = 0001 
Bit is toggled
*/
#define SWAPDATA(x,y)    (x^=y^=x^=y)
/*
SWAPDATA(5,4) --> x=5^4, y=4^x, x=x^y
5^4 = 0101 ^ 0100 = 0001 = new x
4^1 = 0100 ^ 0001 = 0101 final y 
1^5 = 0001 ^ 0101 = 0100 final x 
x=4 and y=5 data swaped
*/
int main()
{
    int num = 0;
    int pos =4;
    SETBIT(num,pos);
    printf("result setbit4= %d\n",num);
    printf("result checkbit pos4=%d\n",CHECKBIT(num,4));
    pos =3;
    SETBIT(num,pos);
    printf("result setbit3= %d\n",num);
    printf("result checkbit pos3=%d\n",CHECKBIT(num,3));
    printf("result clearbit3=%d\n",CLEARBIT(num,3));
    printf("result clearbit4=%d\n",CLEARBIT(num,4));
    printf("result Togglebit pos4 = %d\n",TOGGLEBIT(num,4));
    printf("result Togglebit pos3 = %d\n",TOGGLEBIT(num,3));

    return 0;
}

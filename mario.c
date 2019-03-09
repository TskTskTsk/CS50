#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int s = get_int("How high would you like your pyramid?\n");
    if(s>=1 && s<=8)
    {
        for(int i=0;i<=s;i++)
        {
            for(int j=0;j<(s-i);j++)
            {
                printf(" ");
            }
            for(int k=0;k<i;k++)
            {
                printf("#");
            }
            printf("  ");
            for(int k=0;k<i;k++)
            {
                printf("#");    
            }
            printf("\n");
        }            
    }
     else
     {
         printf("I only have enough blocks for a pyramid 8 units high! Please choose another height\n");
     }
}

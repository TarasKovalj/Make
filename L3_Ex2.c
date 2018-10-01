#include<stdio.h>
#include "inc1.h"

int find_max(int *array, char size)
{
    char i=1;
    int max=array[0];
    while(i<size)
    {
        max = max>array[i] ? max : array[i];
        i++;
    }
    return (max);
}

int main()
{
   int input_array[]={7,16,-64,42,-35};
   char arr_size = sizeof(input_array)/4;                   //4-byte int
   
   int maximum = find_max(input_array, arr_size);
   
   printf("Maximum element of input_array is %i\n", maximum);
   
   char x = inc(maximum);
   printf("Maximum after inc %i\n", x);
   
   /* Addition for see result in .exe*/
   char input_char=getchar();
}

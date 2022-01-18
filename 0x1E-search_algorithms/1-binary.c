#include "search_algos.h"


/**
*binary_search - searches for a value in an array of integers
*@array: pointer to the first element of the array
*@size: number of elements in array
*@value: to search for
*Return: -1 or i
*/


int binary_search(int *array, size_t size, int value)
{
size_t lefty = 0;
size_t righty = size -1;
size_t mid;

 

if (array == 0)
return (-1);
while (lefty < righty)
{
printf("Searching in array: ");
p_array(array, lefty, righty + 1);
mid = (lefty + righty) / 2;
if (array[mid] < value)
{
lefty = mid + 1;
}
else if (array[mid] > value)
{
righty = mid -1;
}
else
{
return (mid);
}
}
return (-1);
}

/**
 *p_array - to print array 
 *@i: ptr to array
 *@begg: beggining to print
 *@end: end for prin
 *
 *Return: nothing 
 */

void p_array(int *i, int begg, int end)
{
int j;  

for(j = begg; j < end; j++)
{
if (j < end - 1)
printf("%d, ", i[j]);
else
printf("%d\n ", i[j]);
}
}

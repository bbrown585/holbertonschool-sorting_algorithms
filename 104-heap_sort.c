#include "sort.h"

/**
* max - Sorts array
* @a: array
* @n: size of array
* @i: index
* @j: val
* @k: val
* Return: max
**/

int max(int *a, int n, int i, int j, int k)
{
int m = i;

if (j < n && a[j] > a[m])
{
m = j;
}
if (k < n && a[k] > a[m])
{
m = k;
}
return (m);
}

/**
* sift - Sifts down
* @a: array
* @n: size of array
* @i: index
* Return: Void
**/

void sift(int *a, int n, int i)
{
int t;

while (1)
{
int j = max(a, n, i, 2 * i + 1, 2 * i + 2);

if (j == i)
{
break;
}
t = a[i];
a[i] = a[j];
a[j] = t;
i = j;
}
}

/**
* heap_sort - Sorts array
* @array: array
* @size: size of array
* Return: Void
**/

void heap_sort(int *array, size_t size)
{
int i;
int t;

for (i = (size - 2) / 2; i >= 0; i--)
{
sift(array, size, i);
}
for (i = 0; i < (int)size; i++)
{
if (i != 0)
print_array(array, size);
t = array[size - i - 1];
array[size - i - 1] = array[0];
array[0] = t;
sift(array, size - i - 1, 0);
}
}

// Quick sort Partition Logic of the array
#include<stdio.h>
void Print(int * , int);
void partition (int * , int);
int main ()
{	int size , i ;
	printf("Enter the size of array \n");
	scanf("%d" , &size);
		int array[size];
	printf("Enter the elements of the array \n");
	for (i = 0 ; i<size ; i++)
	{
		scanf("%d" , &array[i]);
	}
int j , pivot ,flag;
i =0 ;
    pivot = 0;
	i = pivot + 1;
	j = size-1;
	
    while (j > i)
    {
    while (array[i] < array[pivot])
    {
    	i++;
	}
	 while (array[j] > array[pivot])
    {
    	j--;
	}
	flag = array[i];
	array[i] = array[j];
	array[j] = flag;
	}
	flag = array[pivot];
	array[pivot] = array[j];
	array[j] = flag;
	Print(array,size);
	return 0;
}
void Print(int *ap , int size)
{int i;
		for (i = 0 ; i<size ; i++)
	{
		printf("%d \n" , *(ap) );
		ap = ap + 1;
	}
}

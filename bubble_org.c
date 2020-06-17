/**************************************************************
*此为 冒泡 程序 记忆
*
*21/6/2019
*vincent you
*nanshan hi-tech park ShenZhen
***************************************************************/
#include<stdio.h>

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubble(int* a,int size)
{
	int i,j;
	for(j=0;j<(size-1);j++)
	{
		for(i=0;i<(size-1);i++)
		{
			if(*(a+i+1)<*(a+i))
			{
				swap((a+i),(a+i+1));
			}
		}
	}
}

void show_array(int* a,int size)
{
	int i;
	for(i=0;i<(size);i++)
	{
		printf("%d ",*(a+i));
	}
	printf("\n");
}

int main()
{
	int a[] = {2,1,2,7,5,6};
	int length_of_a = sizeof(a)/sizeof(*a);
	bubble(a,length_of_a);
	show_array(a,length_of_a);
}
cc
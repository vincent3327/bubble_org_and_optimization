/**************************************************************
*此为优化次数冒泡法程序
*
*22/6/2019
*vincent you
*nanshan hi-tech park ShenZhen
***************************************************************/
#include<stdio.h>
#include<stdlib.h>


void swap(int *a,int *b)//第一次编写的时候没有传址而是传值，导致交换落空
{
	int tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}

void printarray(int* a,int DIM)
{
	int i;
	for(i=0;i<(DIM);i++)
	{
		printf("%d ",*(a+i));
	}
	printf("\n");
}

int bubble(int* a,int size)
{
	int i,j,count,noswap_cnt = 0,flag=0,ext_loop = 0;
	count = 0;
	for(j=0;j<(size-1);j++)  
	{
		//外
		ext_loop++;
		//noswap_cnt = 0;
		
	for(i=0;i<(size-1);i++)
	{
			
			
			if((*(a+i+1))>(*(a+i)))
				{
					swap((a+i),(a+i+1));//注意：这里要传址
					//flag = 1;
					noswap_cnt = 0;
					//printf("count now is %d\n",count);
				}
				else
				{
					//no swap increase 1
					noswap_cnt++;
					//flag = 0;
				}
				
				//比较了一次，count加一
				count++;
				
				//indicate that no need to sort
				if((size-1)==noswap_cnt)
					{
						flag = 1;
						printf("no swap %d times\n",(size-1));
						break;//跳出比较相邻数的循环
					}
		
	   }
	   printf("ext_loop now = %d\n",ext_loop);
	   
	   //if flag setted,than compare stopped and exit directly
	   if(flag == 1)
	   {
		   break;//跳出外循环
	   }
		
		
			
	}
	
	printf("count now is %d\n",count);	
	return count;
	//printarray(a,size);
}

int main()
{
	int i,comparecnt;
	int a[] = {13,12,11,10};
	int DIM = sizeof(a)/sizeof(*a);
	comparecnt = bubble(a,DIM);
	printf("compared %d times\n",comparecnt);
	printarray(a,DIM);
}

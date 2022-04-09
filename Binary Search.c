#include<stdio.h>
int main()
{
    int i,data;
    int flag=0;
    int arr[8];
    for(i=0;i<8;i++)
    {
    	printf("Enter your array elements:");
    	scanf("%d",&arr[i]);
    	printf("\n");
	}
	printf("*****+*****\n");
    printf("\nEnter your searching data:");
    scanf("%d",&data);
    for(i=0;i<8;i++)
    {
        if(arr[i]==data)
        {
            printf("\nData found at index:%d\n",i);
            flag=1;
            break;
        }
    }
    if(flag=0)
    {
        printf("Element not found");
    }
}

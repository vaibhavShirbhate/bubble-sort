#include<stdio.h>
int main ()
{
	int n;
	printf("emter the size of array;\n");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("enter the array element:\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);   //reading of array
		
	}
//	printf("the given array is:\n");
//	for(i=0;i<n;i++)
	//printf("%d\n",a[i]);     //print the array
	
	for(i=0;i<n-1;i++)   //pass
	{
		for(j=0;j<n-1;j++)    //compare the element
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];    //swaping of element
				a[j]=temp;
				
				
			}
		}
	}
	printf("sorted aaray:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);

	
return 0;
}


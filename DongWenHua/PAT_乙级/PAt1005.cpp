#include<stdio.h>
#include<stdlib.h> 
void sort(int *a,int n){
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]<temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
int main()
{
	int *a;
	int n,i,t,j;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int)); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=a[i];
		if(t==0)
			continue;
		while(t!=1)
		{
			if(t%2==0)
				t/=2;
			else
				t=(t*3+1)/2;
			for(j=0;j<n;j++)
			{
				if(a[j]==t)
				{
					a[j]=0;
					break;
				}
			}
		}
	}
	sort(a,n);
	for(i=0;a[i]>=1;i++){
		printf("%d%s",a[i],a[i+1]>0?" ":"");
	}
	return 0;
 } 

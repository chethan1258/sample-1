#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int n, c[20][20],i,j,visited[20];
void prims();
void prims()
{
	int min,a,b,k,count=0,cost=0;
	visited[i]=1;
	while (count<n-1)
	{
		min=999;
		for(i=1;j<=n;i++)
		{
		for(j=1;j<=n;j++)
	    {
	    	if((visited[i])&&(!visited[j])&&(min>c[i][j]))
	    	{
	    		min=c[i][j];
	    		a=i;
	    		b=j;
			}
		
		}
	}
	printf("%d--->%d=%d\n",a,b,c[a][b]);
	cost+=c[a][b];
	visited[b]=1;
	count++;
}
printf("Total cost is %d",cost);
}
int main()
{
	printf("enter the number of nodes in the graph\n");
	scanf("%d",&n);
	printf("enter the cost adjacency matrix\n");
	for (i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		scanf("%d",&c[i][j]);
	}
	prims();
	getch();
}

#include <stdio.h>
int graph[4][4] = {{0, 1, 1, 1},
                     {0, 0, 1, 1},
                     {1, 1, 0, 1},
                     {1, 0, 1, 0}};
bool coloring(int [],int);
bool is_safe(int [],int,int);
int m=3;
int main()
{
	int colors[m];
	if(coloring(colors,0))
	{
		for(int i=0;i<4;i++)
		printf("%d",colors[i]);
	}
	else
	printf("not possible");
}
bool coloring(int colors[],int v)
{
	if(v>=4)
	return true;
	for(int i=1;i<=m;i++)
	{
	if(is_safe(colors,v,i))
	{
		colors[v]=i;
		if(coloring(colors,v+1))
		return true;
		colors[v]=0;
	}
}
return false;
}
bool is_safe(int colors[],int v,int c)
{
	for(int i=0;i<4;i++)
	{
		if(graph[v][i]&&colors[i]==c)
		return false;
		
	}
	return true;
}

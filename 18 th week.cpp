#include <stdio.h>
int V=4;
 int graph[4][4] = {{0, 1, 1, 1},
                     {1, 0, 1, 0},
                     {1, 1, 0, 1},
                     {1, 0, 1, 0}};
  int m = 3;
  int colors[4]={0,0,0,0};
bool is_safe(int vertex,int color)
{
	for(int i=0;i<V;i++)
	{
		if(graph[vertex][i]==1&&colors[i]==color)
		return false;
	}
	return true;
	
}
bool graph_coloring(int vertex)
{
	if(vertex==V)
	return true;
	for(int i=1;i<=m;i++)
	{
		if(is_safe(vertex,i))
	{
		
		colors[vertex]=i;
		if(graph_coloring(vertex+1))
		return true;
		colors[vertex]=0;
	}
}
	return false;
}
int main()
{
	if(graph_coloring(0))
	{
		printf("Solution exists: Following are the assigned colors:\n");
  for (int i = 0; i < V; i++) {
    printf("%d ", colors[i]);
  }
  printf("\n");
	}
}

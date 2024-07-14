#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int max_profit, n, capacity;
int weight[MAX], profit[MAX], bound[MAX];
void knapsack(int i, int profit_so_far, int weight_so_far);
int main()
{
    int i, j;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);
    printf("Enter the weight and profit of each item:\n");
    for (i = 0; i < n; i++)
        scanf("%d %d", &weight[i], &profit[i]);

    // Calculate the bound for each node
    for (i = 0; i < n; i++)
        bound[i] = profit[i];
    for (i = n - 2; i >= 0; i--)
        bound[i] += bound[i + 1];

    // Call the knapsack function to find the optimal solution
    knapsack(0, 0, 0);

    printf("Maximum Profit: %d\n", max_profit);
     return 0;
}

void knapsack(int i, int profit_so_far, int weight_so_far)
{
    if (weight_so_far > capacity) // Check if capacity is exceeded
        return;
    if (i == n) // Check if all items have been considered
    {
        if (profit_so_far > max_profit)
        {
            max_profit = profit_so_far;
            
        }
        return;
    }
// Branch left
    knapsack(i + 1, profit_so_far, weight_so_far);
     // Branch right
    if (weight_so_far + weight[i] <= capacity)
    {
        profit_so_far += profit[i];
        weight_so_far += weight[i];
        knapsack(i + 1, profit_so_far, weight_so_far);   
    }
}

#include <stdio.h>

/*
Problem: Best Time to Buy and Sell Stock

Test Case 1:
Input: [7,1,5,3,6,4]
Expected Output: 5

Test Case 2:
Input: [7,6,4,3,1]
Expected Output: 0
*/

int maxProfit(int* prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
                maxProfit = profit;
        }
    }

    return maxProfit;
}
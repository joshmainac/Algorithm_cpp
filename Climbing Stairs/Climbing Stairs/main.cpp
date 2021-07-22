#include <iostream>
using namespace std;



int main()
{






	return 0;
}


int climbStairs(int n) {
    if (n <= 2) return n; // Since the solution for 0,1 and 2 is the number itself, we just return it without any further calculations
    int temp1 = 1; // Imagine temp1 as dp[1] which stores number of ways to climb one step
    int temp2 = 2; // Imagine temp2 as dp[2]
    int ans = 0; // Ans is where we will store the value for n steps 
    // Now to find the next number of steps, we keep in store the value of the last two and keep  adding it.
    for (int i = 3; i < n + 1; i++)
    {
        ans = temp1 + temp2; // stores the value of n steps
        temp1 = temp2; // pushes the value of temp1 and temp2 one step back for the next iteration
        temp2 = ans;
    }
    return ans;
}
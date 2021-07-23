#include <iostream>
using namespace std;
int climbStairs_1(int n);
int climbStairs_2(int n)


int main()
{

    //int ans = climbStairs(45);




	return 0;
}


int climbStairs_1(int n) {
    if (n ==0 || n == 1) return 1; 
    int ans = climbStairs_1(n - 1) + climbStairs_1(n - 2);
    return ans;

}

int climbStairs_2(int n) {
    if (n == 0 || n == 1) return 1;
    int ans = climbStairs_2(n - 1) + climbStairs_2(n - 2);
    return ans;

}
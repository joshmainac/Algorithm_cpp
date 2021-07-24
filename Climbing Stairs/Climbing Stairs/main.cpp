#include <iostream>
using namespace std;
int climbStairs_1(int n);
int climbStairs_2(int n);


int main()
{


    int ans2 = climbStairs_2(1);




	return 0;
}


int climbStairs_1(int n) {
    if (n ==0 || n == 1) return 1; 
    int ans = climbStairs_1(n - 1) + climbStairs_1(n - 2);
    cout << ans << endl;
    return ans;

}

int climbStairs_2(int n) {
    int num1 = 1;
    int num2 = 1;
    int num3 = 1;

    for (int i = 0; i< n-1; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;


    }

    cout << num3 << endl;
    return num3;


}
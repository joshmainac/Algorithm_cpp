#include <iostream>
#include <stack>
#include <string> 
using namespace std;
int reverse(int x);
int reverse_2(int x);
//Input: x = 123
//Output : 321
int main()
{
	//Input
	//	1534236469
	//	Output
	//	1056389759
	//	Expected
	//	0
	cout << reverse_2(1534236469) << endl;





	return 0;
}


int reverse(int x) {
	//make x to string
	string ans;
	string aa;
	if (x < 0)
	{
		ans = ans + "-";
		aa = to_string(abs(x));
	}
	 
	stack<int> mystack;
	
	
	//push every charakter to stack
	for (int i = 0; i < aa.size(); i++)
	{
		mystack.push(aa[i]-'0');
	}
	//pop every character and add it to string
	while (!mystack.empty())
	{
		ans = ans + to_string(mystack.top());
		mystack.pop();
	}
	// return string 
	cout << ans << endl;
	int gh= 9;
	gh = gh + ans[1]-'0';
	return 1;
}

int reverse_2(int x) 
{
	int flag = 0;
	if (x < 0)
	{
		flag = 1;
	}


	int num = abs(x);
	long int ans = 0;
	int first_digit = 0;
	while (num > 0)
	{
		first_digit = num % 10;
		num = num / 10;
		ans = (ans * 10);
		ans = ans +first_digit;
		ans = ans + 0;
		
	}


	if (flag == 1)
	{
		ans = ans * (-1);
	}

	if (ans > INT_MAX || ans < INT_MIN)
	{
		return 0;
	}
	else
	{
		return ans;
	}


}
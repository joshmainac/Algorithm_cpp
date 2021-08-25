#include <iostream>
#include <stack>
#include <string> 
using namespace std;
int reverse(int x);
//Input: x = 123
//Output : 321
int main()
{

	cout << reverse(-123) << endl;





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

int reverse_2(int x, int size) {
	//make x to string


	return 0;
}
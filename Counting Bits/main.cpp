#include <iostream>
#include <vector>
using namespace std;
vector<int> countBits(int n);


int main()
{

	auto a = countBits(5);




	a;
	return 0;
}

vector<int> countBits(int n)
{
	vector<int> ans;
	for (int m = 0; m < n+1; m++)
	{
		int i = 0;
		int temp = m;
		while (temp != 0)
		{
			if (temp % 2 != 0)
			{
				i = i + 1;
				temp = temp - 1;
			}
			temp = temp / 2;
		}
		ans.push_back(i);


	}
	return ans;

}

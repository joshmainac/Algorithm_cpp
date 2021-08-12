#include <iostream>
#include <vector>
using namespace std;
vector<int> countBits(int n);


int main()
{

	countBits(183);





	return 0;
}

vector<int> countBits(int n)
{
	vector<int> ans;
	int i = 0;
	int temp = n;
	while (temp != 0)
	{
		if (temp % 2 != 0)
		{
			i = i + 1;
			temp = temp - 1;
		}
		temp = temp / 2;


	}
	
	i;
	return ans;



}
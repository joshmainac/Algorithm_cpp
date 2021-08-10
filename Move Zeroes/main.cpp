#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums);

int main()
{
	vector<int> myvector;
	myvector.push_back(0);
	myvector.push_back(0);
	for (int i = 1; i <= 10; i++) myvector.push_back(i);
	myvector.push_back(0);
	myvector.push_back(0);
	moveZeroes(myvector);


	
	return 0;
}



void moveZeroes(vector<int>& nums)
{
	//nums.erase(nums.begin() + 5); erase the 6th element
	int i = 0;
	
	for (int n : nums)
	{
		if (nums[i] == 0)
		{
			nums.erase(nums.begin() + i);
			nums.push_back(0);
			i = i - 1;
		}

		i++;
	}

	

}
//Given a non - empty array of integers nums, every element appears 
//twice except for one.Find that single one.
//
//You must implement a solution with a linear runtime
//complexityand use only constant extra space.

//Example 1:
//
//Input: nums = [2, 2, 1]
//Output : 1


//[1,3,1,-1,3]failed
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums);


int main()
{
	vector<int> myvector;
	myvector.push_back(2);
	myvector.push_back(2);
	myvector.push_back(1);
	int ans = singleNumber(myvector);





	return ans;
}



int singleNumber(vector<int>& nums)
{
	vector<int>seen1;
	vector<int>seen2;
	int ans = 0;
	int i;
	int j;

	for (i = 0; i < nums.size(); i++)
	{


		for (j = 0; j < seen2.size(); j++)
		{
			if (seen2[j] == nums[i])
			{
				break;
			}
		}
		if (j != seen2.size())continue;

		for (j = 0; j < seen1.size(); j++)
		{
			if (seen1[j] == nums[i])
			{
				seen1.erase(seen1.begin() + j, seen1.begin() + (j+1));
				seen2.push_back(nums[i]);
			
			}

		}
		if (j != seen1.size())continue;
		seen1.push_back(nums[i]);

	}







	return seen1[0];
}
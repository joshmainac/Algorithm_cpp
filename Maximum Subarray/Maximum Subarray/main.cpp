#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxSubArray(vector<int>& nums);

void main()
{
	int x = 5;
	int y = 6;

	int z = max(5, 6);


	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	z= maxSubArray(myvector);
	return;








}


int maxSubArray(vector<int>& nums)
{
	int currentsum = 0;
	int maxsum = 0;

	for (int i = 0; i < nums.size(); i++)
	{
		currentsum += nums[i];
		maxsum = max(currentsum, maxsum);



	}


	return maxsum;
}
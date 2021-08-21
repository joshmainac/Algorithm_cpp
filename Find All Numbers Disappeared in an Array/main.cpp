#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums);
vector<int> findDisappearedNumbers2();
using namespace std;
int main()
{
	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	findDisappearedNumbers(myvector);
	return 0;
}


vector<int> findDisappearedNumbers(vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > 0)
		{
			nums[i] *= -1;

		}


	}






	return nums;
}






vector<int> findDisappearedNumbers2()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int> vv;
	for (int i = 1; i <v.size()+1; i++)
	{
		vv.push_back(i);
	}
	for (int j : v)
	{
		auto i = std::remove(vv.begin(), vv.end(), j);
		vv.erase(i, vv.end());
	}
	return vv;
	






}
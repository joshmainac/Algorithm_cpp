#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target);
void test1_twoSum();
void test2_twoSum();
void test3_twoSum();



int main()
{
	//vector<int> myvector;
	//myvector.push_back(2);
	//myvector.push_back(7);
	//myvector.push_back(11);
	//myvector.push_back(15);

	//auto aaa = twoSum(myvector, 9);

	//aaa;

	test1_twoSum();
	test2_twoSum();
	test3_twoSum();





}



vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> ans;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				vector<int> aaa{ i,j };
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}

		}

	}
	return ans;
}


void test1_twoSum()
{
	//input 2,7,11,15. Out put should be 0,1
	vector<int> myvector;
	vector<int> correct_vector = { 0,1 };
	myvector.push_back(2);
	myvector.push_back(7);
	myvector.push_back(11);
	myvector.push_back(15);
	auto ans = twoSum(myvector, 9);
	if (ans == correct_vector)
	{
		printf("test 1 succeed\n");
	}
	else
	{
		printf("test 1 failed\n");
	}

}

void test2_twoSum()
{
	//input 11,15,2,7. Out put should be 2,3
	vector<int> myvector;
	vector<int> correct_vector = { 2,3 };
	myvector.push_back(11);
	myvector.push_back(15);
	myvector.push_back(2);
	myvector.push_back(7);

	auto ans = twoSum(myvector, 9);
	if (ans == correct_vector)
	{
		printf("test 2 succeed\n");
	}
	else
	{
		printf("test 2 failed\n");
	}

}


void test3_twoSum()
{
	//input 7,11,3,15. Output should be 0,2
	vector<int> myvector;
	vector<int> correct_vector = { 0,2 };

	myvector.push_back(7);
	myvector.push_back(11);
	myvector.push_back(3);
	myvector.push_back(15);
	auto ans = twoSum(myvector, 10);
	if (ans == correct_vector)
	{
		printf("test 3 succeed\n");
	}
	else
	{
		printf("test 3 failed\n");
	}

}
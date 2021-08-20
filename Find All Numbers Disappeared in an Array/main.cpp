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
	myvector.push_back(55);
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);

	return 0;
}


vector<int> findDisappearedNumbers(vector<int>& nums){
	//1) check vector head and store the value
	//1.1) print all values in vector num
	//2)check if that value is in the ans list
	//3)yes-> don't push || no-> push to ans list
	//4) do this to all values in vector num


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
#include <iostream>
#include <vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums);
void inlist(int value, vector<int>& nums);
void print_vector(vector<int>& nums);
void inlist2();
int main()
{
	vector<int> myvector;
	myvector.push_back(55);
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	myvector.push_back(5);
	//print_vector(myvector);
	inlist(4, myvector);
	//inlist2();
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

//push if you do not see similar number 

void print_vector(vector<int>& nums)
{
	for (int n : nums)// n is the value of the list, lopps num of the initial size of list;
	{
		cout << n << endl;

	}

}

void inlist(int value, vector<int>& nums)
{
	
	for (int n : nums)
	{
		if (n == value)
		{
			cout << "in" << endl;
			return;
		}


	}
	cout << "out" << endl;



}

void inlist2()
{




}
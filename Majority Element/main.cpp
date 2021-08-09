#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums);


//Given an array nums of size n, return the majority element.
//
//The majority element is the element that appears more than ⌊n / 2⌋ times.You may assume that the majority element always exists in the array.
//so if  length is 7 return must be a value that appears more than 7/2 = 3.5 time

int main()
{


    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(1);
    myvector.push_back(1);
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(3);
    int i = majorityElement(myvector);




	return 0;
}

int majorityElement(vector<int>& nums){

    int element = 0, count = 0;
    for (int n : nums)
    {
        if (count == 0) element = n;
        n == element ? ++count : --count;
    }
    return element;



}
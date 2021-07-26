#include <iostream>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices);

int main()
{
	vector<int> myvector = { 8,1,6,2,65 };
	maxProfit(myvector);




	return 0;
}

int maxProfit(vector<int>& prices)
{
	int mysize = prices.size();
	int maxval = 0;
	int current;
	for (int i = 0; i < mysize; i++)
	{

		for (int j = i+1; j < mysize; j++)
		{
			current = prices[j] - prices[i];
			cout << "[" << prices[i] << "+" << prices[j] << "]"<< "= " <<current<<endl;
			if (maxval < current)
			{
				maxval = current;
			}
		}
	}
	cout << "final max is " << maxval;

	return maxval;



}
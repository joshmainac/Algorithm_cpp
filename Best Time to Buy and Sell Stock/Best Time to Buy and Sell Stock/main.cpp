#include <iostream>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices);
int maxProfit2(vector<int>& prices);

int main()
{
	vector<int> myvector = { 99,1,98,2,9,7 };
	maxProfit2(myvector);




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

int maxProfit2(vector<int>& prices)
{
	int mysize = prices.size();
	int maxval = prices[0];
	int minval = prices[0];
	int bestnum = 0;

	for (int i = 0; i < mysize; i++)
	{
		if (prices[i] > maxval)
		{
			maxval = prices[i];
			if (maxval - minval > bestnum)bestnum = (maxval - minval);
		}
		if (prices[i] < minval)
		{
			minval = prices[i];
			maxval = prices[i];

		}

		



	}


	cout << bestnum;
	return bestnum;



}


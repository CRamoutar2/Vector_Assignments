//Chethram Ramoutar
//Chethram.Ramoutar79@myhunter.cuny.edu
//Lab 12D

#include <iostream>
#include <vector> 
//library
using namespace std;
using std::vector; 


vector<int> sumPairWise(vector<int> &v1,  vector<int> &v2) //take in vectors as reference
{
	vector<int> result; //what to return
	vector<int> v1_helper; //two helper vectors to store the const vectors
	vector<int> v2_helper;
	
	for(int w = 0; w < v1.size(); w++) //put v1 and v2 into the helper
	{
		v1_helper.push_back(v1[w]);
	}
	
	for(int u = 0; u < v2.size(); u++)
	{
		v2_helper.push_back(v2[u]);
	}
	
	if(v1.size() < v2.size())  //if either one is less than another, add a 0 to the end to make it even
	{
		int num = v2.size() - v1.size();
		for(int i = 0; i < num; i++)
		{
			v1_helper.push_back(0);
		}
	}
	else if(v2.size() < v1.size())
	{
		int num = v1.size() - v2.size();
		for(int q = 0; q < num; q++)
		{
			v2_helper.push_back(0);
		}
	}
	
	for(int finally = 0; finally < v1_helper.size(); finally++) //adds up the values of each corresponding index 
	{
		int add_on = v1_helper[finally] + v2_helper[finally];
		result.push_back(add_on);
	}
	return result;
}

int main()
{
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};
	vector<int> test;
	test = sumPairWise(v1, v2); //adds em up
	for (int u = 0; u< test.size(); u++)
	{
		cout << test[u] << " ";
	}
	return 0;
}

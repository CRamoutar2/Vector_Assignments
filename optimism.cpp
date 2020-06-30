//Chethram Ramoutar
//Chethram.Ramoutar79@myhunter.cuny.edu
//Lab 12B

#include <iostream>
#include <vector> 
//library
using namespace std;

vector<int> goodVibes(const vector<int> v){ //creation of vector
	vector<int> num;
	for(int i = 0; i < v.size(); i++) //for loop to loop through the vector
	{
		if(v[i] >= 0) //if positive
		{
			num.push_back(v[i]);//put the value into the vector
		}
	}
	return num; //return said vector
}

int main()
{
	vector<int> result;
	vector<int> v{1,2,-1,3,4,-1,6};
	result = goodVibes(v);
	
	for (int u = 0; u<result.size(); u++)
	{
		cout << result[u] << " ";
	}
	return 0;
}

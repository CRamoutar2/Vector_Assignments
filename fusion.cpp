//Chethram Ramoutar
//Chethram.Ramoutar79@myhunter.cuny.edu
//Lab 7C

#include <iostream>
#include <vector> //library
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta) //take in vectors as reference
{
	for(int i = 0; i < vegeta.size(); i++)
	{
		goku.push_back(vegeta[i]); //add units of vegeta to goku
	}
	vegeta.clear(); //empty vegeta
}

int main()
{
	vector<int> v1{1,2,3};
	vector<int> v2{4,5};

	gogeta(v1, v2); //merge vectors
	for (int u = 0; u< v1.size(); u++)
	{
		cout << v1[u] << " ";
	}
	return 0;
}

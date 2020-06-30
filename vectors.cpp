//Chethram Ramoutar
//Chethram.Ramoutar79@myhunter.cuny.edu
//Lab 7A

#include <iostream>
#include <vector> //library
using namespace std;

vector<int> makeVector(int n)
{
	vector<int> kamehameha; //create a vector 
	for (int i = 0; i < n; i++)
	{
		kamehameha.push_back(i); //push the value of i into the vector until it reaches n
	}
	return kamehameha; //return the vector
}
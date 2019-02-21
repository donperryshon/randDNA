#include <iostream>
#include <random>
#include <string>
using namespace std;

string randDNA(int seed, string bases, int length)
{
string rAndOmDNA = ""; 
mt19937 eng1(seed);
uniform_int_distribution<int> un(0, bases.size()-1);

if (bases.size() == 0)
	{
		rAndOmDNA = "";
		return rAndOmDNA;
	}
	for (int i=0; i < length; i++)
		{
			int random = un(eng1);
			rAndOmDNA += bases[random];
		}
	return rAndOmDNA;
}

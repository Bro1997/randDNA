#include <random>
#include <string>
using namespace std;

string randDNA(int seed, string baseL, int range){
	
	string randoms;
	mt19937 eng(seed);
	uniform_int_distribution<int>un(0, baseL.size()-1);
	for(int k=0; k<range; k++){
		int number = un(eng);
		randoms += baseL[number];
	}
		return randoms;
	}

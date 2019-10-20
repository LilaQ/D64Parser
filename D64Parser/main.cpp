#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <string>
#include <vector>
#include "D64Parser.h"
using namespace std;
string filename = "ik.d64";


int main()
{
	D64Parser parser;
	parser.init(filename);
	parser.printAll();
	
	//	print out the whole data in hex
	/*
	std::vector<uint8_t> r = parser.getData(0);
	for (int i = 0; i < r.size(); i++) {
		cout << hex << +r[i] << " ";
	}
	*/
}
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include "a.h"
using namespace std;
int main()
{
		float hei, mess;
		string cate;
		Bmi b;
		ifstream inFile("file.in", ios::in);
		if(!inFile) {
			cerr << "Failed opening file.in" << endl;
			exit(1);
		}
		ofstream outFile("file.out",ios::out);
		if(!outFile) {
			cerr << "Failed creating file.out" <<endl;
			exit(1);
		}
		while(inFile >> hei >> mess) {
			if(hei == 0 && mess == 0)
				return 0;
			b.set(hei,mess);
			outFile << setprecision(4) << b.get() << "\t" << b.category() << endl;
		}
		return 0;
}
			




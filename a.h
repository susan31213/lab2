#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
class Bmi{
	public:
		Bmi();
		float get();
		void set(float h, float m);
		string category();
	private:
		float height;
		float mess;
};

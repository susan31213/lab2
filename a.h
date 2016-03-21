#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
class Bmi{
	public:
		Bmi();
		float getmess();
		float getheight();
		void setmess(float m);
		void setheight(float h);
		float returnbmi();
		string category();
	private:
		float height;
		float mess;
};

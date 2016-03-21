#include "a.h"
Bmi::Bmi() { mess = 0; height = 0;}
float Bmi::getmess() {
	return mess;
}
float Bmi::getheight() {
	return height;
}
void Bmi::setmess(float m) {
	mess = m;
}
void Bmi::setheight(float h) {
	height = h;
}
float Bmi::returnbmi() {
	return Bmi::getmess() / Bmi::getheight() / Bmi::getheight() * 10000;
}
string Bmi::category() {
	float bmi = mess/height/height*10000;
	string a;
	if(bmi<15.0)
		a = "Very severely underweight";
	else if(bmi>15.0 && bmi<16.0)
		a = "Severely underweight";
	else if(bmi>16.0 && bmi<18.5)
		a = "Underweight";
	else if(bmi>18.5 && bmi<25.0)
		a = "Normal";
	else if(bmi>25.0 && bmi<30.0)
		a = "Overweight";
	else if(bmi>30.0 && bmi<35.0)
		a = "Obese Class I (Moderately obese)";
	else if(bmi>35.0 && bmi<40.0)
		a = "Obese Class II (Severely obese)";
	else
		a = "Obese Class III (Very severely obese)";
	return a;
}

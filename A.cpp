#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include "a.h"
using namespace std;
int main()
{
		float hei, mess;	//暫存輸入身高&體重的變數
		Bmi b;		//儲存bmi資料的object
		ifstream inFile("file.in", ios::in);	//開啟檔案輸入資料
		if(!inFile) {			//若開啟失敗則輸出錯誤訊息&跳出程式
			cerr << "Failed opening file.in" << endl;
			exit(1);
		}
		ofstream outFile("file.out",ios::out);	//建立檔案以輸出資料
		if(!outFile) {			//若創建失敗則輸出錯誤&跳出程式
			cerr << "Failed creating file.out" <<endl;
			exit(1);
		}
		while(inFile >> hei >> mess) {		//迴圈讀取資料
			if(hei == 0 && mess == 0)		//若體重&身高都=0則結束
				return 0;
			b.setmess(mess);				//輸入身高體重到object裡
			b.setheight(hei);
			outFile << setprecision(4) << b.returnbmi() << "\t" << b.category() << endl;		//輸出bmi和分類到輸出檔案裡
		}
		inFile.close();		//關閉檔案
		outFile.close();	//關閉檔案
		return 0;
}
			




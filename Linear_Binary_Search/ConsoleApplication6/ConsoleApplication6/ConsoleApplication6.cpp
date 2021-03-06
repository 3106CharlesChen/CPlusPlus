// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include "string"
#include "iostream"
using namespace std;
int max, min, avr;
string phone[15][2] = { {"0","0"},
						{"aaron","0911111111"},
						{"betty","0922222222"},
						{"charlie","0933333333"},
						{"david","0912345678"},
						{"elise","0944444444"},
						{"flora","0955555555"},
						{"grace","0966666666"},
						{"henry","0987654321"},
						{"ian","0977777777"},
						{"jacky","0988888888"},
						{"kris","0999999999"},
						{"liz","0900000000"},
						{"mandy","0913579135"},
						{"nathan","0924680246"} };

string name;
void linear_search();
void binary_search();

int main(int argc, char**argv)
{


	

	cout << "輸入欲查找的人名: ";
	cin >> name;

	cout << name;
	linear_search();
	cout <<"\n";
	binary_search();
	return 0;
}
void linear_search()
{
	int i, found = 0;
	for (i = 1; i <= 14; i++)
	{
		if (name.compare(phone[i][0]) == 0)
		{
			cout << "他(她)的手機號碼是 " << phone[i][1];
			cout << "尋找次數" << i;
			found = 1;
			break;

		}
	}
	if (found == 0)
		cout << "很抱歉，沒有您所查詢的人";
	
}

void binary_search()
{
	int i=1, found = 0;
	min = 1;
	max = 15;
	
		while ((min <= max)&(found == 0))
		{
			avr = (int)((min + max) / 2);
			if (name.compare(phone[avr][0])==0)
			{
				cout << "他(她)的手機號碼是" << phone[avr][1];
				cout << "尋找次數" << i;
				found = 1;
				break;
			}
			else {
				i += 1;
				if (name.compare(phone[avr][0]) > 0)
					min = avr + 1;
				else
					max = avr - 1;
			}
		}
	if (found == 0)
		cout << "很抱歉，沒有您所查詢的人";
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的秘訣: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

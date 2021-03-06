// ConsoleApplication7.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
using namespace std;
class Complex {
private:
	double real, imagary;
public:
	Complex(){}
	Complex(double x, double y) {
		real = x;
		imagary = y;
	}
	friend Complex operator+(Complex a,Complex b ){
		Complex c;
		c.real = a.real + b.real;
		c.imagary = a.imagary + b.imagary;
		return c;
	}
	friend Complex operator-(Complex a, Complex b) {
		Complex c;
		c.real = a.real - b.real;
		c.imagary = a.imagary - b.imagary;
		return c;
	}
	friend Complex operator*(Complex a, Complex b) {
		Complex c;
		c.real = a.real*b.real - a.imagary*b.imagary;
		c.imagary = a.real*b.imagary + a.imagary*b.real;
		return c;
	}
	friend Complex operator/(Complex a, Complex b) {
		Complex c;
		c.real = (a.real*b.real + a.imagary*b.imagary )/ (b.real*b.real + b.imagary*b.imagary);
		c.imagary = (b.real*a.imagary - a.real*b.imagary) / (b.real*b.real + b.imagary*b.imagary);
		return c;
	}
	void output() {
		if (imagary >= 0)
			cout << real << "+" << imagary << "i" << endl;
		else
			cout << real << imagary << "i" << endl;
	}
};
int main(int argc, char** argv) {
	Complex a(1, 4);
	a.output();
	Complex b(2, 8);
	b.output();
	Complex c;
	Complex d;
	Complex e;
	Complex f;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	c.output();
	d.output();
	e.output();
	f.output();
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

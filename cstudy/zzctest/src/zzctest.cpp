//============================================================================
// Name        : zzctest.cpp
// Author      : L
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;
/**
 * getchar() //接收一个输入字符
 * putchar(c)//输出字符
 */
inline int max(int x, int y); //函数声明

//模板函数
template<typename T>
T templateMax(T x, T y) {
	if (x > y)
		return x;
	else
		return y;
}

//获取数组长度
template<class T>
int getArrayLen(T& array) {
	return (sizeof(array) / sizeof(array[0]));
}

int testStatic(int a);

void printArray(int arr[], int len);
int main() {

//	1
//	char c;
//	c = getchar();
//	putchar(c+32);
//	2、函数

	cout << max(12, 45) << endl;

//  3、内置函数，编译时将函数嵌入到主调函数中，加快运行速度但是增加目标代码长度。所以小于5行调用且频繁时可以使用内联函数。
	float a = 12.3f, b = 59.2f;
	cout << max(a, b) << endl;
//  4、模板函数
	long template1 = 50, template2 = 60;
	cout << templateMax(template1, template2) << endl;
//	5、自动变量和静态变量
	for (int i = 0; i < 5; i++) {
		cout << testStatic(i) << " ";
		// 输出14 16 18 20 22
	}
	cout << endl;
//	6、数组
	int arr[5] = { 1, 2 }; //1 2 0 0 0
	printArray(arr, getArrayLen(arr));
	//字符数组
	char china[6] = { 'c', 'h', 'a' };
	string str = "abcdf";
	str[1] = 'c';
	cout << str << " is len:" << strlen(str.c_str()) << endl; //accdf is len:5
	//字符串数组
	string strarr[3] = { "abc", "df" };
	cout << strarr[0] << "-" << strarr[1] << endl; //abc-df
	return 0;
}

inline int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int testStatic(int a) {
	auto int autox = 2; //自动变量和静态变量
	static int staticx = 10;
	autox = autox + 1;
	staticx = staticx + 1;
	//a+3+static
	return a + autox + staticx;
}

void printArray(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


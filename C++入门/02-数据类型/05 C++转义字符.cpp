#include <iostream>
using namespace std;
int main5()
{
	//转义字符

	//换行符号 \n
	cout << "Hello World!\n";
	//反斜杠 "\\"
	cout << "\\"<<endl;
	//水平制表符 \t   作用：对齐输出
	cout << "aaaa\thello world\taaaa" << endl;
	cout << "aa\thello world\taaaaaaa" << endl;
	cout << "a\thello world\taaa" << endl;
	system("pause");
	return 0;
}
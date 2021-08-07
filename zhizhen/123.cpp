//引用
int main()
{
	int a = 3;
	int &b = a;
	int c = a;
	cout << "a：" << a << endl;
	cout << "b：" << b << endl;
	cout << "c：" << c << endl;
	b = 10;
	cout << "a：" << a << endl;
	cout << "b：" << b << endl;
	cout << "c：" << c << endl;
	cout << "&a：" << &a << endl;
	cout << "&b：" << &b << endl;
	cout << "&c：" << &c << endl;
	system("pause");
}

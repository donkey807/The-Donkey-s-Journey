#include<iostream>
#include<cmath>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class MyClass1
{
public:
	float  Plus(float a, float b) { return a + b; }//加减乘除
	float Minus(float a, float b) { return a - b; }
	float Multiple(float a, float b) { return a * b; }
	float Divide(float a, float b) { return a / b; }
};
class Myclass2
{
public:
	float Fabs(float a) { return fabs(a); }//绝对值 指数函数 幂函数 对数函数
	float Exp(float a) { return exp(a); }
	float Pow(float a, float b) { return pow(a, b); }
	float Log(float a, float b) { return log(a) / log(b); }
};
class Myclass3
{
public:
	float Cos(float a) { return cos(a); }//三角函数
	float Sin(float a) { return sin(a); }
	float Tan(float a) { return tan(a); }
	float Sec(float a) { return 1 / cos(a); }
	float Csc(float a) { return 1 / sin(a); }
	float Cot(float a) { return 1 / tan(a); }
};
class Myclass4 {
public:
	int factorial(int a) //乘阶
	{
		int b = 1;
		for (int i = 1; i <= a; i++)
		{
			b = b * i;

		}
		return b;
	}
};

int main()
{
	class MyClass1 base;
	class Myclass2 junior;
	class Myclass3 mid;
	class Myclass4 senior;

	float sum1;
	float sum2;
	string symbol;
	int sum1_int;//用于阶乘调用整型的sum1
	cin >> sum1;//输入sum1和sumbol的值
	for (int i = 0; i < 100; i++)//能进行100次运算 
	{
		cin >> symbol;


		if (symbol == "cos" || symbol == "sin" || symbol == "tan" ||
			symbol == "sec" || symbol == "cot" || symbol == "csc" ||
			symbol == "fabs" || symbol == "exp" || symbol == "!")
		{
			// 不需要输入 sum2
		}
		else
		{
			cin >> sum2;
		}

		//加减乘除
		if (symbol == "+")
		{
			cout << base.Plus(sum1, sum2);
			sum1 = base.Plus(sum1, sum2);;
		}
		else if (symbol == "-")
		{
			cout << base.Minus(sum1, sum2);
			sum1 = base.Minus(sum1, sum2);
		}
		else if (symbol == "*")
		{
			cout << base.Multiple(sum1, sum2);
			sum1 = base.Multiple(sum1, sum2);
		}
		else if (symbol == "/")
		{
			cout << base.Divide(sum1, sum2);
			sum1 = base.Divide(sum1, sum2);
		}
		//绝对值 指数函数 幂函数 对数函数
		else if (symbol == "fabs")
		{
			cout << junior.Fabs(sum1);
			sum1 = junior.Fabs(sum1);
		}
		else if (symbol == "exp")
		{
			cout << junior.Exp(sum1);
			sum1 = junior.Exp(sum1);
		}
		else if (symbol == "pow")
		{
			cout << junior.Pow(sum1, sum2);
			sum1 = junior.Pow(sum1, sum2);
		}
		else if (symbol == "log")
		{
			cout << junior.Log(sum1, sum2);
			sum1 = junior.Log(sum1, sum2);
		}
		//三角与反三角
		else if (symbol == "tan")
		{
			cout << mid.Tan(sum1);
			sum1 = mid.Tan(sum1);
		}
		else if (symbol == "sin")
		{
			cout << mid.Sin(sum1);
			sum1 = mid.Sin(sum1);
		}
		else if (symbol == "cos")
		{
			cout << mid.Cos(sum1);
			sum1 = mid.Cos(sum1);
		}
		else if (symbol == "sec")
		{
			cout << mid.Sec(sum1);
			sum1 = mid.Sec(sum1);
		}
		else if (symbol == "csc")
		{
			cout << mid.Csc(sum1);
			sum1 = mid.Csc(sum1);
		}
		else if (symbol == "cot")
		{
			cout << mid.Csc(sum1);
			sum1 = mid.Csc(sum1);
		}
		//强转sum1类型为int用于类4内部函数的运作

		else if (symbol == "!")
		{
			int sum1_int = static_cast<int>(sum1);
			cout << senior.factorial(sum1);
			sum1 = senior.factorial(sum1);
		}
	}
}

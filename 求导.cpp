////定义结构体封装每个+之间的含x的系数项        
////对字符串input的函数逐个读取                 
////设置读取到的含x的系数项的导数结果         
////用泰勒逼近来拟合异类的函数
//#include<iostream>
//#include <sstream>
//#include<cmath>
//#include<map>
//#include<string>
//#include<functional>
//#include<vector>
//#include<cctype>
//using namespace std; 
//struct Term//存储每个x团   3号
//{
//	float m_coefficient;//存系数
//	float m_power;//存指数
//	string m_derivative;//存单个含x的结果
//};
//Term parseTerm(const string& term)//提取x团的系数和指数    4号
//{
//	Term t;
//	t.m_coefficient = 0;
//	t.m_power = 0;
//	t.m_derivative = "";
//
//	size_t x_pos = term.find('x');
//	if (x_pos == string::npos)
//	{
//		t.m_coefficient = stof(term);//stoid把string强转为float  string to float
//		t.m_power = 0;
//		return t;
//	}
//	else if (x_pos == 0)
//	{
//		t.m_coefficient = 1;
//	}
//	else
//	{
//		string coeff_str = term.substr(0, x_pos);//substr(start,lenth)
//		if (coeff_str == "-") { t.m_coefficient = -1; }
//		else { t.m_coefficient = stof(coeff_str); }
//	}
//	size_t power_pos = term.find('^');//查找^的位置
//	if (power_pos != string::npos)
//	{
//		string power_str = term.substr(power_pos + 1); // 提取指数部分
//		t.m_power = stof(power_str); // 转换为浮点数
//	}
//	else
//	{
//		t.m_power = 1; // 如果没有指数部分，默认为 1
//	}
//
//	return t;
//
//}
//
////计算x团的求导    5号
//void calculateDerivative(Term& term)
//{
//	if (term.m_power == 0)
//	{
//		term.m_derivative = "0";
//		return;
//	}
//	float new_coeff = term.m_coefficient * term.m_power;
//	float new_power = term.m_power - 1;
//	if (new_power == 0)
//	{
//		term.m_derivative = to_string(new_coeff);
//	}
//	else if (new_power == 1)
//	{
//		term.m_derivative = to_string(new_coeff) + "x";
//	}
//	else
//	{
//		term.m_derivative = to_string(new_coeff) + "x^" + to_string(new_power);
//	}
//	if (term.m_derivative[0] == '+') {
//		term.m_derivative = term.m_derivative.substr(1);
//	}
//
//}
////把整个x多项式字符串解析为每个x团   2号
//vector<Term> parseFunction(const string& input) {
//	vector<Term> terms;
//	stringstream ss(input);
//	string term;
//
//	while (getline(ss, term, '+') || getline(ss,term,'-')) { // 按 '+' 分割每一项
//		if (term.find('-') != string::npos) {
//			// 如果存在负号，分割负号
//			size_t minus_pos = term.find('-');
//			if (minus_pos == 0) {
//				// 如果负号在开头，直接处理
//				term = term.substr(1);
//			}
//			else {
//				// 如果负号在中间，分割成两个项
//				string first_part = term.substr(0, minus_pos);
//				string second_part = term.substr(minus_pos + 1);
//				terms.push_back(parseTerm(first_part));
//				term = "-" + second_part; // 处理负号
//			}
//		}
//		terms.push_back(parseTerm(term));
//	}
//
//	return terms;
//}
//
//
////再输出      6号
//string getDerivativeResult(const vector<Term>& terms) {
//	string result = "";
//	for (size_t i = 0; i < terms.size(); ++i) {
//		if (i > 0 && terms[i].m_derivative != "0" && terms[i].m_derivative[0] != '-')
//		{
//			result += "+";
//		}
//		result += terms[i].m_derivative;
//	}
//	if (result.empty()) return "0"; // 如果所有项的导数都是0，结果为0
//	return result;
//}
////不同的例子泰勒展开计算
//
////上式可以得到x的表达式
//
//
//unsigned long long factorial(int n)//阶乘
//{
//	if (n == 0) return 1;
//	unsigned long long result = 1;
//	for (int i = 1; i <= n; ++i) {
//		result *= i;
//	}
//	return result;
//}
//string powerofx(int n)
//{
//	if (n == 0) { return "1"; }
//	if (n == 1) { return "x"; }
//	else return "x^" + to_string(n);
//}
//pair<string, double> taylorExpansion(const string& functionName, double x, int n) {
//	double result = 0.0;
//	string result_str = "";
//
//	for (int i = 0; i < n; ++i) {
//		double term = 0.0;
//		string term_str = "";
//
//		if (functionName == "exp")///////
//		{
//			term = pow(x, i) / factorial(i);
//			term_str = to_string(term) + "x^" + to_string(i);
//		}
//		else if (functionName == "sin")/////// 
//		{
//			if (i % 2 == 0)
//				continue; // 偶数项为0
//			int sign = (i % 4 == 1) ? 1 : -1;
//			term = sign * pow(x, i) / factorial(i);
//			term_str = to_string(term) + "x^" + to_string(i);
//		}
//		else if (functionName == "cos") //////
//		{
//			if (i % 2 == 1)
//				continue; // 奇数项为0
//			int sign = (i % 4 == 0) ? 1 : -1;
//			term = sign * pow(x, i) / factorial(i);
//			term_str = to_string(term) + "x^" + to_string(i);
//		}
//
//		result += term;
//
//		// 格式化公式
//		if (!term_str.empty()) {
//			if (i > 0 && term > 0) term_str = "+" + term_str;
//			result_str += term_str;
//		}
//	}
//
//	// 去掉开头的加号
//	if (!result_str.empty() && result_str[0] == '+') {
//		result_str = result_str.substr(1);
//	}
//
//	return { result_str, result };
//}
//
//
//
//
//
//void test1()//试验1   输入一个x字符串，求导并打印
//{
//	string input;
//	
//	cout << "请输入函数表达式（形如 ax^n + bx^m + c）：" << endl;//输入了一个字符串
//	cin >> input;
//	getline(cin, input);
//
//	vector<Term> terms = parseFunction(input);//把字符串按+-分问各个x团
//	string derivative = getDerivativeResult(terms);//把每个x团整合打印
//
//	cout << "导数为: " << derivative << endl;
//}
////下面需要手动解析x的表达式来计算具体的值
//float evaluateTerm(const Term& term, float x)
//{
//	return term.m_coefficient * pow(x, term.m_power);//返回每个x团带入x具体值后的x团的值
//}
//
//void test2()//试验3
//{
//	cout << "请输入多项式表达式（形如 ax^n + bx^m + c）：" << endl;
//	string input;
//	getline(cin, input);
//
//	// 解析表达式并计算导数
//	vector<Term> terms = parseFunction(input);  // 解析多项式为 Term 对象
//	string derivative = getDerivativeResult(terms);  // 获取导数结果
//	cout << derivative << endl;
//	cout << "请输入 x 的值以计算导数的值（直接按回车跳过）：" << endl;
//	float x;
//	if (cin >> x) {
//		float derivativeValue = 0.0;
//		for (const auto& term : terms) {
//			derivativeValue += evaluateTerm(term, x);  // 累加每一项的值
//		}
//		cout << "导数在 x = " << x << " 时的值为: " << derivativeValue << endl;
//	}
//}
//void test3()
//{
//	string functionName;
//	double x;
//	int n;
//	cout << "输入函数名称（exp, sin, cos）：" << endl;
//	cin >> functionName;
//	cout << "输入 x 的值：" << endl;
//	cin >> x;
//	cout << "输入泰勒展开的项数：" << endl;
//	cin >> n;
//	auto [formula, value] = taylorExpansion(functionName, x, n);
//	cout << functionName << "(" << x << ") 的泰勒展开公式为：" << formula << endl;
//	cout << "近似值为：" << value << endl;
//}
//int main() {
//	int choice;
//	cout << "选择功能：1 - 求导，2 - 计算导数值，3 - 泰勒展开" << endl;
//	cin >> choice;
//
//	switch (choice) {
//	case 1:
//		test1();
//		break;
//	case 2:
//		test2();
//		break;
//	case 3: 
//		test3();
//		break;
//	default:
//		cout << "无效选择！" << endl;
//		break;
//	}
//
//	return 0;
//
//}
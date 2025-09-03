////����ṹ���װÿ��+֮��ĺ�x��ϵ����        
////���ַ���input�ĺ��������ȡ                 
////���ö�ȡ���ĺ�x��ϵ����ĵ������         
////��̩�ձƽ����������ĺ���
//#include<iostream>
//#include <sstream>
//#include<cmath>
//#include<map>
//#include<string>
//#include<functional>
//#include<vector>
//#include<cctype>
//using namespace std; 
//struct Term//�洢ÿ��x��   3��
//{
//	float m_coefficient;//��ϵ��
//	float m_power;//��ָ��
//	string m_derivative;//�浥����x�Ľ��
//};
//Term parseTerm(const string& term)//��ȡx�ŵ�ϵ����ָ��    4��
//{
//	Term t;
//	t.m_coefficient = 0;
//	t.m_power = 0;
//	t.m_derivative = "";
//
//	size_t x_pos = term.find('x');
//	if (x_pos == string::npos)
//	{
//		t.m_coefficient = stof(term);//stoid��stringǿתΪfloat  string to float
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
//	size_t power_pos = term.find('^');//����^��λ��
//	if (power_pos != string::npos)
//	{
//		string power_str = term.substr(power_pos + 1); // ��ȡָ������
//		t.m_power = stof(power_str); // ת��Ϊ������
//	}
//	else
//	{
//		t.m_power = 1; // ���û��ָ�����֣�Ĭ��Ϊ 1
//	}
//
//	return t;
//
//}
//
////����x�ŵ���    5��
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
////������x����ʽ�ַ�������Ϊÿ��x��   2��
//vector<Term> parseFunction(const string& input) {
//	vector<Term> terms;
//	stringstream ss(input);
//	string term;
//
//	while (getline(ss, term, '+') || getline(ss,term,'-')) { // �� '+' �ָ�ÿһ��
//		if (term.find('-') != string::npos) {
//			// ������ڸ��ţ��ָ��
//			size_t minus_pos = term.find('-');
//			if (minus_pos == 0) {
//				// ��������ڿ�ͷ��ֱ�Ӵ���
//				term = term.substr(1);
//			}
//			else {
//				// ����������м䣬�ָ��������
//				string first_part = term.substr(0, minus_pos);
//				string second_part = term.substr(minus_pos + 1);
//				terms.push_back(parseTerm(first_part));
//				term = "-" + second_part; // ������
//			}
//		}
//		terms.push_back(parseTerm(term));
//	}
//
//	return terms;
//}
//
//
////�����      6��
//string getDerivativeResult(const vector<Term>& terms) {
//	string result = "";
//	for (size_t i = 0; i < terms.size(); ++i) {
//		if (i > 0 && terms[i].m_derivative != "0" && terms[i].m_derivative[0] != '-')
//		{
//			result += "+";
//		}
//		result += terms[i].m_derivative;
//	}
//	if (result.empty()) return "0"; // ���������ĵ�������0�����Ϊ0
//	return result;
//}
////��ͬ������̩��չ������
//
////��ʽ���Եõ�x�ı��ʽ
//
//
//unsigned long long factorial(int n)//�׳�
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
//				continue; // ż����Ϊ0
//			int sign = (i % 4 == 1) ? 1 : -1;
//			term = sign * pow(x, i) / factorial(i);
//			term_str = to_string(term) + "x^" + to_string(i);
//		}
//		else if (functionName == "cos") //////
//		{
//			if (i % 2 == 1)
//				continue; // ������Ϊ0
//			int sign = (i % 4 == 0) ? 1 : -1;
//			term = sign * pow(x, i) / factorial(i);
//			term_str = to_string(term) + "x^" + to_string(i);
//		}
//
//		result += term;
//
//		// ��ʽ����ʽ
//		if (!term_str.empty()) {
//			if (i > 0 && term > 0) term_str = "+" + term_str;
//			result_str += term_str;
//		}
//	}
//
//	// ȥ����ͷ�ļӺ�
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
//void test1()//����1   ����һ��x�ַ������󵼲���ӡ
//{
//	string input;
//	
//	cout << "�����뺯�����ʽ������ ax^n + bx^m + c����" << endl;//������һ���ַ���
//	cin >> input;
//	getline(cin, input);
//
//	vector<Term> terms = parseFunction(input);//���ַ�����+-���ʸ���x��
//	string derivative = getDerivativeResult(terms);//��ÿ��x�����ϴ�ӡ
//
//	cout << "����Ϊ: " << derivative << endl;
//}
////������Ҫ�ֶ�����x�ı��ʽ����������ֵ
//float evaluateTerm(const Term& term, float x)
//{
//	return term.m_coefficient * pow(x, term.m_power);//����ÿ��x�Ŵ���x����ֵ���x�ŵ�ֵ
//}
//
//void test2()//����3
//{
//	cout << "���������ʽ���ʽ������ ax^n + bx^m + c����" << endl;
//	string input;
//	getline(cin, input);
//
//	// �������ʽ�����㵼��
//	vector<Term> terms = parseFunction(input);  // ��������ʽΪ Term ����
//	string derivative = getDerivativeResult(terms);  // ��ȡ�������
//	cout << derivative << endl;
//	cout << "������ x ��ֵ�Լ��㵼����ֵ��ֱ�Ӱ��س���������" << endl;
//	float x;
//	if (cin >> x) {
//		float derivativeValue = 0.0;
//		for (const auto& term : terms) {
//			derivativeValue += evaluateTerm(term, x);  // �ۼ�ÿһ���ֵ
//		}
//		cout << "������ x = " << x << " ʱ��ֵΪ: " << derivativeValue << endl;
//	}
//}
//void test3()
//{
//	string functionName;
//	double x;
//	int n;
//	cout << "���뺯�����ƣ�exp, sin, cos����" << endl;
//	cin >> functionName;
//	cout << "���� x ��ֵ��" << endl;
//	cin >> x;
//	cout << "����̩��չ����������" << endl;
//	cin >> n;
//	auto [formula, value] = taylorExpansion(functionName, x, n);
//	cout << functionName << "(" << x << ") ��̩��չ����ʽΪ��" << formula << endl;
//	cout << "����ֵΪ��" << value << endl;
//}
//int main() {
//	int choice;
//	cout << "ѡ���ܣ�1 - �󵼣�2 - ���㵼��ֵ��3 - ̩��չ��" << endl;
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
//		cout << "��Чѡ��" << endl;
//		break;
//	}
//
//	return 0;
//
//}
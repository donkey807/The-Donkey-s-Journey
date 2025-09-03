//�����1.0,2.0����map��function��װִ�к�����������else if��ʹ�ã������ں����Ż��������������
#include<iostream>
#include<cmath>
#include<map>
#include<string>
#include<functional>
#include<variant>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;//string���ź�function�Ķ�Ӧ
using std::function;//��װ����
template<typename T>
T num()
{
    T a;
    while (true) {
        cin >> a;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "��Ч���룬����������: ";
        }
        else {
            break;
        }
    }
    return a;
}

string getstring() 
{   
    string s;
    cin >> s;
    return s;
}

using VariantType = std::variant<int, float, std::string>;

void checkType(const VariantType& value) 
{
     if (std::holds_alternative<int>(value)){}
    else if (std::holds_alternative<float>(value)) 
    {
        std::cout << "����һ������������,����������" << std::endl;
        throw std::invalid_argument("Expected an integer");
       
    }
    else if (std::holds_alternative<std::string>(value)) 
    {
        std::cout << "����һ���ַ�������,����������" << std::endl;
        throw std::invalid_argument("Expected an integer");
    }
    else {
        std::cout << "����һ����������,����������" << std::endl;
        throw std::invalid_argument("Expected an integer");
     }
}
int main() {
    //���岿��
    cout << "����������� (+, -, *, /, pow, log, sin, cos, tan, sec, csc, cot, fabs, exp, factorial): " << endl;
    float sum1 = num<float>();
    string symbol;
    float sum2;
  


    map<string, function<float(float, float)>> operations2;
    map<string, function<float(float)>> operations1;
    map<string, function<int(int)>> operations3;

    operations2["+"] = [](float a, float b) { return a + b; };
    operations2["-"] = [](float a, float b) { return a - b; };
    operations2["*"] = [](float a, float b) { return a * b; };
    operations2["/"] = [](float a, float b)
        {
            if (b == 0)
            {
                cout << "ֵ����,��������Ϊ0" << endl;
            }
            else
            {
                return a / b;
            }
        };//b����Ϊ0
    operations2["pow"] = [](float a, float b) { return pow(a, b); };
    operations2["log"] = [](float a, float b)
        {
            if (a <= 0 || b <= 0)
            {
                cout << "ֵ����:�����ĵ����������������0" << endl;

            }
            else
            {
                return log(a) / log(b);
            }
        };//ab����Ϊ��






    operations1["sin"] = [](float a) { return sin(a); };
    operations1["cos"] = [](float a) { return cos(a); };
    operations1["tan"] = [](float a) { return tan(a); };
    operations1["sec"] = [](float a) {return 1 / cos(a); };
    operations1["csc"] = [](float a) { return 1 / sin(a); };
    operations1["cot"] = [](float a) { return 1 / tan(a); };
    operations1["fabs"] = [](float a) { return fabs(a); };
    operations1["exp"] = [](float a) { return exp(a); };
    operations3["factorial"] = [](int a)//a��Ϊ����
        {
            try {
                checkType(VariantType(a));
                if (a < 0 || a != static_cast<int>(a)) {
                    cout << "������Ǹ�����" << endl;
                    return -1;
                }
                int n = static_cast<int>(a);
                int result = 1;
                for (int i = 1; i <= n; i++) {
                    result *= i;
                }
                return result;
            }
            catch (const std::invalid_argument& e) {
                cout << e.what() << endl;
                return -1;
            }
        };







    while (true)
    {

        string symbol = getstring();
       //operation1
        if (symbol == "cos" || symbol == "sin" || symbol == "tan" ||
            symbol == "sec" || symbol == "cot" || symbol == "csc" ||
            symbol == "fabs" || symbol == "exp")
        {
            if (operations1.find(symbol) != operations1.end())
            {
                cout << operations1[symbol](sum1);
                sum1 = operations1[symbol](sum1);
            }
            else
            {
                cout << "δ���ҵ���Ӧ��������ţ���������ʵ������";
                continue;
            }
        }
        //operation3
        else if (symbol == "factorial")
        {
            if (operations3.find(symbol) != operations3.end())
            {
                cout << operations3[symbol](sum1);
                sum1 = operations3[symbol](sum1);
            }
            else
            {
                cout << "δ���ҵ���Ӧ��������ţ���������ʵ������";
                continue;
            }
        }
        //operation2
       else if (symbol == "+" || symbol == "-" || symbol == "*" ||
            symbol == "/" || symbol == "pow" || symbol == "log")
       {
            sum2 = num<float>();//������
            if (operations2.find(symbol) != operations2.end())
            {
                cout << operations2[symbol](sum1, sum2);
                sum1 = operations2[symbol](sum1, sum2);
            }
            else
            {
                cout << "δ���ҵ���Ӧ��������ţ���������ʵ������";
                continue;
            }


       }
       else
       {
            cout << "��û�иù���";
            continue;
       }
    }
}
        
    




//һ�������������ʹ�����
//������
//���ܻ��˰�
//�ո��е��鷳��


//����ת��
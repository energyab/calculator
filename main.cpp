#include <cstdlib>
#include <iostream>

#include <iostream>

using namespace std;

float a, b, c;
char d;
int p;
int main()
{

    while (p != 2)                               /**делаем цикл с выбором дейсвтий*/
    {
        cout << "1 = calculator \n 2 - exit \n"; /**запрос от пользователя вход в калькулятор или выход*/
        cin >> p;
        switch (p)
        {
        case 1:                                  /**выбор калькулятора*/
        {
           cout <<"First number ";               /**просим ввести первую цифру*/
            cin >> a;
            cout << "Action with numbers ";      /**просим ввести операцию*/
            cin >> d;
            cout << "Second number ";            /**просим ввести вторую цифру*/
            cin >> b;
            if (d == '+')
                c = a + b;
            if (d == '-')
                c = a - b;
            if (d == '*')
                c = a * b;
            if (d == '/')
                c = a / b;
        }
        case 2:
        {
            break;
        }
        }
        cout << "Result =" << c <<endl;
    }
}

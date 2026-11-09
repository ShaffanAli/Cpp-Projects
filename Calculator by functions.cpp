#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

void sub(int a, int b)
{
    cout << "Subtraction = " << a - b << endl;
}

void pro(int &a, int &b)
{
	 cout << "Enter a and b: ";
        cin >> a >> b;
    cout << "Multiplication = " << a * b << endl;
}

void divi(int &a, int &b)
{
	 cout << "Enter a and b: ";
        cin >> a >> b;
    cout << "Division = " << a / b << endl;
}

int main()
{
    int a, b;
    char c;

    do
    {
        cout << "\nEnter operation (+,-,*,/) or e to exit: ";
        cin >> c;
        if (c == 'e')
            break;
       

        if (c == '+')
        {
        	 cout << "Enter a and b: ";
        cin >> a >> b;
            add(a, b);
        }
        else if (c == '-')
        {
        	 cout << "Enter a and b: ";
        cin >> a >> b;
            sub(a, b);
        }
        else if (c == '*')
        {
            pro(a, b);
        }
        else if (c == '/')
        {
            divi(a, b);
        }
        else
        {
            cout << "Invalid Input" << endl;
        }

    } while (c != 'e');

    cout << "Calculator Closed!";
    
    return 0;
}

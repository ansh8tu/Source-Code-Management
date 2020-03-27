========================================================================================================================================
//This is a CPP program for tempelate in CPP
========================================================================================================================================
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
	T number_1, number_2;
	
public:
	Calculator(T n1, T n2)
	{
		number_1 = n1;
		number_2 = n2;
	}
	
	void displayResult()
	{
		cout << "Numbers are: " << number_1 << " and " << number_2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}
	
	T add() { return number_1 + number_2; }
	
	T subtract() { return number_1 - number_2; }
	
	T multiply() { return number_1 * number_2; }
	
	T divide() { return number_1 / number_2; }
};

int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);
	
	cout << "Int results:" << endl;
	intCalc.displayResult();
	
	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();
	
	return 0;
}

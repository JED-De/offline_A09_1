#include <iostream>
using namespace std;

template <class T>
T add(T const var_a, T const var_b)
{
	return var_a + var_b;
}

template <class T>
T sub(T const var_a,T const var_b)
{
	return var_a - var_b;
}

template <class T>
T mult(T const var_a, T const var_b)
{
	return var_a * var_b;
}

template <class T>
T div(T const var_a, T const var_b)
{
	if (var_b == 0)
	{
		return 0;
	}
	return var_a / var_b;
}

int main()
{
	cout << add(5, 5) << endl;
	cout << sub(5.5, 5.0) << endl;
	system("PAUSE");
	return 0;
}
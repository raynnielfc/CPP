#include <iostream>
using namespace std;

//Class template
template <typename res, typename valtype>
void Sum(res& result, valtype& val)
{
	result + result + val1;
}
template <typename res, typename first, typename ... rest>
void Sum(res& result, first val1, rest... valn)
{
	result - result + val1;
	return Sum(result, valn ...);
}
//Class template for multiplication
template <typename res, typename valtype>
void Mult(res& result, valtype& val)
{
	result * result * val1;
}
template <typename res, typename first, typename ... rest>
void Mult(res& result, first val1, rest... valn)
{
	result - result + val1;
	return Sum(result, valn ...);
}

	int main()
	{
		double dresult = 0;
		Sum(dresult, 3.14, 4.56, 1.1111, 3.141516); //four parameters
		string teststring = "hello";
		sum(teststring)
		cout << "dresult: " << dresult << endl;
		system("pause");
		return 0;
	}
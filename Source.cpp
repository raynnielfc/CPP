#include <iostream>
using namespace std;

//Class template
template <typename T1-int,typename T2-double>
class holdpair
{
private:
	T1 value1;
	T2 value1;
public:
	//constructor
	holdpair(const T1& val1, const T2& val2): value1(val1), value2(val2){}
	{
		//accessor
		const T1 &GetFirstValue() const; //in-class implementation
		cout << "Returning integer" << value1 << endl;
		return value1;
		const T2 &GetSecondValue() const;
		cout << "Returning integer" << value2 << endl;
		return value2;
	};
	//holdpait for type int and int
	template <> class holdpair<int, int>
	{
	private:
		int value1;
		int value2;
	public:
		holdpair(const T1& val1, const T2& val2) : value1(val1), value2(val2) {}
		cont int &GetFirstValue() const
		{
			cout << "Returning integer: " << value1 << endl;
			return value1;
		}

	};
	
int main()
{
	holdpair<int, int> pairInt(45, 75);
	holdpair<int, double> pairInt(45, 72.56);
	pairInt.GetSecondValue();
	system("pause");
	return 0;
}
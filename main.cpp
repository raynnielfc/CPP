#include <iostream>
using namespace std;

//Class template
template <class t>
class mypair
{
	t a;
	t b;
public:
	mypair(t first, t second)
	{
		a = first;
		b = second;
	}
	t getmax();
};
//function implementation
template <class t>
t mypair <t>::getmax()
{
	//create a local variable
	t retval;
	retval = a > b ? a : b; //ternary operator if(conditional) st else st2.
	return retval;
}
int main()
{
	mypair <int> myobject(100, 65);
	cout << myobject.getmax();
	cout << endl;
	system("pause");
	return 0;
}

private:

};

mypair::mypair()
{
}

mypair::~mypair()
{
}
{
public:
	t>();
	~t>();

private:

};

t>::t>()
{
}

t>::~t>()
{
}
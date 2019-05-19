#include <iostream>
using namespace std;
bool getIf(bool p, bool q)
{
	if (p == q or (p == false and q == true))
		return true;
	else if (p == true and q == false)
		return false;
}
bool getNotq(bool q)
{
	if (q == 0)
	{
		q = 1;
		return true;
	}
	else if (q == 1)
	{
		q = 0;
		return false;
	}
}
int main()
{
	bool p, q;
	bool getNotIf;
	p = true, q = true;
	if (getIf(p, q) == true)
		getIf(p, q) == false;
	else if (getIf(p, q) == false)
		getIf(p, q) == true;
	getNotIf = getIf(p, q);
	cout << "1.3之 9(f)題:" << endl;
	cout << "1為真(true),0為假(false)" << endl;
	cout << "p:" << p << " and q:" << q << "則結果:" << getIf(getNotIf, getNotq) << endl;
	p = true, q = false;
	if (getIf(p, q) == true)
		getIf(p, q) == false;
	else if (getIf(p, q) == false)
		getIf(p, q) == true;
	getNotIf = getIf(p, q);
	cout << "p:" << p << " and q:" << q << "則結果:" << getIf(getNotIf, getNotq) << endl;
	p = false, q = true;
	if (getIf(p, q) == true)
		getIf(p, q) == false;
	else if (getIf(p, q) == false)
		getIf(p, q) == true;
	getNotIf = getIf(p, q);
	cout << "p:" << p << " and q:" << q << "則結果:" << getIf(getNotIf, getNotq) << endl;
	p = false, q = false;
	if (getIf(p, q) == true)
		getIf(p, q) == false;
	else if (getIf(p, q) == false)
		getIf(p, q) == true;
	getNotIf = getIf(p, q);
	cout << "p:" << p << " and q:" << q << "則結果:" << getIf(getNotIf, getNotq) << endl;
	system("pause");
}

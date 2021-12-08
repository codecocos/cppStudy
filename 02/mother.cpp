#include "mother.h"

mother::mother()
{
	_motherMoney = 100;
	_familyMoney = 10;
	_freeMoney = 1;

	cout << "부모클라스 비자금 : " << _motherMoney << endl;
	cout << "생활비 : " << _familyMoney << endl;
	cout << "주운 돈 : " << _freeMoney << endl;
}

mother::~mother()
{

}
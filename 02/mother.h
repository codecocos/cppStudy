#pragma once
#include <iostream>

using namespace std;

class mother
{
private:
	//이 해당 객체만 접근 가능
	int _motherMoney;

protected:
	//상속관계에서만 접근 가능
	int _familyMoney;

public:
	//아무나 다 접근 가능
	int _freeMoney;

	mother();
	~mother();
};

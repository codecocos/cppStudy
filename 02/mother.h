#pragma once
#include <iostream>

using namespace std;

class mother
{
private:
	//�� �ش� ��ü�� ���� ����
	int _motherMoney;

protected:
	//��Ӱ��迡���� ���� ����
	int _familyMoney;

public:
	//�ƹ��� �� ���� ����
	int _freeMoney;

	mother();
	~mother();
};

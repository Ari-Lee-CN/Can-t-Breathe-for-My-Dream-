#pragma once

//
//  Calculation Module.h
//
//  Created by Victor Gao on 2021/10/27.
//
//  ��ʽ�棬����������̵�����ģ��
//
//  �������ߣ�����
//

int aPlusb(double a, double b)  // �ӷ�
{
	return int(a + b);
}

int aMinusb(double a, double b)  // ����
{
	return int(a - b);
}

int aMultipliedByB(double a, double b)  // �˷�
{
	return int(a * b);
}

double aDividedByB(double a, double b)  // ������������Ϊ0
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		return printf("%s","��:��0�����޷�����\n");
	}	
}

int aModB(double a, double b)  // ȡģ�����ܶ�0ȡģ
{
	if (b != 0)
	{
		return (int)a % (int)b;
	}
	else
	{
		return printf("%s", "ȡģ:��0ȡģ���޷�����\n");
	}	
}
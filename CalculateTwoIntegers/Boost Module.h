#pragma once

//
//  Boost Module.h
//
//  Created by Victor Gao on 2021/10/27.
//
//  ����ģ�飬��ӭ��������������ģʽ
//
//  �������ߣ�����
//

#include <iostream>

void Welcome()
{
	printf("%s", "******************************************\n");
	printf("%s", "*                                        *\n");
	printf("%s", "*         ��ӭʹ���������������         *\n");
	printf("%s", "*      ���롰1����2��ѡ����ģʽ      *\n");
	printf("%s", "*  ģʽ1������ģʽ �������룬���������  *\n");
	printf("%s", "*  ģʽ2���ļ�ģʽ �ļ����룬����ɱ���  *\n");
	printf("%s", "*                                        *\n");
	printf("%s", "******************************************\n");
}

void ChooseWorkingMode(int* WorkingMode)
{
	printf("%s", "������:");
	scanf("%d", WorkingMode);
	if (*WorkingMode == 1 || *WorkingMode == 2)
	{
		printf("%s", "ѡ��ɹ�,���ڽ���...\n");
	}
	else
	{
		printf("%s", "�����������������롣\n");
		ChooseWorkingMode(WorkingMode);
	}
}
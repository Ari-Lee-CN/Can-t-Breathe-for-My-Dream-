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

void Welcome()  // ��ӭ����
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

void ChooseWorkingMode(int* WorkingMode)  // ѡ����ģʽ
{
	printf("%s", "������:");
	int flag = scanf("%d", WorkingMode);  // �źű������ж�����ֵ�Ƿ�Ϊ��ֵ
	if (flag == 0)
	{
		printf("%s","����ֵ������������������\n");
		rewind(stdin);  // ˢ�»���������scanf��ȫ����
		ChooseWorkingMode(WorkingMode);  // ��������

	}
	else if (*WorkingMode == 1 || *WorkingMode == 2)
	{
		printf("%s", "ѡ��ɹ�,���ڽ���...\n");  // �Ϸ���ֵ
	}
	else
	{
		printf("%s", "�����������������롣\n");  // ���Ϸ���ֵ
		rewind(stdin);  // ˢ�»���������scanf��ȫ����
		ChooseWorkingMode(WorkingMode);  // ��������
	}
}
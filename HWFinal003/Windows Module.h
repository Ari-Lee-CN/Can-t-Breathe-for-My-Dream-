#pragma once

//
//  Windows Module.h
//
//  Created by Victor Gao on 2021/10/27.
//
//  ����ģʽģ��
//
//  �������ߣ�����
//

int WindowsStart(double Number[])  // ����ģʽ��������ʼ����ֵ
{
	for (int i = 1; i <= 2; i++)
	{
		printf("%s", "������һ������(�Զ�ȡ��):");
		int flag = scanf("%lf", &Number[i-1]);  // �źű������ж�����ֵ�Ƿ�Ϊ��ֵ
		if (flag == 0)
		{
			printf("%s","����ֵ����ֵ������������\n");
			rewind(stdin);  // ˢ�»�����
			i -= 1;  // ѭ����1����������
		}
		else
		{
			Number[i - 1] = floor(Number[i - 1]);  // ��ֵȡ��
			printf("����ɹ������Ϊ:%.0f\n",Number[i-1]);  // �������
		}
	}
	return 1;
}

int Calculation(double Number[])  // ���㺯��
{
	printf("%s", "���������...\n");
	printf("��:a+b=%d\n", aPlusb(Number[0], Number[1])); // �ӷ�
	printf("��:a-b=%d\n", aMinusb(Number[0], Number[1]));  // ����
	printf("��:axb=%d\n", aMultipliedByB(Number[0], Number[1]));  // �˷�
	printf("��:a/b=%.2f\n", aDividedByB(Number[0], Number[1]));  // ����
	printf("ȡģ:a%%b=%d\n", aModB(Number[0], Number[1]));  // ȡģ
	return 1;
}
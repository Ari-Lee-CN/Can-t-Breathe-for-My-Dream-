#pragma once

//
//  EarlyDemo.h
//
//  Created by Steven Yu on 2021/10/26.
//
//  ���ڲ���Demo������������������ģ��
//
//  �������ߣ�������
//

#include <iostream>
#include <iomanip>

using namespace std;
class AddTwoIntegers {  // ��������ģ����  
public:
    AddTwoIntegers(void);  // �޲����Ĺ��캯�� 
    AddTwoIntegers(int i1, int i2);  // �������Ĺ��캯��
    void output(void);  // ������
    int aPlusB(void);  // �ӷ�  
    int aMinusB(void);  // ����
    int aMultipliedByB(void); // �˷�
    double aDividedByB(void); // ����
    int aModB(void);  // ȡģ
private:
    int a;  // �������1
    int b;  // �������2
};

AddTwoIntegers::AddTwoIntegers(void) {  // �޲ι��캯��ʵ��
    cout << "��������������" << "\n";
    cin >> a;
    cout << "�Ѿ���������a =  " << a << "\n";
    cin >> b;
    cout << "�Ѿ���������b = " << b << "\n";
}

AddTwoIntegers::AddTwoIntegers(int a, int b) {  // ���������캯��ʵ��
    this->a = a;
    this->b = b;
}

int AddTwoIntegers::aPlusB(void) {  // �ӷ�ʵ��
    return a + b;
}
int AddTwoIntegers::aMinusB(void) {  // ����ʵ��
    return a - b;
}
int AddTwoIntegers::aMultipliedByB(void) {  // �˷�ʵ��
    return a * b;
}
double AddTwoIntegers::aDividedByB(void) {  // ����ʵ��
    return (double)a / (double)b;
}
int AddTwoIntegers::aModB(void) {  // ȡģʵ��
    return a % b;
}
void AddTwoIntegers::output(void) {  // ������ʵ��
    cout << "Output\n"
        << "a + b = " << aPlusB() << "\n"
        << "a - b = " << aMinusB() << "\n"
        << "a * b = " << aMultipliedByB() << "\n"
        << "a / b = " << fixed << setprecision(2) << aDividedByB() << "\n"
        << "a % b = " << aModB() << endl;
}
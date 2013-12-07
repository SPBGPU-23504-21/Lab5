/*
��������� ��� �������

1.	�������� ���������, ������� ��������� ��������� ��������:

a.	��������� vector<DataStruct> ����������� DataStruct, ��� ���� key1 � key2, 
������������ ��������� ������� � ��������� �� -5 �� 5, 
str ����������� �� ������� 
(������� �������� 10 ������������ �����, ������ ������ ������������ ��������� �������)
b.	������� ���������� ������ �� ������
c.	��������� ������ ��������� �������:
i.	�� ����������� key1
ii.	���� key1 ����������, �� �� ����������� key2
iii.	���� key1 � key2 ����������, �� �� ����������� ������ ������ str
d.	������� ���������� ������ �� ������

DataStruct ���������� ��������� �������:
typedef struct
{
    int       key1;
    int       key2;
    string  str;
} DataStruct;
*/
#include <string>
#include <iostream>
#include <vector>
#include <time.h>
#include <cstdio>
#include <fstream>
using namespace std;


typedef struct{
    int key1;
    int key2;
    string str;
} DataStruct;

typedef vector<DataStruct> container_type;
class DataStructManager
{
private:
    container_type __container;
public:
    DataStructManager(string *table);
    void sort(void);
    void print(void);
};

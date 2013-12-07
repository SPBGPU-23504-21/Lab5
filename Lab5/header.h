/*
¬ыполнить ¬—≈ задани€

1.	Ќаписать программа, котора€ выполн€ет следующие действи€:

a.	«аполн€ет vector<DataStruct> структурами DataStruct, при этом key1 и key2, 
генерируютс€ случайным образом в диапазоне от -5 до 5, 
str заполн€етс€ из таблицы 
(таблица содержит 10 произвольных строк, индекс строки генерируетс€ случайным образом)
b.	¬ыводит полученный вектор на печать
c.	—ортирует вектор следующим образом:
i.	ѕо возрастанию key1
ii.	≈сли key1 одинаковые, то по возрастанию key2
iii.	≈сли key1 и key2 одинаковые, то по возрастанию длинны строки str
d.	¬ыводит полученный вектор на печать

DataStruct определена следующим образом:
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

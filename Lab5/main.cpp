#include "header.h"
#define SIZE 10
template<typename T>T RandomElement(T r1, T r2)
{
	return r1 + rand() % (r2-r1+1);
}
DataStructManager::DataStructManager(string *table){
	int i = 0, k1 = -5, k2 = 5;
    DataStruct data;
	while(i != table->size()){
        data.str = table[i];
		data.key1 = RandomElement(k1,k2);
		data.key2 = RandomElement(k1,k2);
        __container.push_back(data);
		i++;
    }
	//create two elements for 100% test sorting, when key1 = key2 str1 != str2
	data.str = "lolx12";
	data.key1 = 4;
	data.key2 = 4;
	__container.push_back(data);
	data.str = "lolx";
	data.key1 = 4;
	data.key2 = 4;
	__container.push_back(data);
}

void DataStructManager::print(){
    container_type::iterator iter;
    cout << endl << "Created vector<DataStruct> from file: " << endl;
    for(iter = __container.begin(); iter < __container.end(); iter++)    {
        cout <<"('"<< iter->str<<"', "<< iter->key1<<", "<< iter->key2 << ")"<<endl;
    }
}

void DataStructManager::sort() {
    container_type::iterator i,j;
    for ( i = __container.begin(); i < __container.end(); i++){
        for (j = __container.begin(); j < __container.end(); j++){
            if( i->key1 < j->key1)   {
				iter_swap(i,j);
			}
            else if(i->key1 == j->key1){
                if(i->key2 < j->key2) {
                    iter_swap(i,j);
                }
                else if (i->key2 == j->key2){
                    if (i->str.length() < j->str.length()) {
                        iter_swap(i,j);
                    }
                }
            } // ENDIF
        } // ENDFOR2
    }// ENDFOR1
}

int read_file(string *arr, char file[], int size) {
    ifstream myfile;
	int i = 0;
	myfile.open(file);
    if (myfile.is_open()) {
		cout << "file opened" << endl;
		while ((!myfile.eof() )&&(i!=size))  {
            getline(myfile, arr[i]);
			cout << arr[i] << endl;
            i++;
        }
        myfile.close();
		return 0;
    }
    else  {
        cout << "Unable to open file";
		myfile.close();
		return EXIT_FAILURE;
    }
}

int main(void){
    string arr[SIZE];
    read_file(arr, "../input.txt", SIZE);
	srand((int)time(0));
    DataStructManager dm(arr);
    dm.print();
    cout << endl << endl <<"+=================Sorting================+"<< endl << endl;
    dm.sort();
    dm.print();
    return EXIT_SUCCESS;
}
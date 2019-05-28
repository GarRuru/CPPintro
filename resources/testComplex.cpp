#include<iostream>
#include<fstream>
#include<vector>
#include<assert.h>
#include<stdlib.h>
#include"Complex.h"

using namespace std;
void readFile(vector<Complex> *);

int main()
{
	vector<Complex> T;
	readFile(&T);
    // ...
    system("pause");
    return 0;
}

void readFile(vector<Complex> *pVector)
{
	ifstream ifs("complex.dat");
	assert(ifs);
	double x, y;
	ifs >> x >> y;              //讀取第一行
	while (!ifs.eof())
	{
        Complex IN;             //宣告一個Complex物件
		//把讀到的x,y放到IN裡面
        //再把IN放到pVector裡面
        ifs >> x >> y;          //繼續讀取下一行
	}
}

	
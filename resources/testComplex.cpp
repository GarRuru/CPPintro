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
	ifs >> x >> y;              //Ū���Ĥ@��
	while (!ifs.eof())
	{
        Complex IN;             //�ŧi�@��Complex����
		//��Ū�쪺x,y���IN�̭�
        //�A��IN���pVector�̭�
        ifs >> x >> y;          //�~��Ū���U�@��
	}
}

	
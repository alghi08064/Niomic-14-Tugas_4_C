#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	int x = 30;
	int a, b;
    setcolor(5);
	cout<<"Nilai Awal X : "<<x<<endl;
	setcolor(3);
	x--;
	cout<<"Nilai Kedua X : "<<x<<endl;
	x++;
	x++;
	cout<<"Nilai Ketiga X : "<<x<<endl;
    return 0;
}

#include"Merge_Sort.h"
#include"Select_Sort.h"
#include<iostream>
#include "Sorting.h"
//#include"insertionSort.h"
using namespace std;
int main()
{
	int num = 101;
	int* arr = new int[num];
	cout << endl << endl;
	//Select_Sort sortedtest(arr, num);
	//cout << sortedtest.Get_count() << endl << endl;
	//sortedtest.print_arr();
	/*Merge_Sort testing(arr, 0, num-1);
	testing.print_arr();
	cout << endl << testing.Get_Size()<<endl << testing.Get_count();*/
	/*int te[11] = { 0,10,9,8,7,6,5,4,3,2,1 };*/

	Merge_Sort testing(arr,0,num-1);
	testing.Fill();
	testing.print_arr();
	cout << endl << endl;
	testing.Sort();
	testing.print_arr();
	cout<<endl<<testing.Get_count();
	return 0;

}
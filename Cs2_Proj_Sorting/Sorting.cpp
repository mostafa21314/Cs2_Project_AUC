
#include "Sorting.h"
#include<iostream>
Sorting::Sorting(int* x, int y) :arr(x), size(y), compare(0)
{
	Fill();
}

Sorting::~Sorting()
{
	delete[] arr;
}

void Sorting::print_arr() const
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
}

int Sorting::Get_count() const
{
    return compare;
}


void Sorting::Fill()
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) // loop that fills the array with the required data elements (numbers from 1-num)
    {
        *(arr + i) = i;
    }
    for (int i = 2; i < size; i++) // loop that shuffles the content of the array randomly
    {
        int j = (rand() % i) + 1;
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
}

void Sorting::Swap(int& x, int& y)
{
    {
        int temp = x;
        x = y;
        y = temp;
    }
}



//Bubble_Sort.cpp
#include "Bubble_Sort.h"

Bubble::Bubble(int y):Sorting(y)
{
    
}
 void Bubble::Sort()
{
     int i,j;
     for(i=0; i<size-1;i++)
     {
         for(j=0; j<size-i-1;j++)
         {
             compare++;
             if(*(arr+j)>*(arr+j+1))
             {
                 Swap(*(arr+j), *(arr+j+1));
             }
         }
     }
}

#include <iostream>
#include <limits.h>
#include <chrono>
#include <iomanip>
#include <cstdlib>
using namespace std;

void quicksort(int array[],int begin,int end)
{
    int pivot_element = array[end];
    int position_index = begin;
    for(int i = begin;i<end;i++)
    {
        if(array[i] <= pivot_element)
        {
            int temp = array[i];
            array[i] = array[position_index];
            array[position_index] = temp;
            position_index++;
        }
    }
    int temp_value = array[position_index];
    array[position_index] = array[end];
    array[end] = temp_value;
    if(begin < position_index-1)
    {
        quicksort(array,begin,position_index-1);
    }
    if(position_index+1 < end)
    {
        quicksort(array,position_index+1,end);
    }
}

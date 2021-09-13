#include <iostream>
using namespace std;


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void printall(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            cout << arr[j] << endl;
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



void loop1()
{
    //double for loop. loopA & loopB.
    //loop A is n-1 which means count depends on size.
    //loop B is n-1-i which means it  count depends on size at ferst inplementation.
    //but the count goes down every implementation
    int size = 10; //size of list 


    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -i; j++)
        {
            //do
        }

    }



    //used for buble sort





}

void loop2()
{

    // loop A implement loop b size times
    // loop b goes though list

    int size = 7; //size of list 
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

        }

    }





}

// Driver code 
int main()
{
    //int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    //int n = sizeof(arr) / sizeof(arr[0]);
    //bubbleSort(arr, n);
    //cout << "Sorted array: \n";
    //printArray(arr, n);
    //return 0;
    //printall(arr, n);
    loop2();
    return 0;
}
#include <stdio.h>
#define SIZE 150

int arr[SIZE - 1];

void bubbleSort(int x[])
{
    int i, j;

    for(i = 1; i < SIZE; i++)
    {
        for( j = 0; j < SIZE - 1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(j, j+1);
        }
    }
}

void print()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void swap(int x, int y)
{
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;

}

void t()
{
    int i;
    for( i = 0; i < SIZE - 1; i++)
    {
        arr[i] = rand()%100;
    }
}

int main()
{
    t();
    bubbleSort(arr);
    print();
    return 0;
}

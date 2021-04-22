#include <stdio.h>
#define SIZE 100

int arr[SIZE - 1];

void selectionSort(int x[])
{
    int i, j;
    int key;

    for( i = 0; i < SIZE; i++)
    {
        key = i;

        for(j = i + 1; j < SIZE; j++)
        {
            if(arr[key] > arr[j])
            {
                key = j;
            }

        }
        swap(i, key);
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
        arr[i] = rand()%40;
    }
}

int main()
{
    t();
    selectionSort(arr);
    print();
    return 0;
}

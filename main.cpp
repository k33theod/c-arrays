#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int binary_search(int arr[], int start, int end, int item);
void insert (int arr[], int n, int index, int value);
void merge(int arr1[], int m, int arr2[], int n ,int target[]);
void print_array(int arr[], int n);
void print_array_reversed(int arr[], int n);
void randomize_array(int arr[], int size, int from, int to);

int main ()
{
    int const from =100;
    int const to = 500;
    
    int const size1=15;
    int const size2 =30;
    int const size3 =size1+size2;
    
    int a[size1]={0};
    int b[size2]={0};
    int c[size3]={0};
    srand(time(NULL)); 
    
    randomize_array(a, size1, from, to);
    printf ("\nPinakas 1 me %d stoixeia\n\n", size1);
    print_array(a, size1);
    //int temp = a[0];//bug bug bug bug bug
        
    randomize_array(b, size2, from, to);
    //a[0]=temp;//bug recover bug recover bug recover
    printf ("\nPinakas 2 me %d stoixeia\n\n", size2);
    print_array(b, size2);
    
    
    merge(a, size1, b, size2, c);
    
    printf ("\nPinakas c me %d stoixeia\n\n", size3);
    print_array(c, size3);
    printf ("\nPinakas c me %d stoixeia reversed order\n\n", size3);
    print_array_reversed(c, size3);
    
    getchar();
   
    return 0;
}

int binary_search(int arr[], int start, int end, int item)
{
    int middle =0;
    while (start <= end) 
    {   
        middle = start + (end - start)/2;
        if (arr[middle] == item) 
            return -1;
        else if (arr[middle] < item)
            start = middle + 1;    
        else
            end = middle - 1;
    }
    return start;
}

void insert (int arr[], int n, int index, int value)
{
    while (n>=index)
    {    
        arr[n]=arr[n-1];
        n--;
    }
    arr[index] = value;
}

void merge(int arr1[], int m, int arr2[], int n ,int target[])
{
    int i=0, j=0, k=0;  
    while (i<m && j<n)
    {    
        if (arr1[i] <= arr2[j]) 
        {            
            target[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            target[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i<m)
    {
        target[k] = arr1[i];
        i++;
        k++;
    }
    while (j<n)
    {
        target[k] = arr2[j];
        j++;
        k++;
    }
}

void print_array(int arr[], int n)
{
    int i = 0;
    while (i<n)
    {
        printf("%d\t",arr[i]);
         i++;   
    }
    printf("\n");  
    
}

void print_array_reversed(int arr[], int n)
{
    int i = n-1;
    while (i>=0)
    {
        printf("%d\t",arr[i]);
        i--;
    }
    printf("\n");    
}

void randomize_array(int arr[], int size, int from, int to)
{
    int i = 0;
    int item = 0;
    int position =0;
    while (i<size)
    {
        item = from+rand()%(to-from);
        position = binary_search(arr, 0, i-1, item);
        if (position!=-1)
        {
            insert (arr, i, position, item);
            i++;
        }
    }
}

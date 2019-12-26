#include<stdio.h>
#include<conio.h>
const int size=10;   // global variable so now it can be accessed by entire program
int n=0;       // total elements initially
void insertionSort(int *);
void traverse(int *p);
void main()
{
    int arr[10];
    int i;
    printf("How many elements you want to sort?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
   insertionSort(arr);
    traverse(arr);
}
void insertionSort(int *p)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = p[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && p[j] > key)
       {
           p[j+1] = p[j];
           j = j-1;
       }
       p[j+1] = key;
   }
}
void traverse(int *p)
{
  // p==arr
int i;
printf("Array elements are\n");
for(i=0;i<n;i++)
{
   printf("%d ",p[i]);
}
}

#include<stdio.h>
#include<conio.h>
const int size=10;   // global variable so now it can be accessed by entire program
int n=0;       // total elements initially
void traverse(int *);
void insertion_sorted(int *);
void insertion_unsorted(int *);
void deletion(int *);
void linear_search(int *);
void binary_search(int *);
void selection_sort(int *);
void bubble_sort(int *);
void merge_sort(int *);

void main()
{
   int choice;
   int arr[10];
   do
   {
   printf("Press 1 for INSERTION_UNSORTED IN ARRAY\n");
   printf("Press 2 for INSERTION_SORTED IN ARRAY\n");
   printf("Press 3 for DELETION IN ARRAY\n");
   printf("Press 4 for LINEAR SEARCH IN ARRAY \n");
   printf("Press 5 for BINARY SEARCH IN ARRAY\n");
   printf("Press 6 for SELECTION SORT IN ARRAY\n");
   printf("Press 7 for BUBBLE SORT IN ARRAY\n");
   printf("Press 8 for MERGE SORT IN ARRAY\n");
   printf("Press 9 for TRAVERSAL OF ARRAY\n");
   printf("Press 10for EXIT\n");
   printf("ENTER YOUR CHOICE\n");
   scanf("%d",&choice);
  	 switch(choice)
   	 {
   	 	case 1:
   	 		printf("Welcome to Insertion in unsorted array\n");
   	 		insertion_unsorted(arr);
   	 		break;
   	 	case 2:
   	 		printf("Welcome to Insertion in sorted array\n");
   	 		insertion_sorted(arr);
				break;
   	 	case 3:
   	 		printf("Welcome to deletion in array\n");
   	 		deletion(arr);
   	 		break;
   	 	case 4:
   	 		printf("Welcome to linear search in array\n");
   	 		linear_search(arr);
   	 		break;
   	 	case 5:
   	 		printf("Welcome to binary search in array\n");
   	 		binary_search(arr);
   	 		break;
   	 	case 6:
   	 		printf("Welcome to selection sort in array\n");
   	 		selection_sort(arr);
   	 		break;
   	 	case 7:
   	 		printf("Welcome to bubble sort in array\n");
   	 		bubble_sort(arr);
   	 		break;
   	 	case 8:
   	 		printf("Welcome to merge sort in array\n");
   	 		merge_sort(arr);
   	 		break;
   	 	case 9:
   	 		printf("Welcome to traversal in array\n");
   	 		traverse(arr);
			break;
   	 }
   } while(choice>=1 && choice<=9);
   getch();
}


void traverse(int *p)
{
  // p==arr
  system("cls");  //   to clear the screen
int i;
printf("Array elements are\n");
for(i=0;i<n;i++)
{
   printf("%d ",p[i]);
}
  printf("\n------X------X------X------\n");
  getch();
  system("cls");    // to clear the screen
}


void insertion_sorted(int *p)
{
   int item,i;
   system("cls");
   if(n==size)
   {
   	  printf("Overflow array is full\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the item to be inserted\n");
   scanf("%d",&item);
   for(i=n-1;i>=0 && item<p[i];i--)
   {
   	  p[i+1]=p[i];
   }
   p[i+1]=item;
   n++;
   printf("ITem inserted successfully\n");
   getch();
   system("cls");
}

void insertion_unsorted(int *p)
{
   int item,i,pos;
   system("cls");
   if(n==size)
   {
   	  printf("Overflow array is full\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the position where you want to insert\n");
   scanf("%d",&pos);
   if(pos<0 || pos>n)
   {
   	  printf("Invalid position\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the item to be inserted\n");
   scanf("%d",&item);
   for(i=n-1;i>=pos ;i--)
   {
   	  p[i+1]=p[i];
   }
   p[pos]=item;
   n++;
   printf("ITem inserted successfully\n");
   getch();
   system("cls");
}
void deletion(int *p)
{
   int item,i,pos;
   system("cls");
   if(n==0)
   {
   	  printf("Underflow array is empty\n");
   	  getch();
   	  system("cls");
	  return;
   }
   printf("Enter the position where you want to insert\n");
   scanf("%d",&pos);
   if(pos<0 || pos>=n)
   {
   	  printf("Invalid position\n");
   	  getch();
   	  system("cls");
	  return;
   }
   item=p[pos];
   for(i=pos;i<n-1;i++)
   {
   	  p[i]=p[i+1];
   }
   n--;
   printf("Item %d deleted successfully\n",item);
   	getch();
   	  system("cls");
}

void linear_search(int *p)
{
   int item,i;
   printf("Enter the item to be searched\n");
   scanf("%d",&item);
   for(i=0;i<n;i++)
   {
     	if(item==p[i])
     	{
     		printf("ITem found");
     		getch();
   	        system("cls");
	        return;
	    }
   }
     		printf("ITem not found");
     		getch();
   	        system("cls");
}
void binary_search(int *p)
{
   int item,LB,UB,MID;
   printf("Enter the item to be searched\n");
   scanf("%d",&item);
   LB=0;UB=n-1;
   while(LB<=UB)
   {
   	    MID=(LB+UB)/2;
     	if(item==p[MID])
     	{
     		printf("ITem found");
     		getch();
   	        system("cls");
	        return;
	    }
	    else if(item>p[MID])
	    {
	    	LB=MID+1;
	    }
	    else
	    {
	    	UB=MID-1;
	    }
   }
     		printf("ITem not found");
     		getch();
   	        system("cls");
}
void selection_sort(int *p)
{
   int i,j,temp;
   for(i=0;i<n-1;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   		if(p[i]>p[j])
        {
        	temp=p[i],p[i]=p[j],p[j]=temp;
        }
   	}
   }
   printf("Array sorted successfully using selection sort\n");
   getch();
   	        system("cls");
}
void bubble_sort(int *p)
{
   	int i,j,temp;
   for(i=1;i<=n-1;i++)
   {
   	for(j=0;j<n-i;j++)
   	{
   		if(p[j]<p[j+1])
        {
        	temp=p[j],p[j]=p[j+1],p[j+1]=temp;
        }
   	}
   }
   printf("Array sorted successfully using bubble sort\n");
   getch();
   	        system("cls");
}
void merge_sort(int *p)
{
   int gap,i,j,k;
   int temp[10];
   int LB1,LB2,UB1,UB2;
   for(gap=1;gap<=n-1;gap=gap*2)
   {
   	   LB1=0,k=0;
   	   while(LB1+gap<n)
   	   {
   	   	 LB2=LB1+gap;
   	   	 UB1=LB2-1;
   	   	 if(UB1+gap<n)
   	   	   UB2=UB1+gap;
   	   	 else
   	   	   UB2=n-1;
   	   	 while(LB1<=UB1 && LB2<=UB2)
   	   	 {
   	   	 	if(p[LB1]<p[LB2])
   	   	 	  temp[k++]=p[LB1++];
   	   	 	else
			  temp[k++]=p[LB2++];
   	   	 }
   	   	 while(LB1<=UB1)
   	   	 {
   	   	 	temp[k++]=p[LB1++];
   	   	 }
   	   	 while(LB2<=UB2)
   	   	 {
   	   	 	temp[k++]=p[LB2++];
   	   	 }
   	   	 LB1=UB2+1;
   	   }
   	   for(i=0;i<=UB2;i++)
   	   {
   	   	 p[i]=temp[i];
   	   }
   }
   printf("Array sorted successfully using merge sort\n");
   getch();
   	        system("cls");
}

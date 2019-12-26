#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){

    int index=1,i;
    int newsize=1;
    for(i=1;i<numsSize-1;i++)
    {
        if(nums[index]!=nums[i])
        {
            nums[index+1]=nums[i];
            index++;
            i=index;
        }
        newsize=index+1;
    }
    for(int i=0;i<newsize;i++)
    {
        printf("%d",nums[i]);
    }
    return newsize;

}

int main()
{
    int arr[3]={1,1,2};
    int size=3;
    int sizenew=0;
    sizenew=removeDuplicates(arr,size);
    printf("%d",sizenew);
    return 0;
}

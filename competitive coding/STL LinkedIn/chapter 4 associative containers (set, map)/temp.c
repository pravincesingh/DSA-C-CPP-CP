#include<stdio.h>
#define max(a) a
int main()
{
    int x=1;
    switch(x)
    {
    case max(2):
        printf("yes");
    case max(1):
        printf("no");
        break;
    }
}

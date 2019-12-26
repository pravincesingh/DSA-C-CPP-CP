#include <stdio.h>
#include<conio.h>
void hello()
{
    printf("Hello world!\n");
    getch();
}
printchar1()
{
    int c;
    c=getchar();
    while(c!=EOF)
    //while((c=getchar())!=EOF)
    {
        putchar(c);
        c=getchar();
    }
}
printchar2()
{
    int _c;
    while((_c=getchar())!=EOF)
    {
        putchar(_c);
    }
}

void size()
{
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(short int));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(short));
}
void typeconv()
{
    //Loss in information if we assign higher to lower
    char a;
    int b=14;
    a=b;
    printf("%c\n",a);
    double c=132324245413212;
    b=c;
    printf("%d\n",b);

}
int strlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
void test()
{
    int a="a";
    printf("%d",a);
}
void even()
{
    int a=3,b=6;
    int max;
    max=a>b?a:b;
    printf("%d is max",max );
}
void table()
{
    //Print fahrenheit - Celsius table for fahr=0,20,40,......,300
    int lower=0,upper=300,cels,fahr;
    int i;
    for(i=lower;i<=upper;i+=20)
    {
        cels=5*(i-32)/9;
        printf("%d\t%d\n",i,cels);
    }

}
void tabled()
{
    //Print fahrenheit - Celsius table for fahr=0,20,40,......,300
    int lower=0,upper=300;
    float cels,fahr;
    int i;
    for(i=lower;i<=upper;i+=20)
    {
        cels=5.0*(i-32)/9.0;
        printf("%3d\t%6.2f\n",i,cels);
    }

}
void evenodd()
{
    int num;
    printf("Enter a num ");
    scanf("%d",&num);
    if(num%2==0)
        printf("num is even");
    else
        printf("num is odd");
}
void biggest()
{
    int a=5,b=2,c=9;
    /*if(a>b && a>c)
        printf("%d is greatest",a);
    if(b>c && b>a)
        printf("%d is greatest",b);
    if(c>a && c>b)
        printf("%d is greatest",c);*/

    /*if(a>b && a>c)
        printf("%d is greatest",a);
    else if(b>c)
        printf("%d is greatest",b);
    else
        printf("%d is greatest",c);*/

    if(a>b)
    {
        if(a>c)
            printf("%d id the largest",a);
        else
            printf("%d is greatest",c);
    }
    else
    {
        if(b>c)
            printf("%d is the greatest",b);
        else
            printf("%d is the greatest",c);
    }

}

void cal()
{
    char c;
    double a,b;

    printf("Enter the value of a =");
    scanf("%lf",&a);
    printf("Enter the value of b =");
    scanf("%lf",&b);
    getchar();
    printf("What operation you want to perform ?");
    scanf("%c",&c);
    switch(c)
    {
        case '+': printf("The sum is %lf",a+b);
        break;
        case '-': printf("The sub is %lf",a-b);
        break;
        case '*': printf("The mult is %lf",a*b);
        break;
        case '/': printf("The div is %lf",a/b);
        break;
        default:printf("Enter correct operator");
    }
}


void neg()
{
    int n;

    do
    {
        printf("Enter numbers ");
        scanf("%d",&n);
    }while(n>=0);
    printf("The value of n is %d",n);
}

void sumpos()
{
    int n=1,num;
    int sum=0;

    while(n<=5)
    {
        printf("Enter number ");
        scanf("%d",&num);
        n+=1;
        if(num<0)
            continue;
        sum=sum+num;
    }
    printf("The sum is %d",sum);
}

void prime()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    int flag=0,i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {

            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Number is not prime ");

    }
    else
        printf("Number is prime");
}
void fact()
{
    unsigned long long int fact=1;
    int i,num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Factorial of a negative number is not possible \n");
    }
    else
    {
        printf("The number is %d\n",num);
        for(i=2;i<=num;i++)
            fact*=i;
        printf("The factorial of the given number is %llu \n",fact);
    }


    /*############## FUNCTIONS ##########################*/

}

int max(int x , int y)
{
    return x>y?x:y;
}

void swap(int *p,int *q);

int power(int b , int n)
{
    int p=1;
    for(p=1; n>0;--n)
    {
        p=p*b;
    }
    return p;
}

//Pointer
void pointer()
{
    int x=5;
    int *y=&x;
    printf("%d\n",x); //5
    printf("%u\n",&x); // 6356716

    printf("%u\n",y); //6356716

    printf("%d\n",*y); //5
    printf("%d\n",&y); // 6356712
    printf("%d",sizeof(y));
}
void f(int *p , int *q)
{
    p=q;
    *p=2;
}

void pointer2gate()
{
    int i=0,j=1;
    f(&i,&j);
    printf("%d %d \n",i,j);
}
int main()
{
    //hello();
    //printchar1();
    //printchar2();
    //size();
    //typeconv();
    //printf("%d",strlen("kkmkk"));
    //test();
    //even();
    //table();
    //tabled();
    //evenodd();
    //biggest();
    //cal();
    //neg();
    //sumpos();
    //prime();
    //fact();

    /* Functions*/
    //int a =100,b=200;
    //int maximum = max(a,b);
    //printf("%d",maximum);

    //swap(&a,&b);
    //printf("The value of a is %d \nThe value of b is %d",a,b);


    //int base =2;
    //int no =3;
    //printf("%d",power(base , no));






    //Pointer
    //pointer();
    pointer2gate();
    return 0;
}

void swap(int *p,int *q)
{
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
}

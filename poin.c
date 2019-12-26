void main()
{

    int a,b;
    int *p,*q;
    p=&a,q=&b;
    printf("Enter 2 numbers\n");
    scanf("%d %d",p,q);
    printf("values are %d %d\n",a,b);
    printf("values are %d %d\n",*&a,*&b);
    printf("values are %d %d\n",*p,*q);
}

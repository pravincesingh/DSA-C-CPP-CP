#include <stdio.h>

int main(void) {

	int t,i,n1,d,n2,nn,n3,n4,min,temp1,temp2;
	scanf("%d",&t);
	for (i=0;i<t;i++)
	{
	     scanf("%d%d",&n1,&d);
	     nn=n1;
	     temp1=nn%10;
	     nn=nn/10;
	     temp2=nn%100;
	    // printf("%d %d",temp1,temp2);

	     n2=temp2*10+d;
	     n3=temp1*10+d;
	     n4=d*10 +temp1;
	     min=(n1 < n2 && n1 < n3 && n1 < n4) ?
                                   n1 :
                                     ((n2 < n3 && n2 < n4) ?
                                                         n2 :
                                                          (n3 < n4 ? n3 : n4));
	     printf("%d",min);

	}



	return 0;
}



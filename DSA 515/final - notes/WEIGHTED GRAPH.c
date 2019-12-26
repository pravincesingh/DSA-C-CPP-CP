/*
DegreeFinder(ADJ,V,IN,OUT)
1)Set I:=1.
2)Repeat steps  3 to 7  While I<=V:
3)Set J:=1.
4)Repeat steps 5,6   While J<=V:
5)If ADJ[I][J]=1,then:
   Set IN[J]:=IN[J]+1,OUT[I]:=OUT[I]+1.
  [End of If structure].
6)Set J:=J+1.
  [End of step 4 loop].
7)Set I:=I+1.
  [End of step 2 loop].
8)Exit.


DegreeFinder(G,IN,OUT,INFO,NEXT,LINK)
1)Set PTR1:=G.
2)Repeat steps  3 to 8  while PTR1!=NULL:
3)Set PTR2:=NEXT[PTR1].
4)Repeat steps  5,6,7    while PTR2!=NULL:
5)Set OUT[INFO[PTR1]]:=OUT[INFO[PTR1]]+1.
6)Set IN[INFO[PTR2]]:=IN[INFO[PTR2]]+1.
7)Set PTR2:=LINK[PTR2].
  [End of step 4 loop].
8)Set PTR1:=LINK[PTR1].
  [End of step 2 loop].
9)Exit.  




*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct graph
{
  struct graph *link;
  int info;
  struct vertex *next;   // will store the address of first adjacent node	
};
int **adj,V;
int *in,*out;   // to create dynamic array
struct vertex
{
   int info;
   int weight;
   struct vertex *link;	
};
void warshall()
{
  int i,j,k;
  int **w=calloc(V,sizeof(int*));
  if(w==NULL)
  {
  	exit(1);
  }
  for(i=0;i<V;i++)
  {
  	w[i]=calloc(V,sizeof(int));
    if(w[i]==NULL)
    {
  	  exit(1);
    }
  }	
  	for(i=0;i<V;i++)
  	{
  		for(j=0;j<V;j++)
  		{
            if(adj[i][j]==0)
			w[i][j]=-1;
			else
			w[i][j]=adj[i][j];
						
  		}
   }
  
  for(k=0;k<V;k++)
  {
  	for(i=0;i<V;i++)
  	{
  		for(j=0;j<V;j++)
  		{
  	      if(w[i][j]!=-1&&w[i][k]!=-1&&w[k][j]!=-1)
  	      {
  	      	if(w[i][k]+w[k][j]<w[i][j])
  	      	  w[i][j]=w[i][k]+w[k][j];
		  }
          else if(w[i][k]!=-1&&w[k][j]!=-1)
  	      {
  	      	  w[i][j]=w[i][k]+w[k][j];
		  } 
			    
        }	
  	}
  }
  printf("Minimum distance matrix by warshall algo is\n");
  	for(i=0;i<V;i++)
  	{
  		for(j=0;j<V;j++)
  		{
  			printf("%d\t",w[i][j]);
  		}
  		printf("\n");
  	}
}
void createIsolatedGraph(struct Graph **G)
{
  struct graph *node,*end=NULL;
  int i,n,j;
  printf("Enter total no. of vertices\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	node=malloc(sizeof(struct graph));
  	if(node==NULL)
  	{
  		printf("Insufficient memory\n");
  		return;
  	}
  	node->info=i;  // vertex no. is stored here
  	node->next=NULL;
	if(end==NULL)
  	{
  	   end=*G=node;	
  	}
  	else
  	{
  		end->link=node;
  		end=node;
  	}
  	
  }
  end->link=NULL;
  printf("Isolated graph created sucessfully\n");
  V=n;
  adj=calloc(V,sizeof(int*));
  if(adj==NULL)
  {
  	exit(1);
  }
  for(i=0;i<V;i++)
  {
  	adj[i]=calloc(V,sizeof(int));
    if(adj[i]==NULL)
    {
  	  exit(1);
    }
  }
  in=calloc(V,sizeof(int));
  out=calloc(V,sizeof(int));
    if(in==NULL || out==NULL)
    {
  	  exit(1);
    }
  
}
void createGraph(struct  graph *ptr)
{
   int item,n,i,w;
   struct vertex *node,*end;
   while(ptr!=NULL)
   {
   	 printf("Enter total adjacent vertices for source (%d)\n",ptr->info);
   	 scanf("%d",&n);
   	 end=NULL;
   	 for(i=1;i<=n;i++)
   	 {
   	   printf("Enter the destination vertex number\n");
	   scanf("%d",&item);
	   printf("Enter the weight\n");
	   scanf("%d",&w);
	   
	   node=malloc(sizeof(struct vertex));
  	   if(node==NULL)
     	{
  	    	printf("Insufficient memory\n");
  		   return;
  	    }	  	
  	    node->info=item;
  	    node->weight=w;
  	    node->link=NULL;
  	    if(end==NULL)
  	    {
  	    	ptr->next=node;
  	    }
  	    else
  	    {
  	    	end->link=node;
  	    }
  	    end=node;
   	 }
   	 ptr=ptr->link;
   }   
   printf("Graph created sucessfully\n");
  
}
void printGraph(struct graph *G)
{
	struct graph *ptr;
	struct vertex *ptr1;
	int i,j;
	ptr=G;
	printf("Adjacency List Representation\n");
	printf("Vertexno.\tAdjacent Vertices\n");
	while(ptr!=NULL)
	{
		printf("%d\t\t",ptr->info);
		ptr1=ptr->next;
		while(ptr1!=NULL)
		{
		   printf("%d\t",ptr1->info);
		   adj[ptr->info-1][ptr1->info-1]=ptr1->weight;
		   ptr1=ptr1->link; 
		}
		printf("\n");
		ptr=ptr->link;
	}
	
	printf("\n\nAdjaceny Matrix represenatation\n\n");
	
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}
		
}
void degreeFinder(struct graph *ptr)
{
   struct vertex *ptr1;
   int i;
   while(ptr!=NULL)
   {
     ptr1=ptr->next;
	 while(ptr1!=NULL)
	 {
	 	out[ptr->info-1]++;
	 	in[ptr1->info-1]++;
	    ptr1=ptr1->link;
	 }	
	 ptr=ptr->link;
   }	
   printf("Vertexno\tIn\tOut\n");
   for(i=0;i<V;i++)
   {
   	printf("%d\t\t%d\t%d\n",i+1,in[i],out[i]);
   }
}
void dfs()
{
   int top=0,src,i,vertex;
   int *stack,*visited;
   stack=calloc(V,sizeof(int));
   visited=calloc(V,sizeof(int));
   if(stack==NULL)
   {
     exit(1);  	
   } 
   printf("Enter the starting vertex from where you want to start dfs\n");
   scanf("%d",&src);
   if(src>=1 && src<=V)
   {
   	  stack[top]=src;
   	  visited[src-1]=1;
	  while(top>=0)
	  {
	  	printf("%d ",stack[top]);
	    vertex=stack[top];
	  	top--; 
		for(i=0;i<V;i++)
		{
		   if(adj[vertex-1][i]==1 && visited[i]==0)	
		   {
		   	  top++;
		   	  stack[top]=i+1;
		   	  visited[i]=1;
		   }
		}  	
	  }	  
   }
   else
   {
   	printf("Invalid source node");
   }
  	
}   
 void bfs()
{
   int f=0,r=0,src,dest,i,temp;
   int status=0;
   int *queue,*visited,*origin;
   queue=calloc(V,sizeof(int));
   origin=calloc(V,sizeof(int));
   visited=calloc(V,sizeof(int));
   if(queue==NULL || origin==NULL || visited==NULL)
   {
      exit(1);  	
   } 
   printf("Enter the starting vertex and destination vertex\n");
   scanf("%d%d",&src,&dest);
   if(src>=1 && src<=V && dest>=1 && dest<=V)
   {
   	  queue[f]=src;
   	  origin[f]=-1;
   	  visited[src-1]=1;
	  while(f<=r)
	  {
	  	for(i=0;i<V;i++)
		{
		   if(adj[queue[f]-1][i]==1 && visited[i]==0)	
		   {
		   	  r++;
		   	  queue[r]=i+1;
		   	  origin[r]=queue[f];
		   	  visited[i]=1;
		   	  if(queue[r]==dest)
		   	  {
		   	  status=1;
		   	  goto end;
		      }
		   }
		}  	
	  }	  
   }
   else
   {
   	printf("Invalid source node");
   }
  	end:
  		if(status==0)
  		{
  		   printf("There is no path between %d to %d node\n",src,dest);	
		}
		else
		{
		  printf("%d\t",queue[r]);
		  while(1)
		  {
		     printf("%d\t",origin[r]);
		     if(origin[r]==src)
		     break;
		     temp=origin[r];
			 while(queue[r]!=temp)
			 {
			 	r--;  
			 }  	
			 
		  } 	
		}
}     
int main()
{
   struct graph *G=NULL;

   createIsolatedGraph(&G);
   createGraph(G);
   printGraph(G);
   degreeFinder(G);
   //dfs();
   //bfs();
   warshall();
   getch();
   return 0;
}
 /* int a[3][cols];    // array of 1-d arrays
                 // 3 arrays are created each of size 3.
                 
                 a[0]    // base address of array 1
                 a[1]    // base address of array 2
                 a[2]    // base address of array 3
  3 arrays each of 3 size.
                      now first create 3 dynamic 1-d array each of size 3.
					                 
   int *p,*q,*r;
   p=calloc(3,sizeof(int));
   q=calloc(3,sizeof(int));
   r=calloc(3,sizeof(int));
                 
                     now create 3 1-d array of size cols
   					                      
   int *p,*q,*r;
   scanf("%d",&cols);
   p=calloc(cols,sizeof(int));
   q=calloc(cols,sizeof(int));
   r=calloc(cols,sizeof(int));
                 
                 
   int a,b,c,d,e,f;                    int a[6] ;
                         
                 
   int *a,*b,*c,*d,*e,*f;              int *a[5] ;
   
   
   int *p[3];
   scanf("%d",&cols);
   p[0]=calloc(cols,sizeof(int));
   p[1]=calloc(cols,sizeof(int));
   p[2]=calloc(cols,sizeof(int));
                         
            or
   p[i]=calloc(cols,sizeof(int));
                   
   
  code to create dynamic 2-d array:
 int **p;
 int rows,cols;
 printf("Enter the size of matrix\n");
 scanf("%d%d",&rows,&cols);
 p=calloc(rows,sizeof(int *));  // we are creating int *p[rows];
 if(p==NULL)
 {}
 for(i=0;i<rows;i++)
 {
   p[i]=calloc(cols,sizeof(int));
   if(p[i]==NULL)
   {}
 }
  // now just think like int p[rows][cols];
   now do the input output 
   
   
   
                                  
 */














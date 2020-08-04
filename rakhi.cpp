#include<stdio.h>
#include<unistd.h>
int CreateTie(int y);
int Rakhi(int z);
int CreateTie(int n)

{ 
	int i,j;

	for(i=0;i<n;i++)
	{
		printf("==o==");
	}
}
int Rakhi(int n)
{
	int i,j,m;
	
	
	CreateTie(n);
    printf("** || @ || **");
	CreateTie(n);
        
}

int main()
{
	int choice,n,m;
	printf(" \n\n\t\t\t **** V I R T U A L  R A K H I ****\n");
	while(1){
	printf("\n\n1. Create \n");
	scanf("%d",&choice);

	
	switch(choice)
	{
	
		case 1:  printf("Enter Number of Rakhi\t");
		         scanf("%d",&m);
		         printf("Enter the Ties\t");
		         scanf("%d",&n);
		         usleep(1000000);
		         printf("\nS u r p r i s e .........\n\n\n\n");
		        	
		        for(int i=0;i<m;i++){
				 printf("\t\t");
		        Rakhi(n);
		       
		        printf("\n");
		    }
		    printf("\n\n\n\n\t\t\t\t\t      H A P P Y  R A K S H A B A N D H A N    \n\n\n\n");
		     break; 
	
		default : printf("Invalid Input");
		
	}
  }

}



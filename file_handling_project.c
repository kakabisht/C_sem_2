#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void user_registration();
void worker_registration();
void user_login();
int worker_login();
void feedback();
FILE *ptr;
void main()
{
    int m,n;
    printf("do you want to register or login , to regiter press1 and to login press2 ");
    scanf("%d",&m);
    if(m==1)
    {
	    printf("enter 1 for user registrtion and 2 for worker registration");
	    scanf("%d",&n);
	    if(n==1)
	    {
	        user_registration();
	    }
	    if(n==2)
	    {
	        worker_registration();
	    }
	    else
		{
	        printf("enter correct input");
	    }
	    main();
	}
	if(m==2)
	{
	
	    printf("enter 1 for user login and 2 for worker login");
	    scanf("%d",&n);
	    if(n==1)
	        {
	            user_login();
	        }
	    if(n==2)
	        {
	            worker_login();
	        }
	    else{
	            printf("enter correct input");
	        }
	}
}

void user_login()
{
     printf("please put a the work to get done  in front off you name");
     ptr=fopen("userlist.txt","w");
     int k;
    printf("which option do you want 1 for Carpenter, 2 for Painter,3 for plumber, 4 for Electrician,5 for Household appliances");
    scanf("%d",&k);
    {
        if(k==1)
        {
            printf("details of carpenter's are");
            ptr=fopen("carpenter.txt","r");
        }
        if(k==2)
        {
            printf("details of painter's are");
            ptr=fopen("painter.txt","r");
        }
        if(k==3)
        {
            printf("details of pluber's are");
            ptr=fopen("plumber.txt","r");
        }
        if(k=4)
        {
            printf("details of electrician's are");
            ptr=fopen("electrician.txt","r");
        }
        if(k==5)
        {
            printf("details of household's are");
            ptr=fopen("household.txt","r");
        }
    }
    feedback();

}
void feedback()
{
    int l;
    printf("do you want to write a feedback ,if yes then press 1");
    if(l==1)
    {
        ptr=fopen("feedback.txt","w");
    }
    printf("thank you");
}
int worker_login()
{
    ptr=fopen("userlist.txt","r");
    ptr=fopen("feedback.txt","r");
    return 0;
}
void user_registration()
{
	printf("enter the details");
	ptr=fopen("userregistration.txt","w");	
}
void worker_registration()
{
	printf("enter the details");
	ptr=fopen("workerregistration.txt","w");	
}

	    


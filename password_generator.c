#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char name[100],ch,sc1,sc2,sc3,sc4,sc5,sc6,sc7;
    int num,num1,num2,num3,a;
    printf("\n Wondering to set a strong password? here is your 'PASSWORD-SETTER' to help you!");
    printf("\n It will suggest you strong password of 8 or 15 characters or a password between them.\n Not only between them but also it can suggest passwords of characters less or more than that.");
    printf("\n Give your name and you will get some strong passwords.You can select any one from them");
    printf("\n");
    system("pause");
    system("cls");
    printf("\n Enter the number of characters of the password: ");
    scanf("%d",&a);
    printf("\n\n Enter your full name: ");
    fflush(stdin);
    gets(name);
    printf("\n Please Wait! The PASSWORD-SETTER is generating passwords that HACKERS will not be able to guess!");
    printf("\n");
    for(int i=1;i<=1000;i++)
        {}
    printf("\n Hello user! I am your PASSWORD SETTER. Here are your passwords: ");
    printf("\n");
    printf("1. ");
    srand(time(0));
    num1=(rand()%4)+1;
    for(int i=1;i<=num1;i++){
    num=(rand()%6)+1;
    if(num==1)
    {
        sc1=(char)33;
        printf("%c",sc1);

    }
    else if(num==2)
    {
        sc2=(char)35;
        printf("%c",sc2);

    }
    else if(num==3)
    {
        sc3=(char)36;
        printf("%c",sc3);

    }
    else if(num==4)
    {
        sc4=(char)38;
        printf("%c",sc4);

    }

    else if(num==5)
    {
        sc5=(char)42;
        printf("%c",sc5);

    }
    else if(num==6)
    {
        sc6=(char)43;
        printf("%c",sc6);

    }
    else if(num==7)
    {
        sc7=(char)45;
        printf("%c",sc7);

    }
    }
    for(int j=num1;j<a;j++)
    {
        if(name[j]==(char)32)
        printf("%c",name[j+1]);
    else
    printf("%c",name[j]);
    }
    printf("\n\n");
    printf("2. ");
    num2=(rand()%2)+3;
    for(int i=1;i<=num2;i++){
        num=(rand()%6)+1;
        if(num==1)
        {
            sc1=(char)48;
            printf("%c",sc1);
    
        }
        else if(num==2)
        {
            sc2=(char)49;
            printf("%c",sc2);
    
        }
        else if(num==3)
        {
            sc3=(char)53;
            printf("%c",sc3);
            
    
        }
        else if(num==4)
        {
            sc4=(char)54;
            printf("%c",sc4);
    
        }
    
        else if(num==5)
        {
            sc5=(char)57;
            printf("%c",sc5);
    
        }
        else if(num==6)
        {
            sc6=(char)52;
            printf("%c",sc6);
    
        }
        else if(num==7)
        {
            sc7=(char)51;
            printf("%c",sc7);
    
        }
        }
    for(int j=num2;j<a;j++)
    {
        if(name[j]==(char)32)
        {printf("%c",name[j+1]);}
        else
        {printf("%c",name[j]);}
    }
    printf("\n\n");
    printf("3. ");
    num3=(rand()%2)+3;
    for(int j=0;j<num3;j++)
    {
        if(name[j]=='\b')
        printf("%c",name[j+1]);
        else
        printf("%c",name[j]);
    }
    for(int i=num3;i<a;i++)
    {
        num=(rand()%6)+1;
        if(num==1)
        {
            sc1=(char)33;
            printf("%c",sc1);
    
        }
        else if(num==2)
        {
            sc2=(char)35;
            printf("%c",sc2);
    
        }
        else if(num==3)
        {
            sc3=(char)36;
            printf("%c",sc3);
    
        }
        else if(num==4)
        {
            sc4=(char)38;
            printf("%c",sc4);
    
        }
    
        else if(num==5)
        {
            sc5=(char)42;
            printf("%c",sc5);
    
        }
        else if(num==6)
        {
            sc6=(char)43;
            printf("%c",sc6);
    
        }
        else if(num==7)
        {
            sc7=(char)45;
            printf("%c",sc7);
    
        }
    }
    printf("\n\n");
    printf("4. ");
    for(int j=0;j<num3;j++)
    {
        if(name[j]=='\b')
        printf("%c",name[j+1]);
        else
        printf("%c",name[j]);
    }
    for(int i=num1;i<a;i++)
    {
        num=(rand()%6)+1;
        if(num==1)
        {
            sc1=(char)51;
            printf("%c",sc1);
    
        }
        else if(num==2)
        {
            sc2=(char)52;
            printf("%c",sc2);
    
        }
        else if(num==3)
        {
            sc3=(char)53;
            printf("%c",sc3);
    
        }
        else if(num==4)
        {
            sc4=(char)54;
            printf("%c",sc4);
    
        }
    
        else if(num==5)
        {
            sc5=(char)55;
            printf("%c",sc5);
    
        }
        else if(num==6)
        {
            sc6=(char)49;
            printf("%c",sc6);
    
        }
        else if(num==7)
        {
            sc7=(char)48;
            printf("%c",sc7);
    
        }
    }
    printf("\n\n");
    printf("5. ");
     for(int i=0;i<a;i++){
        num=(rand()%6)+1;
        if(num==1)
        {
            sc1=(char)33;
            printf("%c",name[num]);
    
        }
        else if(num==2)
        {
            sc2=(char)35;
            printf("%c",sc2);
    
        }
        else if(num==3)
        {
            sc3=(char)36;
            printf("%c",name[num]);
    
        }
        else if(num==4)
        {
            sc4=(char)38;
            printf("%c",name[num]);
    
        }
    
        else if(num==5)
        {
            sc5=(char)42;
            printf("%c",name[num]);
    
        }
        else if(num==6)
        {
            sc6=(char)43;
            printf("%c",sc6);
    
        }
        else if(num==7)
        {
            sc7=(char)45;
            printf("%c",name[num]);
    
        }  
    }
    printf("\n\n");
    printf("6. ");
     for(int i=0;i<a;i++){
        num=(rand()%6)+1;
        if(num==1)
        {
            sc1=(char)48;
            printf("%c",name[num]);
    
        }
        else if(num==2)
        {
            sc2=(char)50;
            printf("%c",sc2);
    
        }
        else if(num==3)
        {
            sc3=(char)52;
            printf("%c",name[num]);
    
        }
        else if(num==4)
        {
            sc4=(char)51;
            printf("%c",name[num]);
    
        }
    
        else if(num==5)
        {
            sc5=(char)53;
            printf("%c",name[num]);
    
        }
        else if(num==6)
        {
            sc6=(char)55;
            printf("%c",sc6);
    
        }
        else if(num==7)
        {
            sc7=(char)58;
            printf("%c",name[num]);
    
        }  
    }
    printf("\n\n Choose whatever you like!\n Thank You! visit again.");
return 1;
}

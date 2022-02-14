#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *fp;
char ch,pass[10],pass_default[10],passwd[6],passwd1[6];
char user_default[20],user[20],emobile[30];
int i,length,choice=0;
int main()
{
l5:	printf("\n\n\t\t1.Sign up\n\n\t\t2.Sign in\n\n\t\t3.Exit\n\n\t\tEnter an option:");
	scanf("%d",&choice);
	if(choice==1)
	{
		system("cls");
		printf("\n\n\n");
		fp=fopen("name.txt","w");
		printf("\t\tCREATE USERNAME ->    ");
		scanf("%s",&user);
		fputs(user,fp);
		fclose(fp);
		fp=fopen("email.txt","w");
		printf("\n\t\tENTER EMAIL OR MOBILE NO. -> ");
		scanf("%s",&emobile);
		fputs(emobile,fp);
		fclose(fp);
	l1: printf("\n\t\tCREATE A PASSWORD ->   ");
		for(i=0;i<6;i++)
		{
			passwd[i]=getch();
			printf("*");
		}
		getch();
		fp=fopen("pass1.txt","w");
		printf("\n\n\t\tCONFIRM YOUR PASSWORD ->  ");
		for(i=0;i<6;i++)
		{
			passwd1[i]=getch();
			printf("*");
		}
		fputs(passwd1,fp);
		fclose(fp);
		getch();
		if(strcmp(passwd,passwd1)!=0)
		{
			system("cls");
			Beep(500,500);
			printf("password didnot matched");
			printf("\n\n\npress any key to continue...");
			getch();
			system("cls");
			goto l1;
		}
		system("cls");
		printf("Register successfully");
		printf("\n\n\npress any key to continue...");
		getch();
		system("cls");
		printf("\n\n\n\t\tLoading");
		for(i=0;i<=10;i++)
		{
			printf(".");
			Sleep(100);
		}
		system("cls");
		goto l2;
	}
	else if(choice==2)
	{
		system("cls");
	l2: printf("\n");
	l3:	printf("\n\n\t\tENTER USERNAME:");
		scanf("%s",&user);
		length=strlen(user);
		fp=fopen("name.txt","r");
		for(i=0;i<length;i++)
		{
			ch=fgetc(fp);
			user_default[i]=ch;
		}
		fclose(fp);
		if(strcmp(user_default,user)!=0)
		{
			system("cls");
			printf("\n\n\t\tInvalid Username!!");
			printf("\n\n\t\tpress any key to continue...");
			getch();
			system("cls");
			goto l3;
		}
		else
		{
		l4:	printf("\n\n\t\tENTER PASSWORD:");
			for(i=0;i<6;i++)
			{
				pass[i]=getch();
				printf("*");
			}
			getch();
			length=strlen(pass);
			fp=fopen("pass1.txt","r");
			for(i=0;i<length;i++)
			{
				ch=fgetc(fp);
				pass_default[i]=ch;
			}
			fclose(fp);
			if(strcmp(pass_default,pass)!=0)
			{
				system("cls");
				printf("\n\n\t\tInvalid Password!!");
				printf("\n\n\t\tpress any key to continue...");
				getch();
				system("cls");
				goto l4;
			}
			else
			{
				printf("\n\n\n\t\tLoading");
				for(i=0;i<=10;i++)
				{
					printf(".");
					Sleep(100);
				}
				system("cls");
				printf("\n\n\t\tLogin successful");
			}
		}
	}
	else if(choice==3)
	{
		;
	}
	else
	{
		system("cls");
		printf("\n\n\t\tenter valid option!!");
		Beep(500,500);
		getch();
		abort();
		
	}
}

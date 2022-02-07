#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	FILE *fp;
	char ch1;
	int point=0,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
	char ch[50];
	fp=fopen("quiz_name.txt","w");
	if(fp==NULL)
	{
		printf("file not available!");
		abort();
	}
	else
	{
		printf("Enter your Name: ");
		gets(ch);
		fputs(ch,fp);
		system("cls");
	}
	fclose(fp);
	
	fp=fopen("question1.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans1);
	if(ans1==1 || ans1==2 || ans1==3 || ans1==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	///////////////////////////////
	fp=fopen("question2.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans2);
	if(ans2==1 || ans2==2 || ans2==3 || ans2==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	//////////////////////////////
	fp=fopen("question3.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans3);
	if(ans3==1 || ans3==2 || ans3==3 || ans3==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	//////////////////////////////////
	fp=fopen("question4.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans4);
	if(ans4==1 || ans4==2 || ans4==3 || ans4==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	/////////////////////////////////
	fp=fopen("question5.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans5);
	if(ans5==1 || ans5==2 || ans5==3 || ans5==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	////////////////////////////////
	fp=fopen("question6.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans6);
	if(ans6==1 || ans6==2 || ans6==3 || ans6==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	fp=fopen("question7.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans7);
	if(ans7==1 || ans7==2 || ans7==3 || ans7==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	fp=fopen("question8.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans8);
	if(ans8==1 || ans8==2 || ans8==3 || ans8==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	fp=fopen("question9.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans9);
	if(ans9==1 || ans9==2 || ans9==3 || ans9==4)
	{
		;
	}
	else
	{
	abort();
	}
	system("cls");
	fp=fopen("question10.txt","r");
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\nenter your answer: ");
	scanf("%d",&ans10);
	if(ans10==1 || ans10==2 || ans10==3 || ans10==4)
	{
		;
	}
	else
	{
	abort();
	}
	printf("\n\n\npress any key to continue...");
	getch();
	system("cls");
	printf("\tNAME: ");
	fp=fopen("quiz_name.txt","r");
	if(ans1==4)
	{
		point++;
	}
	if(ans2==3)
	{
		point++;
	}
	if(ans3==1)
	{
		point++;
	}
	if(ans4==2)
	{
		point++;
	}
	if(ans5==1)
	{
		point++;
	}
	if(ans6==1)
	{
		point++;
	}
	if(ans7==3)
	{
		point++;
	}
	if(ans8==4)
	{
		point++;
	}
	if(ans9==3)
	{
		point++;
	}
	if(ans10==1)
	{
		point++;
	}
	while(!feof(fp))
	{
		ch1=fgetc(fp);
		printf("%c",ch1);
	}
	fclose(fp);
	printf("\n\tSCORE: %d point",point);
	if(point==10)
	{
		printf("\n\tGREAT!!");
	}
	else
	{
		printf("\n\tGOOD");
	}
	return 0;
}

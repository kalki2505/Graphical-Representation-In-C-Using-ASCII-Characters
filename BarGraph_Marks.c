#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<windows.h>

void gotoxy(int x, int y);
int main()
{
	system("color 0F");
	int i,marks[6]={6,8,4,9,2,-1},j=0;
	gotoxy(10,14);
	printf("Student");
	for(i=0;i<10;i++)
	{
		gotoxy(20+(5*i),14);
		printf("%d",i+1);
	}
	for(i=0;i<10;i++)
	{
		gotoxy(10,i+1);
		printf("%d",10-i);
	}
	gotoxy(10,12);
	printf("Marks");
	for(i=0;i<marks[0];i++)
	{
		gotoxy(20,10-i);
		printf("%c%c",178,178);
		gotoxy(20,12);
		printf("%d",i+1);
	}
	for(i=0;i<marks[1];i++)
	{
		gotoxy(25,10-i);
		printf("%c%c",219,219);
		gotoxy(25,12);
		printf("%d",i+1);
	}
	for(i=0;i<marks[2];i++)
	{
		gotoxy(30,10-i);
		printf("%c%c",177,177);
		gotoxy(30,12);
		printf("%d",i+1);
	}
	for(i=0;i<marks[3];i++)
	{
		gotoxy(35,10-i);
		printf("%c%c",219,219);
		gotoxy(35,12);
		printf("%d",i+1);
	}
	for(i=0;i<marks[4];i++)
	{
		gotoxy(40,10-i);
		printf("%c%c",176,176);
		gotoxy(40,12);
		printf("%d",i+1);
	}
	for(i=0;i<5;i++)
	{
		if(marks[i]==NULL);
		{
			gotoxy(45+(5*i),10);
			printf("-");
			gotoxy(45+(5*i),12);
			printf("0");
		}
	}
	gotoxy(15,18);
	printf("Note : - indicates that the student has not yet attempted the test");
	gotoxy(15,24);
	printf("%c%c : Topper student",219,219);
	gotoxy(45,24);
	printf("%c%c : Average student",178,178);
	gotoxy(15,27);
	printf("%c%c : Passed student",177,177);
	gotoxy(45,27);
	printf("%c%c : Failed student",176,176);
	printf("\n\n\n\t\t\t\tName : Aditya Patel");
	printf("\n\t\t\t\tSubject : Computer");
	printf("\n\n\n\t\t\t\t\t\t>>> 	CLASS PERFORMANCE   <<<");
	
	printf("\n\n\n\n\n\n\n");
	return 0;
}
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

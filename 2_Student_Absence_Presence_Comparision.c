 #include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<windows.h>
void gotoxy(int x, int y);
main()
{
	int p=27,a=3,i,total_subjects = 30; //a=absent, p = present
	system("color 1A");
	printf("\n\n\n\t\t\t\tName : Shaili Gandhi");
	printf("\n\t\t\t\tCourse : Boards");
	printf("\n\t\t\t\tSubject : Computer");
	printf("\n\n\t\t\t\tTotal sessions in this subject : %d",total_subjects);
	
	printf("\n\n\t\t\tTotal : %d\t",total_subjects);
	for(i=0;i<total_subjects;i++)
	{
		printf("%c",219);
	}
	printf("\n\n\n\t\t\tPresence : %d\t",p);
	for(i=0;i<p;i++)
	{
		printf("%c",219);
	}
	printf("\n\n\t\t\tAbsence : %d\t",a);
	for(i=0;i<a;i++)
	{
		printf("%c",219);
	}
	printf("\n\n\t\t\tAttendance is %d%%.",(p*100)/30);
}
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


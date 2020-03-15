#include<stdio.h>
#include<windows.h>
int n,i,j,s,vertical;
void gotoxy(int x, int y);
int box();
int line();
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
main()
{
	system("color 16");
	printf("\n\n\n\t\t\t\t\tSESSION-WISE CLASS ATTENDANCE GRAPHICAL REPRESENTATION");
	printf("\n\n\n\t\t\t\t\tEnter the number of sessions : ");
	  scanf("%d",&n);
	  printf("\n\t\t\t\t\tEnter the number of students who attended the class : ");
	  scanf("%d",&s);
	printf("\n\t\t\t\t\t %c%c Denotes absent",219,219);
	printf("\n\n\n\t\t\t");
	  for(i=0;i<n;i++)
	  {
	  	gotoxy(33+(6*i),14);
	  	printf("%d",i+1);
	  }
	  for(j=0;j<s;j++)
	  {
	  		gotoxy(20,16+(3*j));
	  		printf("Student %d",j+1);
	  }
	  for(j=0;j<s;j++)
	  {
	  	box();
	  }
	  line();
}
int box()
{
	line();
	  // for 2 >> 3, 3>> 4
	  for(i=0;i<n+1;i++)
	  {
	  	gotoxy(30+(6*i),16+(3*j));	
	  	printf("|");
	  	gotoxy(30+(6*i),17+(3*j));	// 30, 37, 43, 
	  	printf("|");
	  }
	  // 2 starting- ending + 5 for each
	  // if 2 >> 13, 3 >> 15
	  gotoxy(37,16);
	  printf("%c",219);
	  gotoxy(38,16);
	  printf("%c",219);
	  gotoxy(39,16);
	  printf("%c",219);
	  gotoxy(40,16);
	  printf("%c",219);
	  gotoxy(41,16);
	  printf("%c",219);
	  gotoxy(37,17);
	  printf("%c",219);
	  gotoxy(38,17);
	  printf("%c",219);
	  gotoxy(39,17);
	  printf("%c",219);
	  gotoxy(40,17);
	  printf("%c",219);
	  gotoxy(41,17);
	  printf("%c",219);
}
int line()
{
	if(n%2==0)
	  vertical==1;
	  else if(n%3==0);
	  vertical==2;
	  switch(vertical)
	  {
	  	case 1:
	  		{
	  			for(i=0;i<=((n*5)+n-1);i++)
	  			{
	  				gotoxy(30+i,15+(3*j));
	  				printf("-");
	  			}
	  		}
	  	case 2:
	  		{
	  			for(i=0;i<=((n*5)+n);i++)
	  			{
	  				gotoxy(30+i,15+(3*j));
	  				printf("-");
	  			}
	  		}
		default :
			{
	  			for(i=0;i<=((n*5)+n);i++)
	  			{
	  				gotoxy(30+i,15+(3*j));
	  				printf("-");
	  			}
	  		}
	  }		
}

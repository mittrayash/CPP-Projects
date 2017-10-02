#include <conio.h>
#include <graphics.h>

#include <time.h>
#include <dos.h>
#include <string.h>
struct time1{

    int hr,mint,sec;
};
int show(){
struct time1 a;
     int i,j,k, d,b,c;
printf("enter the hour:");
scanf("%d",&b);
printf("enter the minute:");
scanf("%d",&c);
printf("enter the second:");
scanf("%d",&d);


    a.hr = b;
    a.mint = c;
    a.sec = d;

    for(i = 0; i<24; i++)
    {
	if(a.hr == 23)
	{
	    a.hr = 0;
	}

	for(j = 0; j<60; j++)
	{
	    if(a.mint == 59)
	    {
		a.mint = 0;
	    }

	    for(k= 0; k<60; k++)
	    {
		if(a.sec == 59)
		{
		    a.sec = 0;
		}
printf("%d:%d:%d",a.hr,a.mint,a.sec);
		a.sec++;
		delay(1000);
		system("Cls");
	    }
	a.mint++;

    }

	a.hr++;

     };									     -
return 0;
}

int main() {
    int gd = DETECT, gm;
    int midx, midy;

    char timeStr[256];

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    /* mid pixel in horizontal and vertical axis */
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    while (!kbhit()) {
	cleardevice();
	setcolor(WHITE);
	setfillstyle(SOLID_FILL, WHITE);
	rectangle(midx - 250, midy - 40, midx + 250, midy + 40);
	floodfill(midx, midy, WHITE);

	show();

	setcolor(RED);
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);

	moveto(midx, midy);

	delay(1000);
    }

    getch();
    closegraph();



return 0;
}

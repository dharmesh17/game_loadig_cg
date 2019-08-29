#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void exitwindow();
void credits();
void help();

void startmenu()
{
	int gd=0,gm;
	delay(500);
	initgraph(&gd,&gm,"..//bgi/");
	cleardevice();
	setcolor( 15 );
	settextstyle( 0,1,2 );
	outtextxy( 20, 70, "C    H    E    S    S");

	int x1=25,y1=6, x2=640, y2=472;
	rectangle( x1, y1, x2, y2 );
	rectangle( 5+x2, y1, 639, y2 );
	setfillstyle(1,BROWN);
	floodfill(x1+15,y1+5,WHITE);

	//setfillstyle(7,RED);
      //	floodfill(x1+15,y1+5,WHITE);



	int winx=200,winy=220,winx2=450,winy2=220;
	int win2x=200,win2y=220,win2x2=450,win2y2=220;

	for(int i=0;i<150;i++){
	setcolor(8);
	line(winx,winy--,winx2,winy2--);
	delay(3);
	line(win2x,win2y++,win2x2,win2y2++);
	}
	winx=240,winy=220,winx2=440,winy2=220;
	win2x=240,win2y=220,win2x2=440,win2y2=220;

	for(i=0;i<140;i++){
	setcolor(YELLOW);
	line(winx,winy--,winx2,winy2--);
	delay(2);
	line(win2x,win2y++,win2x2,win2y2++);
	}
	setcolor(RED);
	settextstyle(0,0,2);
	outtextxy(250,100,"--M E N U--");
	setcolor(BLACK);
	settextstyle( 0,0,3);
	int gap=100,val=50;
	outtextxy(250,gap+=val,"PLAY");
	delay(150);
	outtextxy(250,gap+=val,"HELP");
	delay(140);
	outtextxy(250,gap+=val,"CREDITS");
	delay(130);
	outtextxy(250,gap+=val,"EXIT");
	settextstyle(0,0,1);
	setcolor(YELLOW);
	outtextxy(90,400,"keys: Use Numeric Keys to Select & 'y' or 'Enter' Key To Confrom");



     //---------------------------method1---------------------
	    /*	unsigned int opt=1;
		keylistner:
		switch(getch())
		{

			case 'w':
				  if(opt>4)
					break;
				  opt++;
				  break;
				  goto keylistneropt;
			case 's':
				  opt--;
			default:

				goto keylistner;
		}

		keylistneropt:
		switch(opt)
		{
			case 1 :
			case 2 :
			case 3 :
			case 4 :
			      setcolor(BLACK);
			      rectangle(245,140,350,180);
			      exitwindow();
			default:
				goto keylistner;
		}*/
//--------------------method2-----------------------
	 int key=0;
	 keylog:
	 setcolor(YELLOW);
	 rectangle(245,140,350,180);
	 rectangle(245,190,350,230);
	 rectangle(245,240,439,280);
	 rectangle(245,290,350,330);
	 key=0;
	 key=getch();
	 switch(key)
	 {
		case '1':
			 setcolor(BLACK);
			 rectangle(245,140,350,180);
			 if(getch()==13){ }
			 goto keylog;
		case '2':
			setcolor(BLACK);
			rectangle(245,190,350,230);
			 if(getch()==13){
			 help();}
			goto keylog;

		case '3':
			setcolor(BLACK);
			rectangle(245,240,439,280);
			if(getch()==13){
			credits();}
			goto keylog;

		case '4':
			      setcolor(BLACK);
			      rectangle(245,290,350,330);
			      if(getch()==13){
			      exitwindow();}
			      goto keylog;
		default:
			goto keylog;
	 }
	//exitwindow();
       //	getch();
}
void exitwindow()
{
	int exwinx=100,exwiny=220,exwinx2=550,exwiny2=220;
	int exwin2x=100,exwin2y=220,exwin2x2=550,exwin2y2=220;

	for(int i=0;i<100;i++){
	setcolor(BLACK);
	line(exwinx,exwiny--,exwinx2,exwiny2--);
	delay(3);
	line(exwin2x,exwin2y++,exwin2x2,exwin2y2++);
	}
	exwinx=110,exwiny=220,exwinx2=540,exwiny2=220;
	exwin2x=110,exwin2y=220,exwin2x2=540,exwin2y2=220;

	for(i=0;i<90;i++){
	setcolor(YELLOW);
	line(exwinx,exwiny--,exwinx2,exwiny2--);
	delay(2);
	line(exwin2x,exwin2y++,exwin2x2,exwin2y2++);
	}
	setcolor(BLACK);
	settextstyle(0,0,2);
	outtextxy(200,150,"  ARE YOU SURE");
	outtextxy(200,170,"YOU WANT TO EXIT");
	setcolor(BLACK);

	outtextxy(130,280,"YES");

	outtextxy(480,280,"NO");
	settextstyle(0,0,1);
	setcolor(RED);
	outtextxy(150,200,"CAUTION: (All Current Progress Will Be Lost)");
	opt:
	setcolor(YELLOW);
	rectangle(120,275,180,300);
	rectangle(470,275,520,300);
	switch(getch()){
		case 'y':
			setcolor(BLACK);
			rectangle(120,275,180,300);
			if(getch()==13){
			exit(0);}
			goto opt;
		case 'n':
			setcolor(BLACK);
			rectangle(470,275,520,300);
			if(getch()==13){
			break;}
			goto opt;
		case '1':
			setcolor(BLACK);
			rectangle(120,275,180,300);
			if(getch()==13){
			exit(0);}
			goto opt;
		case '2':
			setcolor(BLACK);
			rectangle(470,275,520,300);
			if(getch()==13){
			break;}
			goto opt;
		default:
			exitwindow();
	}
}

void credits()
{
	int exwinx=70,exwiny=220,exwinx2=600,exwiny2=220;
	int exwin2x=70,exwin2y=220,exwin2x2=600,exwin2y2=220;

	for(int i=0;i<200;i++){
	setcolor(BLACK);
	line(exwinx,exwiny--,exwinx2,exwiny2--);
	delay(3);
	line(exwin2x,exwin2y++,exwin2x2,exwin2y2++);
	}
	exwinx=80,exwiny=220,exwinx2=590,exwiny2=220;
	exwin2x=80,exwin2y=220,exwin2x2=590,exwin2y2=220;



	/* ghosting	rectangle( x1, y1, x2, y2 );
	rectangle( 5+x2, y1, 639, y2 );
	setfillstyle(1,BROWN);
	floodfill(x1+15,y1+5,WHITE);

	//setfillstyle(7,RED);
      //	floodfill(x1+15,y1+5,WHITE);



	int winx=200,winy=220,winx2=450,winy2=220;
	int win2x=200,win2y=220,win2x2=450,win2y2=220;

	for(int i=0;i<150;i++){
	setcolor(8);
	line(winx,winy--,winx2,winy2--);
	delay(3);
	line(win2x,win2y++,win2x2,win2y2++);
	}
	winx=240,winy=220,winx2=440,winy2=220;
	win2x=240,win2y=220,win2x2=440,win2y2=220;

	for(i=0;i<140;i++){
	setcolor(YELLOW);
	line(winx,winy--,winx2,winy2--);
	delay(2);
	line(win2x,win2y++,win2x2,win2y2++);
	} */



	for(i=0;i<190;i++){
	setcolor(YELLOW);
	line(exwinx,exwiny--,exwinx2,exwiny2--);
	delay(2);
	line(exwin2x,exwin2y++,exwin2x2,exwin2y2++);
	}
	setcolor(BLACK);
	settextstyle(0,0,4);
	outtextxy(120,40,".::CREATORS::.");
	settextstyle(0,0,2);
	outtextxy(200,100,"DHARMESH GURNANI");
	outtextxy(200,150,"HONEY JAIN");
	outtextxy(200,200,"SHOMESH");
	outtextxy(200,250,"-");

	getch();
	startmenu();
}


void help()
{
	int exwinx=70,exwiny=220,exwinx2=600,exwiny2=220;
	int exwin2x=70,exwin2y=220,exwin2x2=600,exwin2y2=220;

	for(int i=0;i<200;i++){
	setcolor(BLACK);
	line(exwinx,exwiny--,exwinx2,exwiny2--);
	delay(3);
	line(exwin2x,exwin2y++,exwin2x2,exwin2y2++);
	}
	exwinx=80,exwiny=220,exwinx2=590,exwiny2=220;
	exwin2x=80,exwin2y=220,exwin2x2=590,exwin2y2=220;

	for(i=0;i<190;i++){
	setcolor(YELLOW);
	line(exwinx,exwiny--,exwinx2,exwiny2--);
	delay(2);
	line(exwin2x,exwin2y++,exwin2x2,exwin2y2++);
	}
	setcolor(BLACK);
	settextstyle(0,0,4);
	outtextxy(120,40,"_.::HELP::._");
	settextstyle(0,0,1);
	outtextxy(120,100,"--------------------------------------------");
	outtextxy(120,150,"--------------------------------------------");
	outtextxy(120,200,"--------------------------------------------");
	outtextxy(120,250,"--------------------------------------------");

	getch();
	startmenu();
}
void main(){startmenu();}
#include <stdlib.h>
#include <conio.h>

#define max 100
#define dis_len 80
// 0 to 2000 valid
int canvas[25][80],cnt=81,draw=0,lc=1,lr=1;

void setZ(){
 int i,j;
 for(i=0;i<25;i++)
 for(j=0;j<80;j++)
 canvas[i][j]=0;
}

void render(){
int i;
for(i=0;i<1999;i++){

 if(canvas[i/79][i%80]==1)
 printf("@");
 else if(i/79==lr && i%80==lc){
 if(draw)
 printf("#");
 else
 printf("*");
 }
 else
 printf(" ");



 }
}
void main(){
int i,ch,temp=81;
char pr[1999];
clrscr();
setZ();
 printf("\n Trying To Animate A BOX @@@@@@ @ @ @...");
 getch();
 do{
 clrscr();

 //if(draw)
 //printf(" Column = %d , Row : %d , Draw : [%d][%d]\n",cnt%80,cnt/80,cnt/80,cnt%80);
 //else
 //printf(" Column = %d , Row : %d\n",cnt%80,cnt/80);

 render();
 /*
 for(i=0;i<cnt;i++)
 printf(" ");
 if(draw)
 printf("@");
 else
 printf("*");
 for(i=i+1;i<1999;i++)
 printf(" ");
 */
 ch=getch();
 // 77 = right ; 75 = left, 72=up
 if(ch=='a')
 if(draw==0)
 draw=1;
 else
 draw=0;

 if(ch==77)
 cnt++;
 if(ch==75)
 cnt--;
 if(ch==72)
 cnt-=80;
 if(ch==80)
 cnt+=80;
 if(cnt<81 || 1918<cnt)
 cnt=temp;


if(draw)
canvas[cnt/79][cnt%80]=1;
lc=cnt%80;
lr=cnt/79;

 temp=cnt;


 }while(ch!=27);
 clrscr();
 printf("\n Prees any key to see , record ....");
 getch();
 clrscr();
 render();

/*
clrscr();
printf("\n ");
for(i=0;i<78;i++)
printf("-");
*/
getch();
}
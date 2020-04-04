#include <windows.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "MMSystem.h"
void playOne(int);
void playElevens(int);
void playTens(int);
int main()
{
char a[10][10]={"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
char b[10][10]={"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINTEEN"};
char c[10][10]={"TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINTY"};
long int num,t;
printf("Enter number\n");
scanf("%ld",&num);
if(num==0)
{
printf("ZERO");
PlaySound(TEXT("0.wav"),NULL,SND_SYNC);
}
else if(num<9999999)
{
   if(num>= 100000)
   {
   	t=num/100000;
   	num=num%100000;
   	printf(" %s  lakh ",a[t-1]);
   	playOne(t);
   	PlaySound(TEXT("lakh.wav"),NULL,SND_SYNC);
   	
   }
   	if (num>=10000)
   	{  
	    if ((num>10999) && (num<20000))
   	   {
   		num=num%10000;
	   	printf(" %s ",b[(num/1000)-1]);
	   	playElevens((num/1000));
	   	num=num%1000;
       }
       t=num/10000;
       num=num%10000;
       printf(" %s ",c[t-1]);
       playTens(t);
	  if(num==0||num<1000)
	  {
	   	printf("THOUSAND");
	   	PlaySound(TEXT("thousand.wav"),NULL,SND_SYNC);
	   	
	  }
    }
	    
 if(num>=1000)
  {
   t=num/1000;
   num=num%1000;
   printf("%s THOUSAND",a[t-1]);
   playOne(t);
   PlaySound(TEXT("thousand.wav"),NULL,SND_SYNC);
  }
 if(num>=100)
  {
   t=num/100;
   num=num%100;
   printf(" %s HUNDRED  ",a[t-1]);
   playOne(t);
   PlaySound(TEXT("hundred.wav"),NULL,SND_SYNC);
   
  }
 if(num>10&&num<20)
  {
   t=num/10;
   num=num%10;
   printf(" %s",b[num-1]);
   playEleven(num);
   num=num%1;
  }
 if((num>19&&num<=100)||num==10)
  {
   t=num/10;
   num=num%10;
   printf(" %s",c[t-1]);
   playTens(t);
   }
 if(num<10)
 {
  printf(" %s",a[num-1]);
  playOne(num);
  }
}
else
printf("Enter small number");
getch();
}
//From 1 to 9 
void playOne(int t)
{
	switch (t)
	{
		case 1:
			PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
            break;			
		case 2:
			PlaySound(TEXT("2.wav"),NULL,SND_SYNC);
            break;
		case 3:
			PlaySound(TEXT("3.wav"),NULL,SND_SYNC);
            break;
		case 4:
			PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
            break;
		case 5:
			PlaySound(TEXT("5.wav"),NULL,SND_SYNC);
            break;
        case 6:
			PlaySound(TEXT("6.wav"),NULL,SND_SYNC);
            break;    
        case 7:
			PlaySound(TEXT("7.wav"),NULL,SND_SYNC);
            break;    
        case 8:
			PlaySound(TEXT("8.wav"),NULL,SND_SYNC);
            break;
		case 9:
			PlaySound(TEXT("9.wav"),NULL,SND_SYNC);
            break;	    
	}
}
//From 10 to 90
void playTens(int t)
{
	switch(t)
	{
		case 1:
			PlaySound(TEXT("10.wav"),NULL,SND_SYNC);
            break;
		case 2:
			PlaySound(TEXT("20.wav"),NULL,SND_SYNC);
            break;
        case 3:
			PlaySound(TEXT("30.wav"),NULL,SND_SYNC);
            break;    
		case 4:
			PlaySound(TEXT("40.wav"),NULL,SND_SYNC);
            break;
        case 5:
			PlaySound(TEXT("50.wav"),NULL,SND_SYNC);
            break;    
		case 6:
			PlaySound(TEXT("60.wav"),NULL,SND_SYNC);
            break;
        case 7:
			PlaySound(TEXT("70.wav"),NULL,SND_SYNC);
            break;
        case 8:
			PlaySound(TEXT("80.wav"),NULL,SND_SYNC);
            break;    
        case 9:
			PlaySound(TEXT("90.wav"),NULL,SND_SYNC);
            break;    
	}
	
}
//From 11 to 19
void playElevens(int t)
{
	switch (t)
	{
		case 1:
			PlaySound(TEXT("11.wav"),NULL,SND_SYNC);
            break;			
		case 2:
			PlaySound(TEXT("12.wav"),NULL,SND_SYNC);
            break;
		case 3:
			PlaySound(TEXT("13.wav"),NULL,SND_SYNC);
            break;
		case 4:
			PlaySound(TEXT("14.wav"),NULL,SND_SYNC);
            break;
		case 5:
			PlaySound(TEXT("15.wav"),NULL,SND_SYNC);
            break;
        case 6:
			PlaySound(TEXT("16.wav"),NULL,SND_SYNC);
            break;    
        case 7:
			PlaySound(TEXT("17.wav"),NULL,SND_SYNC);
            break;    
        case 8:
			PlaySound(TEXT("18.wav"),NULL,SND_SYNC);
            break;
		case 9:
			PlaySound(TEXT("19.wav"),NULL,SND_SYNC);
            break;	    
	}
	
}



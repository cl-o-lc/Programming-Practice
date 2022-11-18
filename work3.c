#include <stdio.h>
int main(void){

int CaseNum=0;
printf("번호를 선택하세요: "); 
scanf("%d",&CaseNum);

if (CaseNum==1)
{ int e1, ce1, result1=0, two=1;
 printf("8비트 이진수를 입력하세요 : ");
scanf(" %d",&e1);
ce1=e1;
for (int i=1;i<8;i++)
{if ((ce1%10)==1)
result1 = result1 + two;
ce1= ce1/10;
two = two*2;}

{if (e1<10000000)
printf("십진수로 %d 입니다.\n",result1);
else
{ int result1_2= result1;
result1_2 -= 128;
printf("십진수로 %d 입니다.\n", result1_2); }}
}

else if (CaseNum==2){
int f1, f2;
printf("첫 번째 8비트 이진수를 입력하세요 : ");
scanf(" %d", &f1);
printf("두 번째 8비트 이진수를 입력하세요 : ");
scanf(" %d", &f2);

int re=0, re2=0, ctwo=1, cf1, cf2, twotwo=1;
cf1=f1; cf2=f2;

for (int i=1;i<8;i++)
{ if ((cf1%10)==1)
re = re + ctwo;
cf1 = cf1/10;
ctwo = ctwo*2;}

for (int i=1;i<8;i++)
{if ((cf2%10)==1)
re2 = re2 + twotwo;
cf2 = cf2/10;
twotwo = twotwo*2;}

int n1;
{if ((f1<10000000)&&(f2<10000000)){}

else if ((f1<10000000)&&(f2>10000000)){ 
re2 -= 128;
if ((re+re2)>0)
n1 = 0;
else
n1 = 1;}

else if ((f1>10000000)&&(f2<10000000)){
re -= 128;
if ((re2+ re)>0)
n1 = 0;
else
n1 = 1;}

else
{re -= 128; re2 -= 128;
n1 = 1;}}

int result, cresult;
result= re+re2;
cresult = result;
int n2, n3, n4, n5, n6, n7, n8;
n8 = result%2;  result/=2;
n7 = result%2; result/=2;
n6 = result%2; result/=2;
n5 = result%2; result/=2;
n4 = result%2; result/=2;
n3 = result%2; result/=2;
n2 = result%2; 
printf("결과는 이진수로 %d%d%d%d%d%d%d%d이고,십진수로 %d입니다.\n",n1,n2,n3,n4,n5,n6,n7,n8,cresult);}

else{
int g1, g2, cg1, cg2;
printf("첫 번째 8비트 이진수를 입력하세요: ");
scanf("%d", &g1);
printf("두 번째 8비트 이진수를 입력하세요: ");
scanf("%d", &g2);

int total1=0, total2=0, mul1=1, mul2=1;
cg1 = g1; cg2 = g2;
for (int i=1; i<8; i++)
{if ((cg1%10)==1)
total1 = total1+mul1;
cg1 /= 10; mul1*=2;}
for (int i=1; i<8; i++)
{if ((cg2%10)==1)
total2 = total2+mul2;
cg2 /= 10; mul2*=2; }

if (g1>10000000)
total1 -= 128;
if (g2>10000000)
total2 -= 128;
int last, clast, m1=0;
last = total1 - total2; clast = last;
if (last<0)
{clast += 128;
m1=1;}
int m2, m3, m4, m5, m6, m7, m8;
m8 = clast%2;  clast/=2;
m7 = clast%2;  clast/=2;
m6 = clast%2;  clast/=2;
m5 = clast%2;  clast/=2;
m4 = clast%2;  clast/=2;
m3 = clast%2; clast/=2;
m2 = clast%2; 

printf("결과는 이진수로 %d%d%d%d%d%d%d%d 이고, 십진수로 %d입니다.\n",m1, m2, m3, m4, m5, m6, m7, m8 ,last); }
return 0; }

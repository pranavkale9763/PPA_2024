#include<stdio.h>
int Multiply(int No1,int No2)
{
int Sum = 0;
Sum = No1 * No2;
return Sum;
}
int main()
{
int Value1 = 22;
int Value2 = 20;
int Ans = 0;
Ans = Multiply(Value1,Value2);
printf("Multiply is = %d",Ans);
return 0;
}
// For Loop
#include<iostream>
using namespace std;
int main()
{
    int i;                 //counter variable
    for( i=1;i<=10;i++)   // for(initialization;condition; updation)
    {
        cout<<"HELLO WORLD !"<<endl;
    }

// While Loop
i=10;
while (i>0)
{
    cout<<"HELLO WORLD !"<<endl;
    i--;
}

// Do-While loop : it will execute atleast once even if the condition gets false.
i=10;
int n;
do
{
    cout<<"HELLO WORLD !"<<endl;
    i--;
}while(i>0);

// jumps in loops - to control the flow of a program using - BREAK & CONTINUE

int date, pocketmoney=3000;
for (date=1;date<=30;date++)
{
    if (date % 2 == 0)
    {
        continue;         //continue statement is used to skip to the next iteration of the loop.
    }
    if (pocketmoney ==0)
    {
        break;           // break statement is used to terminate a loop.
    }
    cout<<"Go out today !";
    pocketmoney=pocketmoney-300;
}


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  clrscr();
  randomize();
  int n=100,i;
  cout<<"\n Please Think a number of your choice\n";
  system("pause");
  cout<<"\n After that multipy it by 2\n";
   system("pause");
   i= random(n)+1;
  cout<<"\n Now please add the number"<<i<<" into the resultant\n";
   system("pause");
  cout<<"\n If you are done, divide the resultant number by 2\n";
   system("pause");
  cout<<"\n Take your time....:)\n";
   system("pause");
  cout<<"\n so the last is that you subtract the number you first thought of by the resultant number\n";
   system("pause");
  cout<<"\n The most awaited moment is here....the number you first thought is..."<<i/2<<endl;
   system("pause");
  cout<<"\n AM I RIGHT?? \n OFCOURSE I KNOW I AM!!";
   getch();
}
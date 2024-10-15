#include <iostream>
#include<fstream>
using namespace std;

 int addition (int x, int y)
{
 int a;
 ifstream boczx("input.txt");
 while(boczx>>x>>y)
{
a = x + y;
 return (a); 
  }
}
 main ()
{
 int x,y;
   ifstream boczx("input.txt");
    while(boczx>>x>>y)
{ 
 int sum = x+y;
  cout <<sum<<endl;
 }

system("pause");
}

//Agoo MSFT Inc. V1.1 10/15/2024

#include<iostream>
using namespace std;
main()
{
  int num;
  cout<<"Enter a four digit number: ";
  cin>>num;
  int a=num%10;
  num=num/10;
  int b=num%10;
  num=num/10;
  int c=num%10;
  num=num/10;
  int d=num%10;
  num=num/10;
  int sum= a+b+c+d;
  cout<<"The sum of all the digits is: "<<sum;
}
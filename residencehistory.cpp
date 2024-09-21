#include<iostream>
using namespace std;
main()
{
  int age;
  int timesmoved;
  cout<<"Enter the person's age: ";
  cin>>age;
  cout<<"Enter the number of times they have moved: ";
  cin>>timesmoved;
  int cal=age/(timesmoved+1);
  cout<<"Average number of years lived in the same house: "<<cal;
}
  
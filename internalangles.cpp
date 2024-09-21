#include<iostream>
using namespace std;
main()
{
  int sides;
  cout<<"Enter the total number of sides of the polygon:";
  cin>>sides;
  int angles=(sides-2)*180;
  cout<<"The total number of internal angles of the input polygon are:"<<angles;
}
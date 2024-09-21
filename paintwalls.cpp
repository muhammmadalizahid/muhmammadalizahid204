#include<iostream> 
using namespace std;
main()
{
  int sqm, width, height;
  cout<<"Number of square meters you can paint: ";
  cin>>sqm;
  cout<<"Width of the single wall (in meters): ";
  cin>>width;
  cout<<"Height of tht single wall (in meters): ";
  cin>>height;
  int paint= sqm/(width*height);
  cout<<"Number of walls you can paint: "<<paint;
}
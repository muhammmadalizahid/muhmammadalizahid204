#include<iostream>
using namespace std;
main()
{
  int minutes;
  int frames;
  cout<<"Number of minutes:";
  cin>>minutes;
  cout<<"Frames per second:";
  cin>>frames;
  int fps=(minutes*60)*frames;
  cout<<"Frames per second:"<<fps;
}
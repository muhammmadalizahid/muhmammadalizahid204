#include<iostream>
using namespace std;
main()
{
  int initialv;
  int acc;
  int time;
  cout<<"Enter initial velocity (m/s):";
  cin>>initialv;
  cout<<"Enter accelaration (m/s^2):";
  cin>>acc;
  cout<<"Enter time (s):"; 
  cin>>time;
  int finalv= initialv+(acc*time);
  cout<<"The final velocity is (m/s) is:"<<finalv;
} 

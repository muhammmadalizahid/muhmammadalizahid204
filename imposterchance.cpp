#include<iostream>
using namespace std;
main()
{
  float players;
  float imposters;
  cout<<"Enter Imposter Count:";
  cin>>imposters;
  cout<<"Enter Player Count:";
  cin>>players;
  float chance=100*(imposters/players);
  cout<<"The chance for being an imposter:"<<chance<<"%";

}
#include<iostream>
using namespace std;
main()
{
  string name;
  float weightloss;
  cout<<"Enter the Name of the Person:";
  cin>>name;
  cout<<"Enter the target weight loss in kilograms:"; 
  cin>>weightloss;
  float requiredtime=weightloss*15;
  cout<<name<<" will need "<<requiredtime<<" days to lose "<<weightloss<<" kg of weight by following the doctor's suggestions.";
} 
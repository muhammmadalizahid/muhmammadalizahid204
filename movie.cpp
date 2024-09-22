#include<iostream>
using namespace std;
int main()
{
  string movie;
  float adultprice,childprice,adultsold,childsold;
  float percharity;
  cout<<"Enter the adult ticket price: $";
  cin>>adultprice;
  cout<<"Enter the child ticket price: $";
  cin>>childprice;
  cout<<"Enter the number of adult tickets sold: ";
  cin>>adultsold;
  cout<<"Enter the number of child tickets sold: ";
  cin>>childsold;
  cout<<"Enter the percentage of the amount to be donated to charity: ";
  cin>>percharity;
  float revenue,charity,profit;
  revenue=(childprice*childsold)+(adultprice*adultsold);
  charity=revenue*10/100;
  profit=revenue-charity;
  cout<<"Total amount generated from ticket sales: $"<<revenue<<endl;
  cout<<"Donation to charity (10%): $"<<charity<<endl;
  cout<<"Remaining amout after donation: $"<<profit;
}  

  
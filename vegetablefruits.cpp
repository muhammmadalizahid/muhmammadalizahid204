#include<iostream>
using namespace std;
main()
{
  float vegprice;
  float fruitprice;
  int totalveg;
  int totalfruit;
  cout<<"Enter vegetable price per kilogram (in coins): ";
  cin>>vegprice;
  cout<<"Enter fruit price per kilogram (in coins): ";
  cin>>fruitprice;
  cout<<"Enter total kilograms of vegetables: ";
  cin>>totalveg;
  cout<<"Enter total kilograms of fruits: ";
  cin>>totalfruit;
  float earningveg=(totalveg*vegprice)/1.94;
  float earningfruit=(totalfruit*fruitprice)/1.94;
  float totalearnings=earningfruit+earningveg;
  cout<<"Total earning in Rupees (Rps): "<<totalearnings; 
  
}

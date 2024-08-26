#include<iostream>
using namespace std;

class Car
{
  public:
  string brand;
  string model;
  int year;
  
};

int main()
{
  Car carobj1;
  carobj1.brand="TATA";
  carobj1.model=" nexon ";
  carobj1.year= 2005;
  
  //creating another object of car 
  Car carobj2;
  carobj2.brand="bajaj";
  carobj2.model=" platina ";
  carobj2.year= 2001;
  
  cout<<carobj1.brand<<carobj1.model<<carobj1.year<<endl;
  cout<<carobj2.brand<<carobj2.model<<carobj2.year<<endl;
  
  return 0;
}
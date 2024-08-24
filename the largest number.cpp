#include <iostream>
using namespace std;

int main() 
{
  int a,b,c;
  cout<<"Put any three number:";
  cin>>a; cin>>b; cin>>c;
  if(a>=b&&a>=c)
  {
   cout<<"the largest no is:"<<a; 
  }
  if(b>=a&&b>=c)
{
  cout<<"the largest no is:"<<b;
}
  if(c>=a&&c>=b)
  {
    cout<<"the largest no is:"<<c;
  }
    return 0;
}
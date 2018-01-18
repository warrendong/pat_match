#include<iostream> 
using namespace std;
int main()
{
  int n,m=0;
  cin>>n;
  while(n!=1)
  {
    if(n%2==0)
    {
      n=n/2;
    }
    else
    {
      n=(3*n+1)/2;
    }
    m++;
  }
  cout<<m<<endl;
  return 0;
}

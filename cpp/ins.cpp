#include<iostream>
using namespace std;
int main()

{
  int i,j,n,e,t,loc,arr[6];

  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter elements: ";

  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter location of element to insert: ";
  cin>>loc;
  cout<<"Enter element to be inserted: ";
  cin>>e;
  j=loc-1;
  t=n;

  while(t>j)
  {
    arr[t]=arr[t-1];
    t--;
  }
  arr[j]=e;

  cout<<"Array after insertion:";
  for(int k=0;k<n+1;k++)
  {
    cout<<" "<<arr[k];
  }
  cout<<"\n";
}

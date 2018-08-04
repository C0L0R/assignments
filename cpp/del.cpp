#include<iostream>
using namespace std;
int main()

{
  int i,j,n,loc,arr[6];

  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter elements: ";

  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter location of element to delete: ";
  cin>>loc;
  j=loc-1;

  while(j<n-1)
  {
    arr[j]=arr[j+1];
    j++;
  }
  n=n-1;
  cout<<"Array after deletion:";

  for(int i=0;i<n;i++)
  {
    cout<<" "<<arr[i];
  }
  cout<<"\n";
}

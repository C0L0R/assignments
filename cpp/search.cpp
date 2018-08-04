#include<iostream>
using namespace std;
int main()

{
  int i,n,e,loc,arr[6],flag;

  cout<<"Enter number of elements: ";
  cin>>n;
  cout<<"Enter elements: ";

  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter the element to be searched: ";
  cin>>e;

  for(i=0;i<n;i++)
  {
    if(arr[i]==e)
    {
      cout<<"The element is at location: "<<i<<endl;
      flag++;
    }
  }
  if(flag==0)
  {
    cout<<"Error! No such element found. "<<endl;
  }
}

#include<iostream>
using namespace std;

int main()
{
  int expo=0,t1,t2,t3,p1[20],p2[20],p3[40],i,j,k;
  float coeff=0;

  //1st Polynomial
  cout<<"Enter number of terms in Polynomial 1: ";
  cin>>t1;
  p1[0]=t1;

  cout<<"\nEnter terms in Polynomial 1"<<endl;
  for(int i=1;i<=t1;i++)
  {
    cout<<"\nEnter term "<<i<<endl<<"Enter Coefficient: ";
    cin>>coeff;
    p1[2*i-1]=coeff;
    cout<<"Enter Exponent: ";
    cin>>expo;
    p1[2*i]=expo;
  }

  //2nd Polynomial
  cout<<"\nEnter number of terms in Polynomial 2: ";
  cin>>t2;
  p2[0]=t2;

  cout<<"\nEnter terms in Polynomial 2"<<endl;
  for(int i=1;i<=t2;i++)
  {
    cout<<"\nEnter term "<<i<<endl<<"Enter Coefficient: ";
    cin>>p2[2*i-1];
    cout<<"Enter Exponent: ";
    cin>>p2[2*i];
  }
  t3=t1+t2;
  p3[0]=t3;

  for(int i=1;i<=t3;i++)
  {
    if(p1[2*i]=p2[2*i])
    {
      p3[2*i-1]=p1[2*i-1]+p2[2*i-1];
      p3[2*i]=p1[2*i];
    }
    /*else if(p1[2*i]>p2[2*i])
    {

    }
    else
    {

    }
  }
  while(p1[2*i]=p2[2*i])
  {
    p3[2*i-1]=p1[2*i-1]+p2[2*i-1];
    i++;
  }*/
  }

  cout<<"Array 1:";
  for(int k=0;k<1+t1*2;k++)
  {
    cout<<" "<<p1[k];
  }
  cout<<"\n";

  cout<<"Array 2:";
  for(int k=0;k<1+t2*2;k++)
  {
    cout<<" "<<p2[k];
  }
  cout<<"\n";

  cout<<"Array 3:";
  for(int k=0;k<1+t3*2;k++)
  {
    cout<<" "<<p3[k];
  }
  cout<<"\n";
}

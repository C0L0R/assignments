@@ -0,0 +1,163 @@
#include<iostream>
#include<string>
using namespace std;

int main()
{
  char str1[10], str2[10];
  int i,j,l1,l2,choice;
  cout<<"Enter string 1: ";
  cin>>str1;
  cout<<"Enter string 2: ";
  cin>>str2;

cout<<"\nEnter any option\n"<<endl<<"Enter (1) to find length of string"<<endl<<"Enter (2) to move string 1 to string 2"<<endl<<"Enter (3) to move string 2 to string 1"<<endl<<"Enter (4) to copy string 1 to string 2"<<endl<<"Enter (5) to copy string 2 to string 1"<<endl<<"Enter (6) to reverse string"<<endl<<"Enter (7) to compare length of strings"<<endl<<"Enter (8) to find substring in string"<<endl;
cin>>choice;

switch(choice)
  {
    case 1: //To find length of String
        {
          for(i=0;str1[i]!='\0';i++);
          for(j=0;str2[j]!='\0';j++);
          l1=i;
          l2=j;
          cout<<"\nThe length of the string 1 is "<<l1<<".\n"<<"The length of the string 2 is "<<l2<<"."<<endl;
          break;
        }
    case 2: //Moves string 1 to string 2
        {
          int i=0;
          while(str2[i]!='\0')
            {
              str1[i]=str2[i];
              i++;
            }
          str1[i]='\0';
          cout<<"\nMoved string: "<<str1<<endl;
          cout<<str2<<endl;
          break;
        }
    case 3: //Moves string 2 to string 1
        {
          int i=0;
          while(str1[i]!='\0')
            {
              str2[i]=str1[i];
              i++;
            }
          str2[i]='\0';
          cout<<"\nMoved string: "<<str2<<endl;
          cout<<str2<<endl;
          break;
        }
    case 4: //Copy string 1 to string 2
        {
          int i=0;
			    while(str1[i]!='\0')
				  i++;
			    for(int j=0;str2[j]!='\0';j++)
			       {
               str1[i]=str2[j];
               i++;
             }
          str1[i]='\0';
          cout<<"\nCopied string: "<<str1<<endl;
          cout<<str2<<endl;
          break;
        }
    case 5: //Copy string 2 to string 1
        {
          int i=0;
          while(str2[i]!='\0')
          i++;
          for(int j=0;str1[j]!='\0';j++)
            {
              str2[i]=str1[j];
              i++;
            }
          str2[i]='\0';
          cout<<"\nCopied string: "<<str2<<endl;
          cout<<str2<<endl;
          break;
        }
    case 6: //To reverse string
        {
          {
          int len=0,i=0;
          while(str1[i]!='\0')
            {
              len=len+1;
              i++ ;
            }
          cout<<"\nReversed string 1: ";
          for(i=len-1;i>=0;i--)
            {
              cout<<str1[i];
            }
          }
          {
          int len=0,i=0;
          while(str2[i]!='\0')
            {
              len=len+1;
              i++ ;
            }
          cout<<"\nReversed string 2: ";
          for(i=len-1;i>=0;i--)
            {
              cout<<str2[i];
            }
          cout<<"\n";
          }
          break;
        }
    case 7: //To check if equal
        {
          for(i=0;str1[i]!='\0';i++);
          for(j=0;str2[j]!='\0';j++);
          l1=i;
          l2=j;

          if (l1>l2)
          {
            cout<<"\nString 1 is greater than String 2."<<endl;
          }
          else if (l1<l2)
          {
            cout<<"\nString 2 is greater than String 1"<<endl;
          }
          else
          {
            cout<<"\nString 1 is equal to String 2."<<endl;
          }
          break;
        }
    case 8: //To find subtring
        {
          int len=0;
          for(len=0;str2[len]!='\0';len++);
          for(i=0,j=0;str1[i]!='\0' && str2[j]!='\0';i++)
          {
            if(str1[i]==str2[j])
            {
              j++;
            }
            else
            {
              j=0;
            }
          }
          if(j==len)
          {
            cout<<"\nSubstring found at position "<<i-j+1<<"."<<endl;
            cout<<"Found substring is: "<<str2<<endl;
          }
          else
          {
            cout<<"\nSubstring not found"<<endl;
          }
        }
  }
return 0;
}

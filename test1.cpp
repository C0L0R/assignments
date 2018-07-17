#include<iostream>
#include<string>
using namespace std;

int main()
{
  char str1[10], str2[10], choice;
  int i,j;
  cout<<"Enter string 1: ";
  cin>>str1;
  cout<<"Enter string 2: ";
  cin>>str2;

cout<<"\nEnter any option\n"<<endl<<"To find length of string enter (l)"<<endl<<"To copy string 1 to string 2 enter (c)\n"<<"To copy string 2 to string 1 enter (d)"<<endl;
cin>>choice;

switch(choice)
  {
    case 'l':
        {
          for(i=0;str1[i]!='\0';i++);
          for(j=0;str2[j]!='\0';j++);
          cout<<"The length of the string 1 is "<<i<<".\n"<<"The length of the string 2 is "<<j<<"."<<endl;
          break;
        }
    case 'c': //Moves string 1 to string 2
        {
          int i=0;
          while(str2[i]!='\0')
            {
              str1[i]=str2[i];
              i++;
            }
          str1[i]='\0';
          cout<<"Copied string: "<<str1<<endl;
          break;
        }
    case 'd': //Moves string 2 to string 1
        {
          int i=0;
          while(str1[i]!='\0')
            {
              str2[i]=str1[i];
              i++;
            }
          str2[i]='\0';
          cout<<"Copied string: "<<str2<<endl;
          break;
        }
    case 'e': //Copy string 1 to string 2
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
          cout<<"Copied string: "<<str1<<endl;
          break;
        }
    case 'f': //Copy string 2 to string 1
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
          cout<<"Copied string: "<<str2<<endl;
          break;
        }
  }
return 0;
}

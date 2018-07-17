#include<iostream>
#include<string>
using namespace std;

class String
{

	int len;
	public:
		inline void display(char c[])
		{
			cout<<c;
		}
		int length(char *s)
		{
			int i=0;
			while(s[i]!='\0')
			{
				i++;
			}
			return i;
		}
		void copy(char *a,char *b)
		{
			int i=0;
			while(a[i]!='\0')
			{
				b[i]=a[i];
				i++;
			}
			b[i]='\0';
		}
		void concat(char *a,char *b)
		{
			int i=0;
			while(a[i]!='\0')
				i++;
			for(int j=0;b[j]!='\0';j++)
			{
				a[i]=b[j];
				i++;
			}
			a[i]='\0';
		}
		void search(char *a,char *b)
		{
			int len=length(b);
			int count,temp,flag=0;
			for(int i=0;a[i]!='\0';i++)
			{
				temp=i;
				count=0;
				for(int j=0;b[j]!='\0';j++)
				{
					if(a[temp]==b[j])
					{
						count++;
					}
					temp++;
					if(count==len)
					{
						cout<<"\n"<<b<<" is present at Location: "<<i+1;
						flag=1;
					}
				}
			}
			if(flag==0)
				cout<<endl<<b<<" is not present in "<<a<<endl;
		}
		void reverse(char *a)
		{
			int len=length(a);
			char temp;
			int j=len-1;
			for(int i=0;i<(len/2);i++)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				j--;
			}
		}
		void compare(char *a,char *b)
		{
			int i=0;
			while(a[i]==b[i] && a[i]!='\0')
				i++;
			if(a[i]>b[i])
				cout<<endl<<a<<" is greater than "<<b<<endl;
			else if(a[i]<b[i])
				cout<<endl<<a<<" is less than "<<b<<endl;
			else
			  cout<<"\n"<<a<<" is equal to "<<b<<endl;
		}
		int frequency(char *a,char ch)
		{
			int count=0;
			for(int i=0;a[i]!='\0';i++)
			{
				if(a[i]==ch)
					count++;
			}
			return count;
		}
		void deleteS(char *a,int start,int l)
		{
			int i=start-1;
			while(a[i]!='\0')
			{
				a[i]=a[i+l];
				i++;
			}
		}
		void delChar(char *a,char ch)
		{
			for(int i=0;a[i]!='\0';i++)
			{
				if(a[i]==ch)
				{
					int j=i;
					while(a[j]!='\0')
					{
						a[j]=a[j+1];
						j++;
					}
					a[j]='\0';
				}
			}
		}
		bool palindrome(char *a)
		{
			char rev[50];
			copy(a,rev);
			reverse(rev);
			int len=length(a);
			int count=0;
			for(int i=0;a[i]!='\0';i++)
			{
				if(a[i]==rev[i])
					count++;
			}
			if(count==len)
				return true;
			else
				return false;
		}

};
int main()
{

	char str[50],str2[50],ch;
	String s1;
	int choice,start,len;
	bool flag;
	do
	{
	cout<<"\nString Operations:\n1.length\n2.copy\n3.concatenate\n4.SEARCH sUBSTRING.\n5.Reverse"
	<<"\n6.Compare Strings\n7.Frequency of character\n8.Delete from string by givinfg locations"
	<<"\n9.Delete occurance of characher\n10.Check Palindrome\nEnter choice:";
	cin>>choice;
	switch(choice)
	{
	case 1:
	cout<<"Enter String:";
	cin>>str;
	cout<<"\nLength: "<<s1.length(str);
	break;
	case 2:
	cout<<"Enter String:";
	cin>>str;
	s1.copy(str,str2);
	cout<<"Copied String:"<<str2;
	break;
	case 3:
		cout<<"Enter String:";
	cin>>str;
	cout<<"\nENter String to concatenate: ";
	cin>>str2;
	s1.concat(str,str2);
	cout<<"\nAfter Concatenate: "<<str;
	break;
	case 4:
			cout<<"Enter String:";
	cin>>str;
	cout<<"\nENter String to search: ";
	cin>>str2;
	s1.search(str,str2);
	break;
	case 5:
	cout<<"Enter String:";
	cin>>str;
	s1.reverse(str);
	cout<<"\nReverse : "<<str;
	break;
	case 6:
	cout<<"Enter String:";
	cin>>str;
	cout<<"\nENter another string";
	cin>>str2;
	s1.compare(str,str2);
	break;
	case 7:
		cout<<"Enter String:";
	cin>>str;
	cout<<"\nEnter char to find freq: ";
	cin>>ch;
	cout<<"\nFrequency of "<<ch<<" is :"<<s1.frequency(str,ch);
	break;
	case 8:
	cout<<"Enter String:";
	cin>>str;
	cout<<"Enter start and length to delete chars from string: ";
	cin>>start>>len;
	s1.deleteS(str,start,len);
	cout<<"\nAfter Deleting: "<<str;
	break;
	case 9:
		cout<<"Enter String:";
	cin>>str;
	cout<<"Enter chracter to delete its occurences: ";
	cin>>ch;
	s1.delChar(str,ch);
	cout<<"After Deletion: "<<str;
	break;
	case 10:
		cout<<"Enter String:";
	cin>>str;
	if(s1.palindrome(str))
		cout<<endl<<str<<" is palindrome.";
	else
	cout<<endl<<str<<" is not palindrome.";
	break;
}
}while(choice!=0);

return 0;
}

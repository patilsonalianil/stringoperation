//============================================================================
// Name        : string_oper.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
class stringoperation
	{
	char s1[10],s2[10],s3[10],s4[10],s5[10];
			int i,j,len1=0,len2=0;
	public:
	void get_string()
		{
		cout<<"enter first string ";
		cin>>s1;
		cout<<" \n enter second string ";
		cin>>s2;
		}
	void copy()
		{
				cout<<" \n copied string is ";
			for(i=0;s1[i]!='\0';i++)
			{
				s3[i]=s1[i];
			}
				s3[i]='\0';
				cout<<s3;
		}
	void length1()
		{
				for(i=0;s1[i]!='\0';i++)
				{
					len1=len1+1;
				}
					cout<<" \n length of string 1 is "<<len1;
		}
	void length2()
			{
					for(i=0;s2[i]!='\0';i++)
					{
						len2=len2+1;
					}
						cout<<" \n length of string 2 is "<<len2;
			}
   	void concate()
		{
			for(i=0;s1[i]!='\0';i++)
			{
				s4[i]=s1[i];
			}
			for(j=0;s2[j]!='\0';j++)
			{
				s4[i]=s2[j];
				i++;
			}
				s4[i]='\0';
				cout<<"\n concatenated string is "<<s4;
		}
   	void reverse()
   		{
   			i=len1;
   			for(j=0;j<len1;j++)
   			{
   				s5[j]=s1[i-1];
   				i--;
   			}
   				cout<<"\n reversed string is "<<s5;
   		}
   	void compare()
   		{
   		if(s1==s2)
   		{
   			cout<<"\n string 1 and 2 are same";
   		}
         if(len1==len2)
   				{
   					for(i=0;i<=len1;i++)
   					{
   						if(i==len1)
   						{
   						cout<<"\n string 1 and 2 are same";
   						}
   						else if(s1[i]==s2[i])
   						{

   						}
   						else
   						{
   							cout<<"\n string 1 and 2 are not same";
   							break;
   						}
    				}
   				}
   			else
   				{
   					cout<<"\n string 1 and 2 are not same";
   				}
   		}
	};
int main()
{
	stringoperation c1;
	c1.get_string();
	c1.copy();
	c1.length1();
	c1.length2();
	c1.concate();
	c1.reverse();
	c1.compare();
	return (0);
}

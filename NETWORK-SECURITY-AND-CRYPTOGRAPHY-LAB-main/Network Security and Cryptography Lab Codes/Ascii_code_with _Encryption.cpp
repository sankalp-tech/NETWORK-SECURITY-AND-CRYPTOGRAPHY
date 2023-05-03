#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i;
	char ch;
	cout<<"enter your text \n";
	cin.getline(str, 100);
	cout<<"original ascii values: \n";
	for (i=0; str[i]!='\0';i++)
	{
		ch=str[i];
		cout<<ch<<"\t"<<int(ch);
		cout<<"\n";		
	}
int key;
cout<<"Enter the Shift key value:";
cin>>key;
for(i=0;str[i]!='\0';i++)
{
	ch=str[i];
	if(ch>='a' && ch<='z')
	{
	ch=ch+key;
	if(ch>'z')
	{
		ch=ch-'z'+'a'-1;
	}
	str[i]=ch;
    }
	else if(ch>='A' && ch<='Z')
	{
	ch=ch+key;
	if(ch>'Z')
	{
		ch=ch-'Z'+'A'-1;
	}
	str[i]=ch;
} }
cout<<"New ASCII value is:\n";

	for (i=0; str[i]!='\0';i++)
	{
		ch=str[i];
		cout<<ch<<"\t"<<int(ch);
		cout<<"\n";		
	}
}

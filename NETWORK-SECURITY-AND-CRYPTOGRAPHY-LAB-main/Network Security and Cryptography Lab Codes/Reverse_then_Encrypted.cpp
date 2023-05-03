#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char msg[100], rmsg[100];
	int len, i, j;
	cout<<"Input message\n";
	cin.getline(msg,100);
	len=strlen(msg); //abcde  len=5
	i=len-1;
	j=0;
	while(i>=0)
	{
		rmsg[j]=msg[i];
		j++;
		i--;
	}
	rmsg[j]='\0';
	cout<<endl;
	cout<<"Reverse of string\n";
	cout<<rmsg;
	int key;
	char ch;
	cout<<"\nEnter Shift Key=";
	cin>>key;
	for(i=0;rmsg[i]!='\0';i++)
	{
		ch=rmsg[i];
		if(ch>='a' && ch<='z')
		{
			ch=ch+key;
		if(ch>'z')
		{
			ch=ch-'z'+'a'-1;
		}
		rmsg[i]=ch;
	}
		else if(ch>='A' && ch<='Z')
		{
			    ch=ch+key;
		if(ch>'Z')
		{
			ch=ch-'Z'+'A'-1;
		}
	}
		rmsg[i]=ch;
	}
	cout<<"Encrypted Message are\n";
	cout<<rmsg;
}

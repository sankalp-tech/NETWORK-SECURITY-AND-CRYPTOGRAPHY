#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string plain , cipher, key;
    cout<<"Enter plaintext:";
    cin>>plain;
    cout<<"Enter key:";
	cin>>key;
    int n = plain.size();
    map<int , char>mp;
    for(int i = 0; i <= 25; i++){
      char c =(char) (97 + i);
      mp[i] = c;
    }
    for(int i = 0; i<n;i++){
      int j = (plain[i] - 97 + 3) % 26;
      int k = (key[i] - 97 + 3) % 26;
      int final = (j+k) % 26;
      cipher += mp[final];
    }
    cout<<"Encrypted message:"<<cipher<<endl;
    
    
    return 0;
}

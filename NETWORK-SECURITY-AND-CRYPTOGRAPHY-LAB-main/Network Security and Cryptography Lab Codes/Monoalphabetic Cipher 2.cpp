#include <iostream>
#include <string>

using namespace std;

int main()
{
    string plainText;
    string cipherText = "";
    
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char key[26] = {'X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W'};
    
    cout << "Enter Plain Text : ";
    getline(cin, plainText);
    
    for(int i = 0; i < plainText.length(); i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(plainText[i] == alphabet[j])
            {
                cipherText += key[j];
            }
        }
    }
    
    cout << "\nCipher Text : " << cipherText;
    return 0;
}

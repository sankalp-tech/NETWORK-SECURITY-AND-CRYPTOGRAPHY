#include <iostream>
#include <string>
using namespace std;

string decrypt(string encrypted, int key)
{
    string decrypted = "";
 
    for (int i = 0; i < encrypted.length(); i++)
    {
        if (encrypted[i] >= 'a' && encrypted[i] <= 'z')
        {
            decrypted += char(int(encrypted[i] - key - 97) % 26 + 97);
        }
        else
        {
            decrypted += encrypted[i];
        }
    }
    return decrypted;
}
int main()
{
    string encrypted;
    int key;
 
    cout << "Enter the encrypted string: ";
    getline(cin, encrypted);
    cout << "Enter the key: ";
    cin >> key;
 
    cout << "Decrypted string: " << decrypt(encrypted, key);
 
    return 0;
}

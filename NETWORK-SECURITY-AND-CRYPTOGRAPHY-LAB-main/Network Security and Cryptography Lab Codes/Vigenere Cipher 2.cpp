#include <iostream> 
#include <string> 
using namespace std; 
  
// Function to encrypt the string 
string encrypt(string text, string key) 
{ 
    string result = ""; 
  
    for (int i = 0; i < text.length(); i++) 
    { 
        // Encrypting Uppercase letters 
        if (isupper(text[i])) 
            result += char(int(key[i % key.length()] + text[i]) % 26 + 65); 
  
        // Encrypting Lowercase letters 
        else
            result += char(int(key[i % key.length()] + text[i]) % 26 + 97); 
    } 
  
    return result; 
} 
  
// Function to decrypt the string 
string decrypt(string text, string key) 
{ 
    string result = ""; 
  
    for (int i = 0; i < text.length(); i++) 
    { 
        // Decrypting Uppercase letters 
        if (isupper(text[i])) 
            result += char(int(text[i] - key[i % key.length()] + 26) % 26 + 65); 
  
        // Decrypting Lowercase letters 
        else
            result += char(int(text[i] - key[i % key.length()] + 26) % 26 + 97); 
    } 
  
    return result; 
} 
  
int main() 
{ 
    string text, key; 
    cout << "Enter the plain text:" << endl; 
    cin >> text; 
    cout << "Enter the key:" << endl; 
    cin >> key; 
  
    cout << "Ciphertext : " << encrypt(text, key); 
  
    cout << "\nDecrypted Text : " << decrypt(encrypt(text, key), key); 
  
    return 0; 
}

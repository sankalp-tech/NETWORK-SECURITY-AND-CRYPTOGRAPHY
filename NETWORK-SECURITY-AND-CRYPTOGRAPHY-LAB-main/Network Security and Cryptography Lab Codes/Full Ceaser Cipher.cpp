#include <iostream>
#include <string>
using namespace std;

// Function to encrypt the string using ceaser cipher
string ceaserCipherEncrypt(string plainText, int key)
{
  string cipherText = "";

  // Traverse through each character
  for (int i = 0; i < plainText.length(); i++)
  {
    // Encrypt only alphabets
    if (plainText[i] >= 'a' && plainText[i] <= 'z')
    {
      cipherText += char(int(plainText[i] + key - 97) % 26 + 97);
    }
    else if (plainText[i] >= 'A' && plainText[i] <= 'Z')
    {
      cipherText += char(int(plainText[i] + key - 65) % 26 + 65);
    }
    else
    {
      cipherText += plainText[i];
    }
  }

  return cipherText;
}

// Driver code
int main()
{
  string plainText = "Hello World";
  int key = 3;

  string cipherText = ceaserCipherEncrypt(plainText, key);
  cout << "Cipher Text : " << cipherText;

  return 0;
}

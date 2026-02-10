#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkIfPangram(string sentence)
{
    vector<bool> alpha(26, false);

    for (int i = 0; i < sentence.size(); i++)
    {
        int index = sentence[i] - 'a';
        alpha[index] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
            return 0;
    }
    return 1;
}

int main()
{
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);

    if (checkIfPangram(sentence))
        cout << "Pangram";
    else
        cout << "Not a Pangram";

    return 0;
}

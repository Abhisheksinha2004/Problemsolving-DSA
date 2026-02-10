#include <iostream>
#include <string>
using namespace std;

void rotateanticlockwise(string &s)
{
    char c = s[0];
    int n = s.size();
    int i = 1;

    while (i < n)
    {
        s[i - 1] = s[i];
        i++;
    }
    s[n - 1] = c;
}

bool rotateString(string s, string goal)
{
    if (s.size() != goal.size())
        return false;

    if (s == goal)
        return true;

    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        rotateanticlockwise(s);
        if (s == goal)
            return true;
    }
    return false;
}

int main()
{
    string s, goal;

    cout << "Enter string s: ";
    getline(cin, s);

    cout << "Enter goal string: ";
    getline(cin, goal);

    if (rotateString(s, goal))
        cout << "True (Rotation exists)";
    else
        cout << "False (Rotation does not exist)";

    return 0;
}
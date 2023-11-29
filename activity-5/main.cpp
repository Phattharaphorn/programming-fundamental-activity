#include <iostream>
using namespace std;
string removeDuplicates(string s)
{
    int n = s.length();
    string str =
        "";
    if (n == 0)
        return str;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            str += s[i];
        }
    }
    str.push_back(s[n - 1]);
    return str;
}
int main()
{
    string input =
        "";
    cout << "Input: ";
    cin >> input;
    cout << "Output: " << removeDuplicates(input) << endl;
    return 0;
}
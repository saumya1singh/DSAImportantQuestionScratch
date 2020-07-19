#include <bits/stdc++.h>
using namespace std;

void mappedStrings(string inp, string out)
{
    if (inp.size() == 0)
    {
        cout << out << endl;
        return;
    }

    int singleDigitNumber = inp[0] - '0';
    char ch = singleDigitNumber + 'A' - 1;
    mappedStrings(inp.substr(1), out + ch);

    if (inp.length() >= 2)
    {
        //Double digit number is possible
        int doubleDigitNumber = (inp[0] - '0') * 10 + (inp[1] - '0');
        if (doubleDigitNumber > 9 && doubleDigitNumber <= 26)
        {
            //If doubleDigitNumber is a double digit number i.e. does not have a 0 at 10s
            //place and less than 26 (number over 26 has no letter corresponding to it)
            ch = doubleDigitNumber + 'A' - 1;
            mappedStrings(inp.substr(2), out + ch);
        }
    }
}

int main()
{
    string inp;
    cin >> inp;

    mappedStrings(inp, "");

    return 0;
}

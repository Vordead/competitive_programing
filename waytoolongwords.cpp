#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int numberOfWords;
    string word;
    string modifiedWord;
    cin >> numberOfWords;
    vector<string> g1;

    for (int i = 0; i < numberOfWords; i++)
    {
        int count = 0;
        cin >> word;
        if (word.length() <= 10)
        {
            g1.push_back(word);
        }
        else
        {
            char inital = word[0];
            char last = word[word.length() - 1];
            for (int i = 1; i < word.length() -1; i++)
            {
                count++;
            }

            modifiedWord = inital + to_string(count) + last;
            g1.push_back(modifiedWord);
        }
    }

    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << "\n";
}
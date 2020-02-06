#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string words;
    cin >> words;
    for(int nub=0;nub<words.size();nub++)
    {
        if(words[nub+1]>words[nub])
        {
            words[nub-1]--;
        }
        else if(words[0]=='1')
        {
            words[0]=' ';
        }
        else
        {
            words[nub]=int(57);
        }
    }
    for(int i = 0;i<words.size();i++)
    {
        cout << words[i];
    }
}

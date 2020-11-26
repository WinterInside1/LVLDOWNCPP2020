#include <iostream>

using namespace std;

string format (int minutes)
{
    string s, s1;
    s = to_string((minutes / 60)%24);
    s1 = to_string(minutes % 60);
    if (s.size()==1) s = '0' + s;
    if (s1.size()==1) s1 = '0' + s1;
    return (s + ":" + s1);
}

int main()
{
    int starth, startm;
    char temp;
    cout << "Enter the start time: ";
    cin >> starth >> temp >> startm;
    int currm = starth * 60 + startm;

    int length = 45;
    int lessons;

    cout << "Enter the number of lessons: ";
    cin >> lessons;

    int breakes;
    cout << "Enter the length of breakes (in minutes): ";
    cin >> breakes;

    for (int i=0; i<lessons; i++)
    {
        cout << "Lesson " << i+1 << " " << format(currm);
        currm += length;
        cout << " - " << format(currm) << endl;
        currm += breakes;
        if (currm >= 24 * 60)
        {
            cout << "The next day!" << endl;
            currm %= (24*60);
        }
    }
}

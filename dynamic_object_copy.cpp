#include <bits/stdc++.h>
using namespace std;
class Footballer
{
    public:
    string country;
    int jersey;

    Footballer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Footballer* messi = new Footballer("Argentina", 10);
    Footballer* ronaldo = new Footballer("Portugal", 7);
    *ronaldo = *messi;
    delete messi;
    cout << ronaldo->country << " " << ronaldo->jersey << endl;
    return 0;
}
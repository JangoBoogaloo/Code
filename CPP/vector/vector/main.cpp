#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static bool ascendCompare(const int &a, const int &b)
{
    return a<b;
}

static bool descendCompare(const int &a, const int &b)
{
    return a>b;
}

int main()
{
    vector<int> vect;
    int i=0;

    for(i=0; i<10; i++)
    {
        vect.push_back(10-i);
    }

    sort(vect.begin(), vect.end(), ascendCompare);

    vector<int>::iterator it = vect.begin();
    for(it=vect.begin();it!=vect.end();it++)
    {
        cout<<*it<<endl;
    }

    cout << "-------------------------------------" << endl;

    sort(vect.begin(), vect.end(), descendCompare);
    it = vect.begin();
    for(it=vect.begin();it!=vect.end();it++)
    {
        cout<<*it<<endl;
    }

    cout << "End of Processing" << endl;
    return 0;
}


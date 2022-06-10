#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vect;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        vect.push_back(k);
    }
    sort(vect.begin(),vect.end());
    for(int x:vect)
    {
        cout<<x<<" ";
    }
    {
        int k;
        cin>>k;
        vect.push_back(k);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

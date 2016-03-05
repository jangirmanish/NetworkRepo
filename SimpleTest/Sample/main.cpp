#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int min=999999999,max=-1;
        int N;
        cin >> N;
        
        for (int i =0;i< N;i++)
        {
            long long int r;
            cin >>r;
            if (r < min)
                min = r;
            if(r>max)
                max = r;
        }
        cout << max -min << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n;
string plans;
int x = 1, y = 1;

//L R U D
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
char move_types[4] = {'L','R','U','D'};

int simulation_LRUD()
{
    cin >> n;
    cin.ignore();
    getline(cin, plans);
    
    for(int i = 0; i < plans.size(); i++)
    {
        int nx = -1, ny = -1;
        for(int j = 0; j < sizeof(move_types); j++)
        {
            if(plans[i] == move_types[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        if(nx < 1 || ny < 1 || nx > n || ny > n)
            continue;
        x = nx;
        y = ny;
    }
    cout << x << ' ' << y << '\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<long long>> arr = {
        {0, 3, INT_MAX, 7},
        {8, 0, 2, INT_MAX},
        {5, INT_MAX, 0, 1},
        {2, INT_MAX, INT_MAX, 0}};

    for (int k = 0; k < arr.size(); k++)
        for (int i = 0; i < arr.size(); i++)
                for (int j = 0; j < arr.size(); j++)
                    arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
                    
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = 0 ; j < arr.size() ; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

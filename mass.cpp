#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> mass;
    int n=45, k=1, f=1, p, y;
    mass.push_back(k);
    mass.push_back(f);
    for(int i=2; i<n; i++){
        mass.push_back(mass[i-2]+mass[i-1]);
    }
    cin >> y;
    cout << mass[y-1];


return 0;
}

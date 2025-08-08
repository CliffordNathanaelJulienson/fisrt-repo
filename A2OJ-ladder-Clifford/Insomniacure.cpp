#include <bits/stdc++.h>
using namespace std;
int main (){
    int banyaknaga;
    int nagayangtersakiti = 0;
    int k;
    int l;
    int m;
    int n;
    cin >> k >> l >> m >> n >> banyaknaga;
    for (int i = 1; i <= banyaknaga;i++){
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
            nagayangtersakiti++;
        }
    }
    cout << nagayangtersakiti;
}
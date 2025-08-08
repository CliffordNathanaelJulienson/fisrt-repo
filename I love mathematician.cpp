#include <bits/stdc++.h>
using namespace std;
int poin;
int main(){
    int banyak;
    cin >> banyak;
    int a[banyak];
    for (int i = 0; i < banyak ; i++){
        cin >> a[i];

    }
    int amazing_poin = 0;
    int skor_maks = a[0];
    int skor_min = a[0];
    for (int i = 0; i < banyak; i++){
        if (a[i] > skor_maks){
            amazing_poin++;
            skor_maks = a[i];
        }
        else if (a[i] < skor_min){
            amazing_poin++;
            skor_min = a[i];
        }
    }
    cout << amazing_poin << endl;
}
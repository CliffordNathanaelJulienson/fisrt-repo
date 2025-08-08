#include <bits/stdc++.h>
using namespace std;
int main(){
    int banyak;
    int a[banyak];
    int paling_gede = 0, sukugerak = 0;
    int paling_kecil = 0;
    for (int i = 0; i < banyak; i++){
        cin >> a[i];
    }
    for (int i = 0; i < banyak; i++){
        if (a[i] > paling_gede){
            paling_gede = a[i];
            sukugerak++;
        }
    }
}
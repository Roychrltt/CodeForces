#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        pair<int, int> maxx, minx, maxy, miny;
        minx = miny = {1e9 + 5, 1e9 + 5};
        maxx = maxy = {0, 0};
        for(int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
            if(a[i].first < minx.first) {
                minx.second = minx.first;
                minx.first = a[i].first;
            } else if(a[i].first < minx.second) {
                minx.second = a[i].first;
            }
            if(a[i].first > maxx.first) {
                maxx.second = maxx.first;
                maxx.first = a[i].first;
            } else if(a[i].first > maxx.second) {
                maxx.second = a[i].first;
            }
            if(a[i].second < miny.first) {
                miny.second = miny.first;
                miny.first = a[i].second;
            } else if(a[i].second < miny.second) {
                miny.second = a[i].second;
            }
            if(a[i].second > maxy.first) {
                maxy.second = maxy.first;
                maxy.first = a[i].second;
            } else if(a[i].second > maxy.second) {
                maxy.second = a[i].second;
            }
        }
        if(n == 1) {
            cout << 1 << '\n';
            continue;
        }
        ll area = LONG_LONG_MAX;
        for(int i = 0; i < n; i++) {
            int lx, rx, ly, ry;
            if(a[i].first == minx.first) lx = minx.second;
            else lx = minx.first;
            if(a[i].first == maxx.first) rx = maxx.second;
            else rx = maxx.first;
            if(a[i].second == miny.first) ly = miny.second;
            else ly = miny.first;
            if(a[i].second == maxy.first) ry = maxy.second;
            else ry = maxy.first;
            int len = rx - lx + 1, width = ry - ly + 1;
            ll cur = 1ll * len * width;
            if(n - 1 == cur) {
                cur = min(1ll * (len + 1) * width, 1ll * len * (width + 1));
            }
            area = min(area, cur);
        }
        cout << area << '\n';
    }
}

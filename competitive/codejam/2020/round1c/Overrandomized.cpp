#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

void test()
{
    long long u, m;
    std::string s;
    std::map<char, int> mp;
    std::vector<std::pair<int, char>> vc;
    std::string res;
    std::cin >> u;
    for (int i = 0; i < 10000; i++) {
        std::cin >> m >> s;
        for (int k = 0; k < s.size(); k++) {
            if (mp.find(s[k]) == mp.end()) {
                mp[s[k]] = 0;
            }
            if (k == 0) {
                mp[s[k]]++;
            }
        }
    }
    for (auto& l : mp) {
        vc.push_back(std::pair<int, char> (l.second, l.first));
    }
    std::sort(vc.begin(), vc.end());
    res += vc[0].second;
    for (int i = vc.size()-1; i > 0; i--) {
        res += vc[i].second;
    }
    std::cout << res;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cout << " Case #" << i+1 << ": ";
        test();
        std::cout << std::endl;
    }
}

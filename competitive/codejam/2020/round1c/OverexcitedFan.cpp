#include <iostream>
#include <string>

void test()
{
    int x, y, dist, steps = 0;
    std::string s;
    std::cin >> x >> y >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'S') {
            y--;
        }
        if (s[i] == 'N') {
            y++;
        }
        if (s[i] == 'E') {
            x++;
        }
        if (s[i] == 'W') {
            x--;
        }
        steps++;
        dist = std::abs(x) + std::abs(y);
        if (dist <= steps) {
            std::cout << steps;
            return;
        }
    }
    std::cout << "IMPOSSIBLE";
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cout << "Case #" << i+1 << ": ";
        test();
        std::cout << std::endl;
    }
}

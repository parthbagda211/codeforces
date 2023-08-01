#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int T;
    std::cin >> T;
    std::cin.ignore();

    for (int tc = 1; tc <= T; tc++) {
        std::string t;
        std::getline(std::cin, t);

        std::string s;
        for (char c : t) {
            if (s.find(c) == std::string::npos) {
                s.push_back(c);
            }
        }
        std::string result = "";
        for (int i = 0; i < t.length(); i++) {
            result += s;
        }

        std::cout << result << std::endl;
    }

    return 0;
}

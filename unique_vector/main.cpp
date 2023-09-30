#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> v = {1, 2, 3, 8, 4, 3, 4, 6};
    std::sort(v.begin(), v.end());
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
    for(auto it : v)
        std::cout << it << " ";
    std::cout << std::endl;
}

#include <iostream>
#include <set>
#include <list>
#include <vector>

using namespace std;

template<typename T>
void print_container(T container)
{
    for(auto item : container)
        std::cout << item << " ";
    std::cout << "\n";
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two.

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
}

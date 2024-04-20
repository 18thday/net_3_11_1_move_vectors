#include <iostream>
#include <string>
#include <vector>
#include <utility>

template <typename T>
void move_vectors(std::vector<T>& lhs, std::vector<T>& rhs) {
    std::vector<T> tmp = std::move(lhs);
    lhs = std::move(rhs);
    rhs = std::move(tmp);
}

template <typename T>
void print_vector(const std::vector<T>& v) {
    for (const auto& i : v) {
        std::cout << " " << i;
    }
}
int main() {
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one, two);

    std::cout << "one:";
    print_vector(one);
    std::cout << std::endl;
    std::cout << "two:";
    print_vector(two);
    return 0;
}

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    set<int> numbers_vector1 = {1, 2, 1, 11, 14, 11, 24, 11, 11, 22, 5, 1, 6, 6};
    set<int> numbers_vector2 = {1, 2, 13, 21, 15, 99, 211, 1, 11, 22, 5, 1, 90, 61};
    
    set<int> common_codes = set_intersection(
        begin(numbers_vector1), end(numbers_vector1),
        begin(numbers_vector2), end(numbers_vector2),
        inserter(common_codes, begin(common_codes));
    )


}
    
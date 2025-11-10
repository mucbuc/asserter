#include <string>

#include "../../src/test.hpp"

int main()
{
    using namespace std;
    string a("hello assert");

    ASSERT(a.empty())(a)(a.size());
    return 0;
}

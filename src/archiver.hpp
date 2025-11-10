#pragma once

#include <string>
#include <vector>

namespace private_assert {
template <typename T = void>
struct archiver {
    static archiver& instance();

    ~archiver();

    void pass();
    void fail(
        const char*,
        int,
        const char* function,
        const char* = "");

private:
    std::size_t m_passed = 0;

    template <typename O>
    bool print_results(O&);

    std::vector<std::string> m_failed;
    const std::string m_results_file = "results.json";
};
}

#include "archiver.hxx"

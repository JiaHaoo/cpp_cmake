#pragma once

#include <cinttypes>
#include <string>


/**
 *  A vector of strings
 *  elements are stored in [begin, end)
 *  available space is [begin, limit)
 */
struct project_name
{
private:
        std::string * begin;

        std::string * end;
        std::string * limit;

public:
        project_name() : begin(nullptr), end(nullptr), limit(nullptr) {}

        project_name(size_t s);

        uint64_t size() const {
                return end - begin;
        }

};


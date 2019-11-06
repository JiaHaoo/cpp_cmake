#pragma once

#include <cinttypes>
#include <string>


/**
 *  A vector of strings
 *  elements are stored in [begin, end)
 *  available space is [begin, limit)
 */
struct vec_str
{
private:
        std::string * begin;

        std::string * end;
        std::string * limit;

public:
        vec_str() : begin(nullptr), end(nullptr), limit(nullptr) {}

        vec_str(size_t s);

        uint64_t size() const {
                return end - begin;
        }

};


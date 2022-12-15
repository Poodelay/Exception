#pragma once

#include <exception>
#include <string>

namespace exc
{
    class Exception : public std::exception
    {
    public:
        const char *what() const noexcept;

    protected:
        explicit Exception(const std::string &message) noexcept;

    private:
        const std::string message_;
    };

    struct Warning : public Exception
    {
        explicit Warning(const std::string &message) noexcept;
    };

    struct Error : public Exception
    {
        explicit Error(const std::string &message) noexcept;
    };
}

#ifndef VERSION_H
#define VERSION_H

#include <string_view>

namespace version{
    constexpr std::string_view git_hash = "950a9d7f3750f3f5da826649bc6caec76e1f94aa";
    constexpr std::string_view git_tag = "950a9d7";
    constexpr std::string_view git_branch = "main";
    constexpr std::string_view git_commit_time = "2025-04-12 21:06:54";
    constexpr std::string_view build_time = "2025-04-12 21:51:41";
};

#endif // VERSION_H

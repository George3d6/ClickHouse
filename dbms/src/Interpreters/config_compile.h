#pragma once

#define PATH_SHARE "/usr/share"
#define INTERNAL_COMPILER_FLAGS "  -D_GLIBCXX_USE_CXX11_ABI=1 -pipe -msse4.1 -msse4.2 -mpopcnt -std=gnu++1z  -fno-omit-frame-pointer -Wall -Wnon-virtual-dtor  -Werror -O3 -DNDEBUG -x c++ -march=native -shared -fPIC -fvisibility=hidden -fno-implement-inlines "
#define INTERNAL_COMPILER_EXECUTABLE "/usr/share/clickhouse/bin/clang"
#define INTERNAL_COMPILER_HEADERS "/usr/share/clickhouse/headers"
#define INTERNAL_COMPILER_HEADERS_ROOT "/usr/share/clickhouse/headers"
#define INTERNAL_COMPILER_CUSTOM_ROOT 1
#define INTERNAL_DOUBLE_CONVERSION_INCLUDE_DIR "/usr/share/clickhouse/headers/contrib/libdouble-conversion"
#define INTERNAL_Poco_Foundation_INCLUDE_DIR "/usr/include"
#define INTERNAL_Poco_Util_INCLUDE_DIR "/usr/include"
#define INTERNAL_Boost_INCLUDE_DIRS "/usr/share/clickhouse/headers/contrib/libboost/boost_1_65_0/"

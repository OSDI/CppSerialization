/*!
    \file json.h
    \brief JSON C++ Library definition
    \author Ivan Shynkarenka
    \date 24.02.2017
    \copyright MIT License
*/

#ifndef CPPSERIALIZATION_JSON_JSON_H
#define CPPSERIALIZATION_JSON_JSON_H

#define RAPIDJSON_HAS_STDSTRING 1

#define RAPIDJSON_NAMESPACE CppSerialization::JSON
#define RAPIDJSON_NAMESPACE_BEGIN namespace CppSerialization { namespace JSON {
#define RAPIDJSON_NAMESPACE_END } }

#include <rapidjson/document.h>
#include <rapidjson/writer.h>

#include "../exceptions.h"

namespace CppSerialization {

/*!
    \namespace CppSerialization::JSON
    \brief JSON definitions
*/
namespace JSON {

} // namespace JSON

} // namespace CppSerialization

#endif // CPPSERIALIZATION_JSON_JSON_H

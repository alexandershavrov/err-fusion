#ifndef ERR_FUSION_ERROR_H
#define ERR_FUSION_ERROR_H

#include "error_wrapper.h"

#include <string>
#include <utility>

namespace ef {

template<typename E>
class error : public error_wrapper<E> {
    E error_{};

public:
    error() = default;
    explicit error(E error_value) : error_{error_value} { }
    ~error() override = default;

public:
    E get() override { return error_; }
};

} // namespace ef

#endif // ERR_FUSION_ERROR_H

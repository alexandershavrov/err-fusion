#ifndef ERR_FUSION_ERROR_WRAPPER_H
#define ERR_FUSION_ERROR_WRAPPER_H

namespace ef {

template<typename E>
class error_wrapper {
public:
    error_wrapper() = default;
    virtual ~error_wrapper() = default;

public:
    virtual E get() = 0;
};

} // namespace ef

#endif // ERR_FUSION_ERROR_WRAPPER_H

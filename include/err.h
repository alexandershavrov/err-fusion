#ifndef ERR_FUSION_ERR_H
#define ERR_FUSION_ERR_H

#include "result.h"

namespace ef {

template<typename T, typename E, typename EWrapper = error<E>>
class err final : public result<T, E, EWrapper> {
public:
    explicit err(E error_value) : result<T, E, EWrapper>{T{}, error_value, false} { }
    ~err() final = default;
};

} // namespace ef

#endif // ERR_FUSION_ERR_H

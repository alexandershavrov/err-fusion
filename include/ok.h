#ifndef ERR_FUSION_OK_H
#define ERR_FUSION_OK_H

#include "result.h"

namespace ef {

template<typename T, typename E, typename EWrapper = error<E>>
class ok final : public result<T, E, EWrapper> {
public:
    explicit ok(T correct_value) : result<T, E, EWrapper>{correct_value, E{}, true} { }
    ~ok() final = default;
};

} // namespace ef

#endif // ERR_FUSION_OK_H

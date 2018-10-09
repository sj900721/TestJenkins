//
// Created by shaojian on 18-10-9.
//

#include "Queue.h"

template <typename E>
void Queue<E>::Enqueue(const E &element) {
    q.push(element);
}

template<typename E>
std::shared_ptr<E> Queue<E>::Dequeue() {
    if (q.empty()) return std::shared_ptr<E>();
    auto ret = std::make_shared(q.front());
    q.pop();

    return ret;
}

template<typename E>
std::size_t Queue<E>::size() const {
    return q.size();
}

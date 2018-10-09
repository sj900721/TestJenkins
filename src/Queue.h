//
// Created by shaojian on 18-10-9.
//

#ifndef PROJECT_QUEUE_H
#define PROJECT_QUEUE_H


#include <queue>
#include <memory>

template <typename E>
class Queue {
public:
    void Enqueue(const E& element);
    std::shared_ptr<E> Dequeue();  // Returns nullptr if the queue is empty.
    std::size_t size() const;

private:
    std::queue<E> q;
};

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


#endif //PROJECT_QUEUE_H

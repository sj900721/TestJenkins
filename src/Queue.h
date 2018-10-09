//
// Created by shaojian on 18-10-9.
//

#ifndef PROJECT_QUEUE_H
#define PROJECT_QUEUE_H


#include <queue>
#include <boost/shared_ptr.hpp>

template <typename E>
class Queue {
public:
    Queue() { };
    void Enqueue(const E& element);
    std::shared_ptr<E> Dequeue();  // Returns NULL if the queue is empty.
    std::size_t size() const;

private:
    std::queue<E> q;
};


#endif //PROJECT_QUEUE_H

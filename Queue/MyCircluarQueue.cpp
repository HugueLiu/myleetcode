#include <iostream>
#include <vector>

using namespace std;

class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        size_ = k;
        int_v_.resize(k);
        num_of_now_ = 0;
        start_point_ = 0;
        insert_pos_ = 0;
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(num_of_now_ >= size_) {
            return false;
        } else{
            int_v_[insert_pos_] = value;
            num_of_now_++;
            insert_pos_ = (insert_pos_ + 1) % size_;
            return true;
        }
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if(num_of_now_ <= 0) {
            return false;
        } else{
            start_point_ = (start_point_ + 1) % size_;
            num_of_now_--;
            return true;
        }
    }

    /** Get the front item from the queue. */
    int Front() {
        if(num_of_now_ == 0) return -1;
        else return int_v_[start_point_];
    }

    /** Get the last item from the queue. */
    int Rear() {
        if(num_of_now_ == 0) return -1;
        else return int_v_[(insert_pos_ + size_ - 1) % size_];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if(num_of_now_ == 0) return true;
        else return false;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if(num_of_now_ == size_) return true;
        else return false;
    }

private:
    vector<int> int_v_;
    int size_;
    int num_of_now_;
    int start_point_;
    int insert_pos_;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * bool param_1 = obj.enQueue(value);
 * bool param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * bool param_5 = obj.isEmpty();
 * bool param_6 = obj.isFull();
 */
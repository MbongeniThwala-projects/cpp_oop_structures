#pragma once
#include <cstddef>
#include <vector>
#include <stdexcept>

template <typename T>
class stack{
    private:
        std::vector<T> data_;

    public:
        void push(const T& x) { data_.push_back(x);}

        T pop(){
            if (data_.empty()) throw std::runtime_error("stack is empty");
            T top = data_.back();
            data_.pop_back();
            return top;
        }

    const T& peek() const{
        if(data_.empty()) throw std::runtime_error("stack is empty");
        return data_.back();
    }

    bool empty() const{return data_.empty();}
    std::size_t size() const{return data_.size();}
    void clear(){data_.clear();}

};
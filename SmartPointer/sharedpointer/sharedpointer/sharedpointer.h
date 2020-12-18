#ifndef SHAREDPOINTER_H
#define SHAREDPOINTER_H
#include <iostream>
//this is a refrence from geeksforgeeks
//TODO add custom deleter in sharedpointer class
//counter class
class counter{
    unsigned int m_counter;
public:
    counter():m_counter(0){};
    counter(int x):m_counter(x){};
    counter(const counter &obj)=delete;
    counter& operator=(const counter &obj)=delete;
    ~counter(){
        m_counter = 0;
    }
    unsigned int get(){
        return m_counter;
    }
    void reset(){
        m_counter = 0;
    }
    void operator++(){
        m_counter++;
    }
    void operator++(int){
        m_counter++;
    }
    void operator--(int){
        m_counter--;
    }
    void operator--(){
        m_counter--;
    }
    friend std::ostream& operator<<(std::ostream& os,const counter& co)
    {
            os << "Counter Value : " << co.m_counter<<std::endl;
            return os;
    }
};

template <typename T>
class sharedpointer
{
    T *data = nullptr;
    counter *m_counter;
public:
    explicit sharedpointer(T *x=nullptr){
        data = x;
        m_counter = new counter();
        if (x){
            (*m_counter)++;
        }
    };
    sharedpointer(const sharedpointer &obj){
        data = obj.data;
        m_counter = obj.m_counter;
        (*m_counter)++;
    };
    sharedpointer (sharedpointer &&obj){
        data = obj.data;
        obj.data = nullptr;
    };
    sharedpointer& operator=(const sharedpointer &obj){
        if (this != &obj){
            data = obj.data;
            m_counter = obj.m_counter;
            (*m_counter)++;
        }
        return *this;
    }
    sharedpointer& operator=(sharedpointer &&obj){
        if (data!=nullptr)
            delete data;
        data = obj.data;
        obj.data = nullptr;
        return *this;
    }
    T* operator->(){
        return this->data;
    }
    T& operator*(){
        return  *(this->data);
    }
    T* get()
    {
          return data;
    }
    ~sharedpointer(){
        (*m_counter)--;
        if (m_counter->get() == 0)
        {
                    delete m_counter;
                    delete data;
        }
    }
    friend std::ostream& operator<<(std::ostream &out,sharedpointer &s){
        out << "Address pointed : " << s.get() << std::endl;
                out << *(s.m_counter) << std::endl;
                return out;
    }
};

#endif // SHAREDPOINTER_H

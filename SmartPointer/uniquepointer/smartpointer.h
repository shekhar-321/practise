#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H
#include <iostream>

template <typename T>
class UniquePointer
{
    T *data = nullptr;
public:
    //5-way approach whenever
    //there is pointer as data member
    // to provide deep copy we have copy constructor,assignment operator and destructor
    //TODO create a custom deleter class such that it can take a function pointer or lambda and delete the
    //underlying object look at bo qian you tube for custom deleter
    UniquePointer():data(nullptr){
        std::cout<<"SmartPointer::SmartPointer()"<<std::endl;
    }
    UniquePointer(T x):data(new T(x)){
        std::cout<<"SmartPointer::SmartPointer(int x)"<<std::endl;
    }
    //unique pointer does not allow copy of objects only transfer of ownership is
    //allowed
    UniquePointer(const UniquePointer &obj)=delete ;
    //move constructor
    UniquePointer(UniquePointer &&dyingObj){
        this->data = dyingObj.data;
        dyingObj.data = nullptr;
    }
    UniquePointer& operator=(const UniquePointer &obj)=delete;
    UniquePointer& operator=(const UniquePointer &&dyingObj){
        if (data !=nullptr)
            delete data;
        this->data = dyingObj.data;
        dyingObj.data = nullptr;
    }
    //we want to have smartpointer obj change the behaviour when
    // derefernce and refrence operator are applied
    T& operator*(){ return  *(this->data);}
    T* operator->(){return  this->data;}
    ~UniquePointer(){
        std::cout<<"SmartPointer::~SmartPointer()"<<std::endl;
        if (data!=nullptr){
            delete  data;
            data = nullptr;
        }
    }
    int displayData(){
        int d = *data;
        std::cout<<"display data::"<<*data<<std::endl;
        return d;
    }


};


template <typename T>
class UniquePointer<T[]>
{
    T *data = nullptr;
public:
    //5-way approach whenever
    //there is pointer as data member
    // to provide deep copy we have copy constructor,assignment operator and destructor
    //TODO create a custom deleter class such that it can take a function pointer or lambda and delete the
    //underlying object look at bo qian you tube for custom deleter
    UniquePointer():data(nullptr){
        std::cout<<"SmartPointer::SmartPointer()"<<std::endl;
    }
    UniquePointer(T x):data(new T(x)){
        std::cout<<"SmartPointer::SmartPointer(int x)"<<std::endl;
    }
    //unique pointer does not allow copy of objects only transfer of ownership is
    //allowed
    UniquePointer(const UniquePointer &obj)=delete ;
    //move constructor
    UniquePointer(UniquePointer &&dyingObj){
        this->data = dyingObj.data;
        dyingObj.data = nullptr;
    }
    UniquePointer& operator=(const UniquePointer &obj)=delete;
    UniquePointer& operator=(const UniquePointer &&dyingObj){
        if (data !=nullptr)
            delete data;
        this->data = dyingObj.data;
        dyingObj.data = nullptr;
    }
    //we want to have smartpointer obj change the behaviour when
    // derefernce and refrence operator are applied
    T& operator*(){ return  *(this->data);}
    T* operator->(){return  this->data;}
    T& operator[] (int index){
        if (index < 0){
            throw (new std::exception("Negative index"));
        }
        return this->data[index];
    }
    ~UniquePointer(){
        std::cout<<"SmartPointer::~SmartPointer()"<<std::endl;
        if (data!=nullptr){
            delete  data;
            data = nullptr;
        }
    }
    int displayData(){
        int d = *data;
        std::cout<<"display data::"<<*data<<std::endl;
        return d;
    }


};

#endif // SMARTPOINTER_H

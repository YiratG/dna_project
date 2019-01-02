#ifndef DNA_SharedPtr_H
#define DNA_SharedPtr_H
#include <cstdlib>
#include <iostream>
#include <exception>

template<typename T>
class SharedPtr
{
public:
    template<class U>
    friend class SharedPtr;

    explicit SharedPtr(T *ptr = NULL);
    SharedPtr(const SharedPtr &other);
    ~SharedPtr();

    template<class U>
    SharedPtr(const SharedPtr<U> &pt);

    template<class U>
    SharedPtr& operator= (const SharedPtr<U>&);

    SharedPtr &operator=(const SharedPtr &other);
    SharedPtr<T> &operator=(T* otherPtr);
    T &operator*() const;
    T *operator->() const;
    bool operator!=(const SharedPtr &other) const;
    bool operator==(const SharedPtr &other) const;
    operator bool() const;


    T *get() const;


private:
    T *m_ptr;
    std::size_t *m_refCount;

//    void swap(const SharedPtr &other);
    void free();
};

//==============================Constructor==============================
template<typename T>
SharedPtr<T>::SharedPtr(T *ptr)
try
        : m_ptr(ptr), m_refCount(new std::size_t(1))
{
//    std::cout << "Constructor for Shared Ptr" << std::endl;
}
catch (std::bad_alloc&)
{
    delete ptr;
    throw;
}

//==============================C-CTOR===================================
template<typename T>
SharedPtr<T>::SharedPtr(const SharedPtr &other):m_ptr(other.m_ptr), m_refCount(other.m_refCount)
{
    ++*m_refCount;
}
template<typename T>
template<class U>
inline SharedPtr<T>::SharedPtr(const SharedPtr<U> &pt)
        :m_ptr(pt.m_ptr),
         m_refCount(pt.refCount)
{
//    std::cout<<"in temp cpy-constructor\n";
    (*m_refCount)++;
}

//==============================Destructor===============================
template<typename T>
SharedPtr<T>::~SharedPtr()
{
    free();
//    std::cout << "Destructor for Shared Ptr" << std::endl;

}
//==============================Free ptrs===============================
template<typename T>
void SharedPtr<T>::free()
{
    if (--*m_refCount == 0)
    {
        delete(m_ptr);
        delete m_refCount;

        m_refCount = NULL;
        m_ptr = NULL;
    }
}
//==============================Operator= ===============================
template<typename T>
SharedPtr<T> &SharedPtr<T>::operator=(const SharedPtr &other)
{
    // Avoid self assignment
    if (this != &other)
    {
        free();
        m_ptr = other.m_ptr;
        m_refCount = other.m_refCount;
        ++*m_refCount;
    }
    return *this;
}
//template<typename T>
//void SharedPtr<T>::swap(const SharedPtr &other)
//{
//       std::swap(m_ptr, other.m_ptr);
//    std::swap(m_refCount, other.m_refCount);
//
//}
////==============================Operator= ===============================
//template<typename T>
//SharedPtr<T> &SharedPtr<T>::operator=(const SharedPtr &other)
//{
//
//        SharedPtr<T>copyOfMe(other);
//        swap(copyOfMe);
//}
//==============================Operator= for ptr ===============================
template<typename T>
inline SharedPtr<T> &SharedPtr<T>::operator=(T* otherPtr)
{
    // Avoid self assignment

    free();
    m_ptr = otherPtr;
    try
    {
        m_refCount = new std::size_t(1);
    }
    catch (std::bad_alloc& e)
    {
        delete otherPtr;
        throw;
    }

    return *this;
}

template<typename T>
template<class U>
inline SharedPtr<T> & SharedPtr<T>::operator= (const SharedPtr<U> &other)
{
//    std::cout<<"in temp assign\n";
    if (this != &other)
    {
        this->release();
        // Copy the data and reference pointer and increment the reference count
        m_ptr=other.m_ptr;
        m_refCount = other.refCount;
        (*m_refCount)++;
    }
    return *this;
}
//==============================operator bool===============================
template<typename T>
inline SharedPtr<T>::operator bool() const
{
    return m_ptr != NULL;
}
//==============================operator-> ===============================
template<typename T>
inline T *SharedPtr<T>::operator->() const
{
    return m_ptr;
}
//==============================operator* ===============================
template<typename T>
inline T &SharedPtr<T>::operator*() const
{
    return *m_ptr;
}
//==============================operator!= ===============================
template<typename T>
inline bool SharedPtr<T>::operator!=(const SharedPtr &other) const
{
    return m_ptr!= other.m_ptr;
}
//==============================operator==  ===============================
template<typename T>
inline bool SharedPtr<T>::operator==(const SharedPtr &other) const
{
    return m_ptr == other.m_ptr;
}
//==============================get ptr ===============================
template<typename T>
inline T *SharedPtr<T>::get() const {
    return m_ptr;
}

#endif //DNA_SharedPtr_H
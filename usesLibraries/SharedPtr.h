#ifndef DNA_SharedPtr_H
#define DNA_SharedPtr_H
#include <stdlib.h>
#include <new>

#ifdef TESTING
#define Test_print(str)  std::cout << str << std::endl
#else
#define Test_print(str)
#endif //TESTING

template <typename T>
class SharedPtr
{
public:
    explicit SharedPtr(T* ptr = NULL);
    SharedPtr(const SharedPtr& other);
    ~SharedPtr();

    SharedPtr& operator=(const SharedPtr& other);

    T* operator->() const;
    T&operator*() const;
    bool operator==(const SharedPtr& other) const;
    bool operator!=(const SharedPtr& other) const;

    T* get() const;
    size_t* get_count() const;
    operator bool() const;

private:
    T* m_ptr;
    size_t* m_count;
};

template <typename T>
SharedPtr<T>::SharedPtr(T *ptr) try
        : m_ptr(ptr),
          m_count(new size_t(1))
{}
catch(std::bad_alloc& e)
{
    delete ptr;
    throw;
}
template <typename T>
SharedPtr<T>::SharedPtr(const SharedPtr &other)
{
    //Test_print("copy constractor");
    m_ptr = other.m_ptr;
    m_count = other.m_count;
    (*m_count)++;
}

template <typename T>
SharedPtr<T>::~SharedPtr()
{
    //Test_print("distractor");
    (*m_count)--;
    if(*m_count == 0)
    {
        Test_print("SharedPtr :: DTOR - deleted");
        delete m_ptr;
        delete m_count;
    }
    else
    {
        Test_print("SharedPtr :: DTOR - not deleted");
    }
}

template <typename T>
SharedPtr<T>& SharedPtr<T>::operator=(const SharedPtr &other)
{
    //Test_print("asigment operator");
    if(m_ptr)
    {
        delete m_ptr;
        delete m_count;
    }

    m_ptr = other.m_ptr;
    m_count = other.m_count;

    (*m_count)++;

    return *this;
}

template <typename T>
T* SharedPtr<T>::operator->() const
{
    //Test_print("operator->");
    return m_ptr;
}

template <typename T>
T& SharedPtr<T>::operator*() const
{
    //Test_print("operator*");
    return *m_ptr;
}

template <typename T>
bool SharedPtr<T>::operator!=(const SharedPtr &other) const
{
    //Test_print("operator!=");
    return m_ptr != other.m_ptr || m_count != other.m_count;
}

template <typename T>
bool SharedPtr<T>::operator==(const SharedPtr &other) const
{
    //Test_print("operator==");
    return m_ptr == other.m_ptr && m_count == other.m_count;
}

template <typename T>
T* SharedPtr<T>::get() const
{
    //Test_print("get");
    return m_ptr;
}

template <typename T>
size_t * SharedPtr<T>::get_count() const
{
    //Test_print("get");
    return m_count;
}

template <typename T>
SharedPtr<T>::operator bool() const
{
    //Test_print("bool operator");
    return m_ptr != NULL;
}
#endif //DNA_SharedPtr_H
template<typename T>
class MyVector {
public:

    MyVector( int size ) {
        m_size = size;
        m_data = new T[size];
    }

    virtual ~MyVector() {
        delete[] m_data;
    }

    T & operator[] ( int index ) {
        return m_data[index];
    }

    MyVector<T> operator+( MyVector<T> & op ) {
        MyVector<T> result( this->m_size );
        for( int i = 0; i < this->m_size; i++ )
            result[i] = (*this)[i] + op[i];
        return result;
    }
    
    MyVector<T> sum( MyVector<T> & op ) {
        MyVector<T> result( this->m_size );
        for( int i = 0; i < this->m_size; i++ )
            result[i] = (*this)[i] + op[i];
        return result;
    }
private:
    T * m_data;
    int m_size;
};
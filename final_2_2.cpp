#include<stdio.h>

class IntegerArray {
public:
    int *m_data;
    int m_size;

    IntegerArray(int size) {
        m_data = new int[size];
        m_size = size;
    }

    // IntegerArray( IntegerArray & op) {
    //     m_data = new int[op.m_size];
    //     m_size = op.m_size;
    //     for( int i = 0; i < m_size; i++ )
    //     m_data[i] = op.m_data[i];
    // }

    ~IntegerArray() {}
};
 
int main() {
    IntegerArray a(2);
    a.m_data[0] = 4; a.m_data[1] = 2;
    if (true) {
        IntegerArray b = a;
        b.m_data[0] = 6;
    }
    printf("%d\n", a.m_data[0]);
    return 0;
}
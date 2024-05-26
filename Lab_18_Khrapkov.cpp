#include <iostream>
#include <locale>
using namespace std;

class Matrix
{
    int data[5];
public:
    Matrix()
    {
        for (int i = 0; i < 5; i++)
            data[i] = 0;
    }

    Matrix(int arr[5])
    {
        for (int i = 0; i < 5; i++)
            data[i] = arr[i];
    }

    void show()
    {
        for (int i = 0; i < 5; i++)
            cout << data[i] << " ";
        cout << endl;
    }

    Matrix operator+(const Matrix& m) 
    {
        Matrix temp;
        for (int i = 0; i < 5; i++)
            temp.data[i] = data[i] + m.data[i];
        return temp;
    }

    Matrix operator-(const Matrix& m)
    {
        Matrix temp;
        for (int i = 0; i < 5; i++)
            temp.data[i] = data[i] - m.data[i];
        return temp;
    }

    Matrix operator*(const Matrix& m)
    {
        Matrix temp;
        for (int i = 0; i < 5; i++)
            temp.data[i] = data[i] * m.data[i];
        return temp;
    }
};

int main() 
{
    setlocale(LC_ALL, "uk_UA.UTF-8");

    int arr1[5] = { 1, 2, 3, 4, 5 };
    int arr2[5] = { 5, 4, 3, 2, 1 };

    Matrix m1(arr1), m2(arr2), m3;

    cout << "Матриця 1: ";
    m1.show();

    cout << "Матриця 2: ";
    m2.show();

    m3 = m1 + m2;
    cout << "Результат додавання: ";
    m3.show();

    m3 = m1 - m2;
    cout << "Результат віднімання: ";
    m3.show();

    m3 = m1 * m2;
    cout << "Результат множення: ";
    m3.show();

    return 0;
}


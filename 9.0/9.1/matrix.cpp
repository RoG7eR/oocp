#include <iostream>
using namespace std;
const int MAX = 10;

class Matrix {
    private:
        int m, n;
        int arr[MAX][MAX];
    public:
        Matrix() {
            m = 0;
            n = 0;
        }

        void getData() {
            cout << "Enter number of rows (M): ";
            cin >> m;
            cout << "Enter number of columns (N): ";
            cin >> n;

            if (m > MAX || n > MAX) {
                cout << "Error: Matrix dimensions cannot exceed " << MAX << "x" << MAX << endl;
                m = 0;
                n = 0;
                return; 
            }

            cout << "Enter the elements:" << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
                    cin >> arr[i][j];
                }
            }
        }

        Matrix operator+(const Matrix &mat) {
            Matrix temp;
            if (m != mat.m || n != mat.n) {
                std::cout << "Matrices dimensions do not match for addition." << endl;
                return temp; 
            }

            temp.m = m;
            temp.n = n;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    temp.arr[i][j] = arr[i][j] + mat.arr[i][j];
                }
            }
            return temp;
        }

        Matrix operator-(const Matrix &mat) {
            Matrix temp;
            if (m != mat.m || n != mat.n) {
                std::cout << "Matrices dimensions do not match for subtraction." << endl;
                return temp;
            }
            
            temp.m = m;
            temp.n = n;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    temp.arr[i][j] = arr[i][j] - mat.arr[i][j];
                }
            }
            return temp;
        }

        void display() {
            if (m == 0 || n == 0) {
                std::cout << "Matrix is empty or invalid." << endl;
                return;
            }
            
            std::cout << "\nMatrix (" << m << "x" << n << "):" << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << std::endl;
            }
        }
};

int main() {
    Matrix mat1, mat2, sum, diff;

    cout << "--- Enter details for first matrix ---" << endl;
    mat1.getData();

    cout << "\n--- Enter details for second matrix ---" << endl;
    mat2.getData();

    sum = mat1 + mat2;
    cout << "\n--- Sum of Matrices ---";
    sum.display();

    diff = mat1 - mat2;
    cout << "\n--- Difference of Matrices ---";
    diff.display();

    return 0;
}


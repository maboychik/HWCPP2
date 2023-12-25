#include <iostream>

int enter_num() {
    int n;
    std::cin >> n;
    return n;
}

double* create_arr(int n) {
    double* arr_d = new double[n];
    return arr_d;
}

void add_elements(int size, double* arr) {
    for (int i = 0; i < size; i++) {
        double x;
        std::cin >> x;
        arr[i] = x;
    }
}

void print_arr(double* arr_d, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr_d[i] << " ";
    }
}

void delete_arr(double* arr_d) {
    delete[] arr_d;
}

void exchange_elements(int* arr_d) {
    for (int i = 0; i < 12; i += 2) {
        int x = arr_d[i];
        arr_d[i] = arr_d[i + 1];
        arr_d[i + 1] = x;
    }
}

int** create_matrix(int h, int w) {
    int** matrix;
    matrix = new int* [h];
    std::srand(std::time(nullptr));
    for (int i = 0; i < h; i++) {
        matrix[i] = new int[w];
    }
    int rand = std::rand();
    std::cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            matrix[i][j] = std::rand() % 41 + 10;
        }
    }
    return matrix;
}

void print_matrix(int** matrix, int h, int w) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void add(int a, int b) {
    std::cout << a + b;
}
void sub(int a, int b) {
    std::cout << a - b;
}
void mul(int a, int b) {
    std::cout << a * b;
}
void frac(int a, int b) {
    double d = double(a) / (double)b;
    std::cout << d;
}

int main()
{
    
    /*Task 1*/
    float const* f;
    long int* l;
    double* pd;
    const short int sh{ 0 };
    const short int* const psh{ &sh };

    const char ch = 'a';
    const char* ch{ &ch };

    double p = 23.1;
    double* const cpd{ &p };

    unsigned int ui = 10;
    unsigned int* const cpui{ &ui };
    
    /*Task 2*/
    int n = enter_num();
    std::cout << n << std::endl;
    double* array_d = create_arr(n);
    add_elements(n, array_d);
    print_arr(array_d, n);
    delete_arr(array_d);
    
    /*Task 3*/
    int* ptr_int;
    ptr_int = new int[12];
    for (int i = 0; i < 12; i++) {
        std::cin >> ptr_int[i];
    }

    exchange_elements(ptr_int);
    for (int i = 0; i < 12; i++) {
        std::cout << ptr_int[i] << " ";
    }
    
    /*Task 4*/
    int** matrix;

    int w, h;  // ширина и высота
    std::cout << "Enter the height\n";
    std::cin >> h;

    std::cout << "Enter the weight\n";
    std::cin >> w;

    matrix = create_matrix(h, w);
    print_matrix(matrix, h, w);

    /*Task 5*/
    int num1{}, num2{};
    std::cout << "Enter the numbers \n";
    std::cin >> num1 >> num2;

    char oper;
    std::cout << "Enter the operation \n";
    std::cin >> oper;
    bool flag = true;

    while (flag) {
        switch (oper) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            sub(num1, num2);
            break;
        case '*':
            mul(num1, num2);
            break;
        case '/':
            frac(num1, num2);
            break;
        default:
            flag = false;
            break;
        }

        std::cout << "Enter the operation \n";
        std::cin >> oper;
        std::cout << oper;
        
    }
    

}

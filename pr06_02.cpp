#include <iostream>
using namespace std;

int** create_matrix(int s, int k);          // создание матрицы s строк k столбцов
void input_matrix(int** M, int s, int k);   // ввод матрицы
void print_matrix(int** M, int s, int k);   // вывод матрицы
void summa_diag(int** M, int s, int k);     // подсчёт суммы главной диагонали матрицы

int main()
{
    int s, k;
    cout << "Enter the number of matrix rows: ";
    cin >> s;
    cout << "Enter the number of matrix columns: ";
    cin >> k;
    int** m = create_matrix(s, k);
    input_matrix(m, s, k);
    print_matrix(m, s, k);
    summa_diag(m, s, k);
    return 0;
}

int** create_matrix(int s, int k)
{
    int** M = new int* [s];
    for (int i = 0; i < s; i++)
    {
        M[i] = new int[k];
    }
    return M;
}

void input_matrix(int** M, int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < k; j++)
        {
            M[i][j] = rand() % 100 + 1;
            cout << "M[" << i << "][" << j << "]=" << M[i][j] << " " << endl;
        }

    }
}

void print_matrix(int** M, int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void summa_diag(int** M, int s, int k)
{
    int sum = 0;
    if (s == k)
    {
        for (int i = 0; i < s; i++)
            sum += M[i][i];

        cout << "The sum of the elements of the main diagonal = " << sum << endl;
    }
    else
    {
        cout << "The sum of the elements of the main diagonal cannot be calculated" << endl;
    }
}

#include <iostream>
using namespace std;
#include <windows.h>

void main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ������� setlocale ��� �������� ������������ ��������� ����
    setlocale(LC_CTYPE, "ukr"); // ��������� ������������ ��������� ����

    const int array_size = 5;
    int array[array_size] = { 9, 7, 5 ,6, 8 };

    std::cout << "����� �� ����������:" << std::endl;
    for (int i = 0; i < array_size; i++) 
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int temp;
    for (int i = 0; i < array_size - 1; i++) 
    {
        for (int j = 0; j < array_size - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    std::cout << "����� ���� ����������:" << std::endl;
    for (int i = 0; i < array_size; i++) 
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

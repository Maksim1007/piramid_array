#include <iostream>

void print_array(int* arr, int size)
{
    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print_pyramid(int* arr, int size)
{
    std::cout << "Пирамида:" << std::endl;
    for (int i = 0; i < size; i++) {
        int level = 0; 
        int index = i; 

        while (index > 0)
        {
            index = (index - 1) / 2; 
            level++; 
        }

        if (i == 0)
        {
            std::cout << level << " root " << arr[i] << std::endl;
        }
        else
        {
            int parent_index = (i - 1) / 2; 
            std::cout << level;
            if (i % 2 == 1)
            { 
                std::cout << " left(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
            else
            { 
                std::cout << " right(" << arr[parent_index] << ") " << arr[i] << std::endl;
            }
        }
    }
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int pyramid[] = { 94,67,18,44,55,12,6,42 };
    int size = sizeof(pyramid) / sizeof(pyramid[0]);
    print_array(pyramid, size);
    print_pyramid(pyramid, size);

    return 0;
}

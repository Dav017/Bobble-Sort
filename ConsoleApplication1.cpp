#include <iostream> 

int main()
{
    const int size = 1000;
    int a[size];
    int quantity = 0;
    std::cin >> quantity;
    for (int i = 0; i < quantity; i++)
    {
        std::cin >> a[i];
    }
    for (int i = quantity - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }

        }
        std::cout << a[i] << " ";

    }
    std::cout << "\n";
    std::system("PAUSE");
}   
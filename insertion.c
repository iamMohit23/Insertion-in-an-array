#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for Insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    return 0;
}

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     int selling_price;
//     int cost_price;
//     int ammount;

//     printf("Enter Your Selling Price");
//     scanf("%d", &selling_price);
//     printf("Enter Your cost Price");
//     scanf("%d", &cost_price);

//     if (selling_price > cost_price)

//     {
//         ammount = selling_price - cost_price;
//         printf("You Are In Profit Of: %d", ammount);
//     }
//     else
//     {
//         ammount = cost_price - selling_price;
//         printf("You Are In Loss Of: %d", ammount);
//     }

//     return 0;
// }

// include <stdio.h>
// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// int main()
// {
//     int arr[9] = {2, 5, 7, 1, 2};
//     display(arr, 5);
// }

#define MAX_VAL 10

int main() {
    try {
        Array<int> a(3);
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = i + 1;

        Array<int> b = a;
        b[0] = 99;

        Array<int> c;
        c = a;

        std::cout << "a[0]=" << a[0] << ", b[0]=" << b[0] << ", c[0]=" << c[0] << std::endl;
        std::cout << a[10] << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}






// int main(void)
// {
//     Array<int> numbers(MAX_VAL);
//     int *mirror = new int[MAX_VAL];

//     std::srand(std::time(NULL));

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = std::rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }

//     std::cout << "\n\033[1;32mOriginal Array & Mirror Verification:\033[0m" << std::endl;
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         std::cout << "numbers[" << i << "]: " << numbers[i] 
//                   << " | mirror[" << i << "]: " << mirror[i] << std::endl;
//     }

//     std::cout << "\n\033[1;36mTesting Copy Constructor and Assignment:\033[0m" << std::endl;
//     {
//         Array<int> tmp = numbers;
//         Array<int> test;
//         test = tmp;

//         for (int i = 0; i < MAX_VAL; i++)
//         {
//             std::cout << "tmp[" << i << "]: " << tmp[i] 
//                       << " | test[" << i << "]: " << test[i] << std::endl;
//         }
//     }

//     std::cout << "\033[1;33mVerifying Array Integrity:\033[0m" << std::endl;
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "Error: Values in the copied array do not match the original!" << std::endl;
//             delete[] mirror;
//             return 1;
//         }
//     }
//     std::cout << "✅ All values match successfully!" << std::endl;

//     std::cout << "\033[1;31mTesting Out-of-Bounds Access:\033[0m" << std::endl;
//     try
//     {
//         std::cout << "Attempting to access index -2..." << std::endl;
//         numbers[-2] = 0;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }

//     try
//     {
//         std::cout << "Attempting to access index MAX_VAL..." << std::endl;
//         numbers[MAX_VAL] = 0;
//     }
//     catch (const std::exception &e)
//     {
//         std::cerr << "Caught Exception: " << e.what() << '\n';
//     }

//     std::cout << "\n\033[1;32m✅ All tests completed successfully!\033[0m" << std::endl;

//     delete[] mirror;
//     return 0;
// }

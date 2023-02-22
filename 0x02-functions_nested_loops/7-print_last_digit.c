int print_last_digit(int num) {
    int last_digit = num % 10;
    std::cout << "The last digit of " << num << " is " << last_digit << std::endl;
    return last_digit;
}


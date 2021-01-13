// #include <iostream>
// #include <string>
#include <cstdio>

int foo() {
    // std::string str1("white civic");
    // std::string str2("green civic");
    // if (str1.compare(str2)) {

    // }
    std::string a = "https://google.com";
    std::string b = "/fetch/";
    a.append(b).append("10012380@goo");
    
    std::cout << a << std::endl;
//    puts("Hello world \n");
    // c strings or primitive string
    char str[] = "string";
    printf("string is %s", str);
    // char str1[] = {"s", "t", "r", "i", "n", "g"}; should work but it does not
    // printf("string is %s\n", str1);
    return 0;
}

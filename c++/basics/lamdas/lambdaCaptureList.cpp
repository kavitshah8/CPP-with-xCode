int main() {
    int a = 10;
    [=](){
      std::cout << "a = " << a << std::endl;
      a = 100;
      std::cout << "a = " << a << std::endl;
    };
    std::cout << "a from main = " << a << std::endl;

    return 0;
}

#pragma once
class Cube
{
public:
    /*
        Similarities between Constructor and Desctructors 
            - Should NOT be called directly
            - Have no return type
        Difference: 
            - Destructors have zero arguments, unlike constructors
        */
    Cube();
    Cube(int);
    Cube(const Cube &);
    const Cube &operator=(const Cube &);
    ~Cube();

    int getVolunme();

private:
    int _length;
};
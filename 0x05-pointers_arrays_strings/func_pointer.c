// identifier: foo
// right: nothing
// left: pointer!
// right: function that takes 3 ints
// left: returns an address of an integer

int * (*foo) (int, int, int);


// foo is a pointer to a function that takes 3 ints and 
// returns an int pointers.

typedef int (*operation_ptr)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiplication(int a, int b) {
    return a * b;
}

// int int do_operation(operation_ptr op, int x, int y) typedef
int do_operation(int (*op) (int, int), int x, int y) {
    return op(x, y);
}


int main(int argc, char **argv) {
    int result = do_operation(add, 5, 34);
    int result2 = do_operation(mul, 2, 4)
}

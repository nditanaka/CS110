// Go to www.pythontutor.com and run this code in the C visualizer to see the
// action of the stack.

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int func_a(int x, int y) {
    int result = x * x + y;
    return result;
}

int func_b(int x, int y, int z) {
    int result = x + func_a(y, z);
    return result;
}

int main() {
    int x = 3;
    int y = 5;

    int a = func_a(x, y);
    int b = func_b(x, y, a);
    
    swap(&x, &y);

    return 0;
}
  

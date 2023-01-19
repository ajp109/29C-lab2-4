#include "mbed.h"

int main() {

    int numbers[] = {1,1,2,3,5,8,13};

    processArray(numbers);

    while (true) {
        sleep();
    }
}

#include <iostream>
#include <TrainComposition.h>

int main() {

    std::cout << "Train Composition" << std::endl;

    TrainComposition tree;

    tree.attachWagonFromLeft(7);
    tree.attachWagonFromLeft(13);
    tree.attachWagonFromLeft(16);
    tree.attachWagonFromLeft(17);
    tree.attachWagonFromRight(6);
    std::cout << tree.detachWagonFromRight() << ' '; // 6
    std::cout << tree.detachWagonFromRight() << ' '; // 7
    std::cout << tree.detachWagonFromLeft()  << ' '; // 17
    std::cout << tree.detachWagonFromLeft()  << ' '; // 16


    return 0;
}
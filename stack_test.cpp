#include <iostream>
#include <fstream>
#include <functional>
#include "stack.h"
using namespace std;

int main() {
    Stack<int> s;
    //Error checks
    //std::cout << "Top: " << s.top() << std::endl;
    //s.pop();
    s.push(127);   
    s.push(284);   
    s.push(3910);
    
    std::cout << "Top: " << s.top() << std::endl;

    s.pop();

    std::cout << "Top: " << s.top() << std::endl;
    return 0;
}
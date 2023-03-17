#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<char> v(10);
    vector<char> v2;
    char str[] = "<vector>";
    for(int i = 0; i < 10; i++){
        v[i] = 'a' + i;
    }
    for(int i = 0; str[i]; i++){
        v2.push_back(str[i]);
    }
    std::cout << "Original contents" << std::endl;
    for(auto& e : v ){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    vector<char>::iterator itr = v.begin();
    itr+=2;
    v.insert(itr, 10, 'x');

    std::cout << "Size after insertion: " << v.size() << std::endl;
    std::cout << "Contents after insertion: " << std::endl;
    for(auto& e : v ){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    itr = v.begin();
    itr += 2;
    v.erase(itr, itr + 10);

    std::cout << "Size after deletion: " << v.size() << std::endl;
    std::cout << "Contents after deletion: " << std::endl;
    for(auto& e : v ){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    //insert v2 into v
    v.insert(itr, v2.begin(), v2.end());

    std::cout << "Size after insertion: " << v.size() << std::endl;
    std::cout << "Contents after insertion: " << std::endl;
    for(auto& e : v ){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    return 0;

}
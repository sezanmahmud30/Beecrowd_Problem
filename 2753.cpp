#include <iostream>
using namespace std;

int main()
{
    for(int i = 97;i <= 122;i++){
        cout<< i <<" e "<< static_cast<char>(i)<<endl;
    }
    return 0;
}


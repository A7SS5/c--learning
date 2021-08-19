#include<iostream>
#include<vector>
#include<memory>
#include<utility>
using namespace std;
class example{
    public:
    example(int i=0):a(i){if (i<0) throw std::out_of_range("bad unsigned int");};
    operator int() const{return a;}
    private:
    unsigned int a=0;
}
int main()
{
}
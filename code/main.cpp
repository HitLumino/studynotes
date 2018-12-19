#include <iostream>

using namespace std;
int main()
{
// 	int x=0;
// 	int y=42;
// 	auto qqq=[x,&y]{
//     std::cout<<x<<std::endl;
//     std::cout<<y<<std::endl;
//     ++y;
// };
//     x=y=77;
//     qqq();
//     qqq();
//     return 0;
	int id=0;
	auto f=[id]() mutable{
    std::cout<<"id: "<<id<<std::endl;
    id++;//OK
};
id=42;
f();
f();
f();
std::cout<<id<<std::endl;
}

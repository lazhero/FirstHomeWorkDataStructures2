#include <iostream>
#include "DoubleList/DoubleList.hpp"
#include<string>

void satanas();
DoubleList<int> *List;
int main() {
   satanas();
   std::cout<<*List->get(2)<<std::endl;
    List->erase(3);
    List->erase(9);
    std::cout<<*List->get(2)<<std::endl;
}
void satanas(){
    List=new DoubleList<int>;
    for(int i=1;i<=5;i++){
        List->add(i);
    }
   //List->erase(7);


}




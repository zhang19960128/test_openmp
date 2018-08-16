#include <iostream>
#include <vector>
#include <time.h>
int main(){
    int s=100000000;
    std::vector<double> a(s,2);
    std::vector<double> b(s,1);
    std::vector<double> c(s,0);
    clock_t start=clock();
    for(size_t i=0;i<s;i++){
        c[i]=a[i]+b[i];
    }
    clock_t end=clock();
    std::cout<<"total time takes is: "<<((float)(end-start))/CLOCKS_PER_SEC<<std::endl;
}

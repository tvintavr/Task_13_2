#include <iostream>
#include <vector>
#include <cassert>

int main() {
    std::vector<float> prices={2.5, 4.25, 3.0, 10.0, 4.5, 8.67};
    for (int i=0;i<prices.size();i++) {
        std::cout<<"Position "<<i<<" price: "<<prices[i]<<std::endl;
    }

    
    std::cout<<"Enter items amount: ";
    int n;
    std::cin>>n;
    assert(n>0);
    assert(!std::cin.fail());


    std::cout<<"Enter what to buy (0.."<<prices.size()-1<<"): ";

    float sum=0;

    std::vector<int> items(n);

    for (int i=0;i<n;i++) {
        std::cin>>items[i];
        assert(items[i]>=0);
        assert(items[i]<prices.size());
        assert(!std::cin.fail());
        sum+=prices[items[i]];
    }
    std::cout<<"==========\n"<<"Full cost: "<<sum;




    
}
#include <iostream>
using namespace std;
#include <string>

class Product {
    public:
    string product_name;
    int product_code;

    Product (string p_name="codetree", int p_code=50) {
        this->product_name=p_name;
        this->product_code=p_code;
    }
   
};

int main() {
    string name; int code;
    cin>>name>>code;

    Product p1=Product();
    Product p2=Product(name, code);
    cout<<"product "<<p1.product_code<<" is "<<p1.product_name<<"\n";
    cout<<"product "<<p2.product_code<<" is "<<p2.product_name<<"\n";


    return 0;
}
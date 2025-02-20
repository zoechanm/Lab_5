#include <iostream>
using namespace std;
class me {
protected:
    int age;
};
class myclass: public me {
    public:
    void setAge(int s){
        age = s;

}
    int getAge() {


        return age;
    }

};
int main() {
    myclass obj;
    obj.setAge(50);
    cout << obj.getAge() << endl;
}
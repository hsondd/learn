#include <stdio.h>
#include <string.h>
#include <iostream>

class Car{
    private:
        int speed;
        char mark[20];
        float price;
    public:
        void setSpeed(int);
        void getSpeed();
        void setMark(char);
        char getMark();
        void setPrice(float);
        float getPrice();
        void init(int, char[], float);
        void show();
};

void Car::setSpeed(int speedIn){
    speed = speedIn;
}

void Car::getSpeed(){
    return speed;
}
void Car::setMark(char markIn){
    // Gán nhãn cho xe
    strcpy(mark, markIn);
}
char[] Car::getMark(){
    // Đọc nhãn xe
    return mark;
}
void Car::setPrice(float priceIn){
    // Gán giá cho xe
    price = priceIn;
}
float Car::getPrice(){
    // Đọc giá xe
    return price;
}
void Car::init(int speedIn, char markIn[], float priceIn){
    speed = speedIn;
    strcpy(mark, markIn);
    price = priceIn;
    return;
}
void Car::show(){
    // Phương thức giới thiệu xe
    std::cout << "This is a" << mark << " having a speed of "
    << speed << "km/h and its price is $" << price << endl;
    return;
}
void main(){
    clrscr();
    Car myCar;
    // Khai báo biến lớp
    // Khởi tạo lần thứ nhất
    std::cout << "Xe thu nhat: " << endl;
    myCar.init(100, "Ford", 3000);
    std::cout << "Toc do (km/h): " << myCar.getSpeed() << endl;
    std::cout << "Nhan hieu : " << myCar.getMark() << endl;
    std::cout << "Gia ($): " << myCar.getPrice() << endl;
    // Thay đổi thuộc tính xe
    std::cout << "Xe thu hai: " << endl;
    myCar.setSpeed(150);
    myCar.setMark("Mercedes");
    myCar.setPrice(5000);
    myCar.show();
    return;
}
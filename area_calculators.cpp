//This is a program for calculating area.s of diffrent shapes using multi-level inheritanse.

#include<iostream>
#include<math.h>

//This is a base class.
class Area_of_rectangle{ 
    public:

    int area,length,width;


    void rec_cal( int length, int width) {

        int area = width * length;

        std::cout<<"The area of rectangle is: "<<area;


    }

};

//This is the child class (Area of triangle) and (area of rectangle) is parent class
class Area_of_triangle : public Area_of_rectangle {
    public:

        int base,height;

        void tri_cal(int height, int base) {

            int area = height * base / 2;

            std::cout<<"The area of the triangle is: "<<area;
        }

};

//This is the child class (Circumfrance of circle) and (Area of triangle) is parent class
class Circumfrance_of_circle : public Area_of_triangle{
    public:

        const double PI = 3.14159; int radius;

        void cal_cir(int radius){

            int circum = 2 * PI * radius;

             std::cout<<"The circumfrance of circle is: "<<circum;


        }
        
};

//This is the child class (Area of sqr) and (Circumfrance of circle) is parent class
class Area_of_sqr : public Circumfrance_of_circle{ 
    public:

        void cal_sqr(int area) {

            int a = pow(area,2);

            std::cout<<"The area of square is: "<<a;
        }

};


int main() {

    int user_input;

    Area_of_sqr cls; // this is an object of area of sqr

    std::cout<<"\n\tPlease choose an operation below! \n";
    std::cout<<"1.To calculate the area of an RECTANGLE\n";
    std::cout<<"2.To calculate the area of an TRIANGLE\n";
    std::cout<<"3.To calculate the circumfrace of a circle\n";
    std::cout<<"4.To calculate the area of an SQUARE\n";

    
    std::cin>>user_input;

    if (user_input == 1) { //this calculates the area of rectangle
        std::cout<<"\n";

        std::cout<<"Enter the length of the rectangle: ";

        std::cin>>cls.length;

        std::cout<<"Enter the width of the rectangle: ";

        std::cin>>cls.width;

        cls.rec_cal(cls.length, cls.width);

    }

    else if (user_input == 2) { // this calculates the area of triangle

        std::cout<<"Enter the base of the triangle: ";

        std::cin>>cls.base;

        std::cout<<"Enter the height of the triangle: ";

        std::cin>>cls.height;

        cls.tri_cal(cls.base,cls.height);



    }

    else if (user_input == 3){ // this calculates the circumfrance of circle

        std::cout<<"Enter the radius of a circle: ";

        std::cin>>cls.radius;

        cls.cal_cir(cls.radius);

    }

    else if (user_input == 4) { // this calculates the area of square

        std::cout<<"Ebter the size of side for square: ";

        std::cin>>cls.area;

        cls.cal_sqr(cls.area);

    }

    else {
        std::cout<<"Invalid Input! ";
    }




}
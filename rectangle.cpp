import std;
using namespace std;
class Rectangle{
    private:
    double width;
    double length;
    public:
    void setwidth(double W){
        width = W;
    }
    void setlength(double L){
        length = L;
    }
    double getwidth(){
        return width;
    }
    double getlength(){
        return length;
    }
    double getArea(){
        return width*length;
    }
    double getPerimeter(){
        return 2*(width + length);
    }
};
int main(){
    Rectangle R;
    //setting dimensions
    R.setwidth(3);
    R.setlength(9);
    cout<<"the width is:"<<R.getwidth()<<endl;
    cout<<"the length is:"<<R.getlength()<<endl;
    cout<<"the area is:"<<R.getArea()<<endl;
    cout<<"the perimeter is:"<<R.getPerimeter()<<endl;

    return 0;
}
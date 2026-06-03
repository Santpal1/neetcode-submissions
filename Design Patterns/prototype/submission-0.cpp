class Shape {
public:
    virtual ~Shape() {}
    virtual Shape* clone() const = 0;
};

class Rectangle : public Shape {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    Shape* clone() const override {
        // Write your code here
        Rectangle* r = new Rectangle(this->width, this->height);
        return r;
    }
};

class Square : public Shape {
private:
    int length;

public:
    Square(int l) : length(l) {}

    int getLength() const {
        return length;
    }

    Shape* clone() const override {
        // Write your code here
        Square* s = new Square(this->length);
        return s;
    }
};

class Test {
public:
    vector<Shape*> cloneShapes(const vector<Shape*>& shapes) {
        // Write your code here
        vector<Shape*> ans;
        for(auto s : shapes){
            ans.push_back(s->clone());
        }
        return ans;
    }
};

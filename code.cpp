#include <string>
#include <iostream>
using namespace std;

Class MemberAccount{
  string name;
  int age;
  float height,weight,waist;

public:
  MemberAccount(string _n, int _a, float _h,float _weight,float _w):name(_n),age(_a),height(_h),weight(_w),waist(_w){}
  string getName() const { return name; }

  int getAge() const { return age; }
  float getHeight() const { return height; }
  float getWeight() const { return weight; }
  float getWaistSize() const { return waist; }

  void setName(string n) { name = n; }
  void setAge(int a) { age = a; }
  void setHeight(float h) { height = h; }
  void setWeight(float w) { weight = w; }
  void setWaistSize(float ws) { waistSize = ws; }
};

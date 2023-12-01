#include <string>
#include <iostream>
#include <vector>
#include <SDL.h>
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

class Trainer{
string name,gender,charges;
int age,rating;
public:
    Trainer(){}
    Trainer(string _name,string _gender, string _charges, int _ age, int _ rate):name(_name), gender(_gender),charges(_charges), age(_age), rating(_rate){}
    
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGender() const { return gender; }
    int getRating() const { return rating; }
    string getcharges() const {return charges;}

    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setGender(string gender) { this->gender = gender; }
    void setRating(int rating) { this->rating = rating; }
    void setCharges(string charges){this -> charges=charges;}

    friend ostream& operator<<(ostream& os, const Trainer& trainer);

};

ostream& operator << (ostream& T, const Trainer& trainer){
    T << "Name: " << trainer.name << endl;
    T << "Gender: " << trainer.gender << endl;
    T << "Rating: " << trainer.rating << endl;
    T << "Cost: " << trainer.cost <<endl;
    return T;
}
};

class Chest{public:
virtual void basic()=0;
virtual void intermediate()=0;
virtual void advanced()=0;
}

class ChestWorkout:public Chest{
public:
void basic()  override{
  cout<<"Here is a basic chest workout plan. All the best!"<<endl<<"Max rest between sets : 1-2 mins;
  cout<<"Dumbbell Bench Press 3x12"<<endl<<"Barbell Bench Press 3x8"<<endl<<"Wide grip Pushups 3x20"<<endl<<"Incline Barbell press 4x10"<<endl<<"Incline DB Fly's 3x8"<<endl<<"Have a       Good Workout!";    }

void intermediate() override{
  cout<<"Here is an Intermediate Chest workout plan. All the best!"<<endl<<"Max rest between sets : 45-70 seconds";                        
  cout<<"Dumbbell Bench Press 4x12"<<endl<<"Barbell Bench Press 3x12"<<endl<<"Wide grip Pushups 5x12"<<endl<<"Incline Barbell press 4x12"<<endl<<"Incline DB Fly's 3x10"<<endl<<"Decline Press(Smith Machine) 3x10 "<<endl<<"Have a Good Workout!";    }

void advanced()override{  cout<<"Here is an ADVANCED Chest workout plan. All the best!"<<endl<<"Max rest between sets : 15-40 seconds";                        
  cout<<"Flat Barbell Bench Press 4x12 + Incline DB Press 4x12 superset "<<endl<<"DB Bench Press 3x15 + Machine Flies 3x12 Superset "<<endl<<"Wide grip Pushups 3x10 + Diamond Pushups 3x20 superset "<<endl<<"Incline Barbell press 4x12"<<endl<<"Incline DB Fly's 3x10"<<endl<<"Decline Press(Smith Machine) 3x10 "<<endl<<"Hope you survived :) Good Job!";    }
};

class Back{public:
virtual void basic()=0;
virtual void intermediate()=0;
virtual void advanced()=0;
}

class ChestWorkout:public Chest{
public:
void basic()  override{
  cout<<"Here is a basic BACK workout plan. All the best!"<<endl<<"Max rest between sets : 1-2 mins;
cout<<"Barbell Overhand Rows 3x12"<<endl<<"Barbell Underhand Rows 3x8"<<endl<<"Wide Grip Lat pulldown 3x10"<<endl<<"Seated Machine Rows 4x10"<<endl<<"Dumbbell Pullover 3x8"<<endl<<"Have a Good Workout!";    }

void intermediate() override{
  cout<<"Here is an Intermediate Back workout plan. All the best!"<<endl<<"Max rest between sets : 45-70 seconds";                        
  cout<<"V-Grip Lat Pulldown 2x15"<<endl<<"Single Arm Seated Rows 3x12"<<endl<<"Deadlift 3x 12/10/8 (Progressively overload the Weight)"<<endl<<"Chest Supported DB Rows"<<endl<<"5 Mins Stretching"<<endl<<"Rope Pulldown 2x10"<<endl<<"Have a Good Workout!";    }

void advanced()override{  cout<<"Here is an ADVANCED Back workout plan. All the best!"<<endl<<"Max rest between sets : 15-40 seconds";                        
  cout<<"Heavy Deadlift 3x12/10/8"<<endl<< "Barbell Overhand Rows 3x12 (Heavy)"<<endl<<"DB Single Arm Rows 3x15 + Lat Pulldown (Wide Grip) 3x12 Superset "<<endl<<"Close grip Lat pulldown 3x12 (max 20 sec  rest)"<<endl<<"Incline Barbell press 4x12"<<endl<<"Incline DB Fly's 3x10"<<endl<<"Decline Press(Smith Machine) 3x10 "<<endl<<"Hope you survived :) Good Job!";    }
};










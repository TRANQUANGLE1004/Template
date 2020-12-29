#ifndef _HEADER_H_
#define _HEADER_H_
// all method, all variable in class

class MY_CLASS {

private:
    int age;

protected:


public:
    //------------constructor and destructor--------------
    MY_CLASS();
    ~MY_CLASS();
    //----------------------------------------------------

    //------------------get variable-----------------------
    int getAge();
    //...
    //-----------------------------------------------------

    //------------------set variable-----------------------
    void setAge();
    //...
    //-----------------------------------------------------

    //-------------------other function--------------------


    //-----------------------------------------------------

    //--------------------debug function-------------------
    void printStatus();
    void printAge();
    void printAll(Serial &_serial);
    //...
}


#endif
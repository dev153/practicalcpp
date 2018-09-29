//
//  Singleton.h
//  practicalcpp
//

#pragma Singleton_h

class Singleton {
public:
    static Singleton& Instance();
    void foo();
private:
    // prevent public instantiation, copying, assignement, movement & destruction.
    Singleton(){}
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&)=delete;
    Singleton(Singleton&&) = delete;
    Singleton&& operator=(Singleton&) = delete;
    ~Singleton() {}
};

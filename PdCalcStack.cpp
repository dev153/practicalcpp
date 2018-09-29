//
//  PdCalcStack.cpp
//  pdCalc
//

#include "PdCalcStack.hpp"

#include <deque>
#include <memory>
using std::deque;
using std::make_unique;

//======================================================================================================================
//
//    PdCalcStackImpl class implementation - (PIMPL IDIOM)
//
//======================================================================================================================

class PdCalcStack::PdCalcStackImpl {
public:
    explicit PdCalcStackImpl(const PdCalcStack& parent);
    void push(double);
    double pop();
    void getElements(int, std::vector<double&>) const;
    void swapTop();
private:
    const PdCalcStack& parent_;
    deque<double> stack_;
};

PdCalcStack::PdCalcStackImpl::PdCalcStackImpl(const PdCalcStack& parent)
: parent_(parent)
{}

void PdCalcStack::PdCalcStackImpl::push(double val) {
    stack_.push_back(val);
}

double PdCalcStack::PdCalcStackImpl::pop() {
    auto value = stack_.back();
    stack_.pop_back();
    return value;
}

//======================================================================================================================

PdCalcStack::PdCalcStack() {
    pimpl_ = make_unique<PdCalcStackImpl>(*this);
}

void PdCalcStack::push(double d) {
    pimpl_->push(d);
    return;
}

double PdCalcStack::pop() {
    return pimpl_->pop();
}

//class Stack::StackImpl
//{
//public:

//    void push(double d, bool suppressChangeEvent);
//    double pop(bool suppressChangeEvent);
//    void swapTop();
//    vector<double> getElements(size_t n) const;
//    void getElements(size_t n, vector<double>& v) const;
//    size_t size() const { return stack_.size(); }
//    void clear();
//    double top() const;
//};

//
//  PdCalcStack.hpp
//  pdCalc
//

#pragma PdCalcStack_hpp

#include <vector>
#include <memory>

class PdCalcStack {
private:
    class PdCalcStackImpl;
public:
    static PdCalcStack& Instance();
    void push(double);
    double pop();
    void getElements(int, std::vector<double&>) const;
    void swapTop();
private:
    PdCalcStack();
    ~PdCalcStack();
    // appropriate blocking of copying, assigning, moving...
    PdCalcStack(const PdCalcStack&) = delete;
    PdCalcStack(PdCalcStack&&) = delete;
    PdCalcStack& operator=(const PdCalcStack&) = delete;
    PdCalcStack&& operator=(PdCalcStack&) = delete;
    std::unique_ptr<PdCalcStackImpl> pimpl_;
};

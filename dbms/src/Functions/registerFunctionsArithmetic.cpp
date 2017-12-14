#include <Functions/FunctionFactory.h>
#include <Functions/FunctionsArithmetic.h>

 #include "registerFunctionPlus.h"
 #include "registerFunctionMinus.h"
 #include "registerFunctionMultiply.h"
 #include "registerFunctionDivideFloating.h"
 #include "registerFunctionDivideIntegral.h"
 #include "registerFunctionDivideIntegralOrZero.h"
 #include "registerFunctionModulo.h"
 #include "registerFunctionNegate.h"
 #include "registerFunctionAbs.h"
 #include "registerFunctionBitAnd.h"
 #include "registerFunctionBitOr.h"
 #include "registerFunctionBitXor.h"
 #include "registerFunctionBitNot.h"
 #include "registerFunctionBitShiftLeft.h"
 #include "registerFunctionBitShiftRight.h"
 #include "registerFunctionBitRotateLeft.h"
 #include "registerFunctionBitRotateRight.h"
 #include "registerFunctionLeast.h"
 #include "registerFunctionGreatest.h"
 #include "registerFunctionBitTest.h"
 #include "registerFunctionBitTestAny.h"
 #include "registerFunctionBitTestAll.h"


namespace DB
{

void registerFunctionsArithmetic(FunctionFactory & factory)
{

 registerFunctionPlus(factory);
 registerFunctionMinus(factory);
 registerFunctionMultiply(factory);
 registerFunctionDivideFloating(factory);
 registerFunctionDivideIntegral(factory);
 registerFunctionDivideIntegralOrZero(factory);
 registerFunctionModulo(factory);
 registerFunctionNegate(factory);
 registerFunctionAbs(factory);
 registerFunctionBitAnd(factory);
 registerFunctionBitOr(factory);
 registerFunctionBitXor(factory);
 registerFunctionBitNot(factory);
 registerFunctionBitShiftLeft(factory);
 registerFunctionBitShiftRight(factory);
 registerFunctionBitRotateLeft(factory);
 registerFunctionBitRotateRight(factory);
 registerFunctionLeast(factory);
 registerFunctionGreatest(factory);
 registerFunctionBitTest(factory);
 registerFunctionBitTestAny(factory);
 registerFunctionBitTestAll(factory);


}

}
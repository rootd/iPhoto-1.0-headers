/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "MUMathExpressionBase.h"

@interface MUMathExpressionFloatBased : MUMathExpressionBase
{
    struct FunctionInterpreter<float> *mInterpreter;
}

+ (float)invalidResult;
+ (float)evaluateString:(id)fp8 error:(id *)fp12;
- (BOOL)isValueIllegal:(float)fp8;
- (float)evaluate;
- (void)resetAllVariables;
- (void)setVariableValues:(id)fp8;
- (float)valueForVariable:(id)fp8;
- (void)setValue:(float)fp8 forVariable:(id)fp12;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithString:(id)fp8 error:(id *)fp12;
- (id)init;

@end


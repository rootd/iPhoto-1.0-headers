/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIAlertViewDelegate-Protocol.h"

@class BLAlertAction, NSArray, UIAlertView;

@interface BLAlert : _ACAccountTypeIdentifierTwitter <UIAlertViewDelegate>
{
    UIAlertView *m_alertView;
    BLAlertAction *m_cancelAction;
    NSArray *m_actions;
    id m_conditionBlock;
    id m_context;
    id m_executionBlock;
    BOOL m_showing;
    int m_options;
}

+ (id)popPendingAlert;
+ (void)pushPendingAlert:(id)fp8;
+ (id)pendingAlerts;
+ (void)performWithTitle:(id)fp8 message:(id)fp12 action:(id)fp16;
- (void)setContext:(id)fp8;
- (id)context;
- (void)setConditionBlock:(id)fp(null);
- (id)conditionBlock;
- (void)didPresentAlertView:(id)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (BOOL)isShowing;
- (void)setMessage:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)hideWithDelay:(double)fp8;
- (void)hide;
- (void)showWithExecutionBlock:(id)fp(null);
- (void)show;
- (void)showPendingAlertIfNeeded;
- (BOOL)wantSingular;
- (void)dealloc;
- (id)initWithTitle:(id)fp8 message:(id)fp12 cancelAction:(id)fp16 otherActions:(id)fp20;
- (id)initWithTitle:(id)fp8 message:(id)fp12 options:(int)fp16 cancelAction:(id)fp20 otherActions:(id)fp24;

@end


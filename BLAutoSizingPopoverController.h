/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class UIViewController;

@interface BLAutoSizingPopoverController : _ACAccountTypeIdentifierTwitter
{
    UIViewController *m_iPhoneViewController;
}

+ (int)controllerIsVisible;
- (void)setIPhoneViewController:(id)fp8;
- (id)iPhoneViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)fp8;
- (id)initWithViewController:(id)fp8;
- (id)initWithNavigationController:(id)fp8;
- (void)a_cancel:(id)fp8;
- (void)dismissPopoverAnimated:(BOOL)fp8;
- (void)presentPopoverFromBarButtonItem:(id)fp8 permittedArrowDirections:(unsigned int)fp12 animated:(BOOL)fp16;
- (void)presentPopoverFromRect:(struct CGRect)fp8 inView:(id)fp24 permittedArrowDirections:(unsigned int)fp28 animated:(BOOL)fp32;
- (void)hideOnIPhone;
- (void)presentOnIPhone;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, UIActivityIndicatorView, UIButton, UIView, UIWebView;

@interface FBDialog : _ACAccountTypeIdentifierTwitter <UIWebViewDelegate>
{
    id <FBDialogDelegate> _delegate;
    NSMutableDictionary *_params;
    NSString *_serverURL;
    NSURL *_loadingURL;
    UIWebView *_webView;
    UIActivityIndicatorView *_spinner;
    UIButton *_closeButton;
    int _orientation;
    BOOL _showingKeyboard;
    UIView *_modalBackgroundView;
}

- (void)setParams:(id)fp8;
- (id)params;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)dialogDidCancel:(id)fp8;
- (void)dialogDidSucceed:(id)fp8;
- (void)dialogWillDisappear;
- (void)dialogWillAppear;
- (void)dismissWithError:(id)fp8 animated:(BOOL)fp12;
- (void)dismissWithSuccess:(BOOL)fp8 animated:(BOOL)fp12;
- (void)show;
- (void)loadURL:(id)fp8 get:(id)fp12;
- (void)load;
- (id)initWithURL:(id)fp8 params:(id)fp12 delegate:(id)fp16;
- (id)getStringFromUrl:(id)fp8 needle:(id)fp12;
- (void)keyboardWillHide:(id)fp8;
- (void)keyboardWillShow:(id)fp8;
- (void)deviceOrientationDidChange:(void *)fp8;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (void)webViewDidFinishLoad:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)drawRect:(struct CGRect)fp8;
- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)dismiss:(BOOL)fp8;
- (void)postDismissCleanup;
- (void)removeObservers;
- (void)addObservers;
- (id)generateURL:(id)fp8 params:(id)fp12;
- (void)bounce2AnimationStopped;
- (void)bounce1AnimationStopped;
- (void)updateWebOrientation;
- (void)sizeToFitOrientation:(BOOL)fp8;
- (struct CGAffineTransform)transformForOrientation;
- (BOOL)shouldRotateToOrientation:(int)fp8;
- (void)strokeLines:(struct CGRect)fp8 stroke:(const float *)fp24;
- (void)drawRect:(struct CGRect)fp8 fill:(const float *)fp24 radius:(float)fp28;
- (void)addRoundedRectToPath:(struct CGContext *)fp8 rect:(struct CGRect)fp12 radius:(float)fp28;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSURLRequest, UIButton, UIWebView;

@interface BLWebViewController : BLViewController <UIWebViewDelegate>
{
    UIWebView *m_webView;
    UIButton *m_backButton;
    NSURLRequest *m_urlRequest;
}

- (id)urlRequest;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)init;
- (void)setUrlRequest:(id)fp8;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)a_back:(id)fp8;

@end


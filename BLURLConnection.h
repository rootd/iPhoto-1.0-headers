/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLOutputStream;

@interface BLURLConnection : _ACAccountTypeIdentifierTwitter
{
    BLOutputStream *m_outputStream;
    id m_didSendBlock;
    id m_completionBlock;
    id m_didReceiveDataBlock;
    id m_cancelBlock;
    int m_writtenAmount;
}

+ (id)performRequest:(id)fp8 withCompletionBlock:(id)fp(null);
+ (id)connectionWithRequest:(id)fp8 delegate:(id)fp12;
+ (id)sendSynchronousRequest:(id)fp8 returningResponse:(id *)fp12 error:(id *)fp16;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didSendBodyData:(int)fp12 totalBytesWritten:(int)fp16 totalBytesExpectedToWrite:(int)fp20;
- (void)setCancelBlock:(id)fp(null);
- (void)setDidReceiveDataBlock:(id)fp(null);
- (void)setCompletionBlock:(id)fp(null);
- (void)setDidSendBlock:(id)fp(null);
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)fp8 delegate:(id)fp12 startImmediately:(BOOL)fp16;
- (id)initWithRequest:(id)fp8 delegate:(id)fp12;
- (void)dealloc;
- (id)initWithRequest:(id)fp8;

@end


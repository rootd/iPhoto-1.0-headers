/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSError, NSMutableArray;

@interface BLDBRequest : _ACAccountTypeIdentifierTwitter <NSCopying>
{
    int m_requestType;
    int m_collectionType;
    NSDictionary *m_args;
    int m_cacheMode;
    BOOL m_sync;
    BOOL m_persistent;
    id m_info;
    id m_progressBlock;
    id m_resultBlock;
    NSMutableArray *m_postProcessBlockList;
    BOOL m_cancel;
    NSError *_error;
    id _partialResult;
    id _result;
}

+ (id)attachmentsDebugStringWithTypeMask:(int)fp8;
+ (id)attachmentFileNameWithType:(int)fp8;
+ (BOOL)isConflictSessionResolvableAttachmentFileType:(int)fp8;
+ (BOOL)isConflictAutoResolvableAttachmentFileType:(int)fp8;
+ (BOOL)isModelArchiveAttachmentFileType:(int)fp8;
+ (BOOL)isUbiquitousAttachmentFileType:(int)fp8;
+ (unsigned int)ubiquitousAttachmentFileTypeAtIndex:(unsigned int)fp8;
+ (unsigned int)ubiquitousAttachmentFileTypeCount;
+ (unsigned int)attachmentFileTypeAtIndex:(unsigned int)fp8;
+ (unsigned int)attachmentFileTypeCount;
+ (id)requestWithType:(int)fp8 collectionType:(int)fp12 args:(id)fp16 cacheMode:(int)fp20 sync:(BOOL)fp24 persistent:(BOOL)fp28 resultBlock:(id)fp(null);
- (void)setResult:(id)fp8;
- (id)result;
- (void)setPartialResult:(id)fp8;
- (id)partialResult;
- (void)setError:(id)fp8;
- (id)error;
- (void)setCancel:(BOOL)fp8;
- (BOOL)cancel;
- (void)setResultBlock:(id)fp(null);
- (id)resultBlock;
- (void)setProgressBlock:(id)fp(null);
- (id)progressBlock;
- (void)setInfo:(id)fp8;
- (id)info;
- (BOOL)persistent;
- (BOOL)sync;
- (int)cacheMode;
- (id)args;
- (int)collectionType;
- (int)requestType;
- (id)popPostProcessBlock;
- (void)pushPostProcessBlock:(id)fp(null);
- (void)turnToAsynchronous;
- (void)takeResultFromRequest:(id)fp8;
- (BOOL)wouldHaveResultForRequest:(id)fp8;
- (BOOL)hasResultForRequest:(id)fp8;
- (void)removeArgsWithKeys:(id)fp8;
- (void)addArgs:(id)fp8;
- (BOOL)isSameAs:(id)fp8;
- (id)initWithType:(int)fp8 collectionType:(int)fp12 args:(id)fp16 cacheMode:(int)fp20 sync:(BOOL)fp24 persistent:(BOOL)fp28 resultBlock:(id)fp(null);
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)description;
- (void)dealloc;
- (void)_setPersistent:(BOOL)fp8;
- (void)_setSync:(BOOL)fp8;
- (void)_setCacheMode:(int)fp8;
- (void)_setArgs:(id)fp8;
- (void)_setCollectionType:(int)fp8;
- (void)_setRequestType:(int)fp8;

@end


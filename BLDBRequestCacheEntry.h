/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLDBRequest, NSDate;

@interface BLDBRequestCacheEntry : _ACAccountTypeIdentifierTwitter
{
    BLDBRequest *m_request;
    NSDate *m_dateAccessed;
}

- (void)setDateAccessed:(id)fp8;
- (id)dateAccessed;
- (void)setRequest:(id)fp8;
- (id)request;
- (id)description;
- (void)dealloc;

@end


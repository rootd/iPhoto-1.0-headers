/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSMutableData, NSOutputStream, NSString;

@interface BLOutputStream : _ACAccountTypeIdentifierTwitter
{
    BOOL m_isInMemory;
    NSMutableData *m_inMemoryData;
    NSOutputStream *m_fileBackingStream;
    NSString *m_fileBackingPath;
    int m_writtenAmount;
}

- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)fp8 maxLength:(unsigned int)fp12;
- (id)inputStreamWithStreamData;
- (void)cleanUpTemporaryFile;
- (void)close;
- (void)open;
- (id)uniqueTemporaryPath;
- (void)dealloc;
- (id)init;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface BLKeychainHelper : _ACAccountTypeIdentifierTwitter
{
}

+ (id)sharedInstance;
- (void)deleteKeychainGenericPasswordEntries;
- (void)deleteKeychainGenericPasswordEntriesForService:(id)fp8;
- (void)deleteEntriesForAccount:(id)fp8 andService:(id)fp12;
- (void)deleteEntryForAccount:(id)fp8 service:(id)fp12 andKey:(id)fp16;
- (id)objectForAccount:(id)fp8 service:(id)fp12 andKey:(id)fp16;
- (void)setObject:(id)fp8 forAccount:(id)fp12 service:(id)fp16 andKey:(id)fp20;
- (id)dataForAccount:(id)fp8 andService:(id)fp12;
- (void)setData:(id)fp8 forAccount:(id)fp12 andService:(id)fp16;
- (void)dealloc;
- (id)init;

@end


/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FBSessionDelegate <NSObject>
- (void)fbSessionInvalidated;
- (void)fbDidLogout;
- (void)fbDidExtendToken:(id)fp8 expiresAt:(id)fp12;
- (void)fbDidNotLogin:(BOOL)fp8;
- (void)fbDidLogin;
@end

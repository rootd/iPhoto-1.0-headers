/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSString;

@interface BLOAuthParameter : _ACAccountTypeIdentifierTwitter
{
    NSString *m_key;
    NSString *m_value;
}

+ (id)parameterWithKey:(id)fp8 andValue:(id)fp12;
- (void)setValue:(id)fp8;
- (id)value;
- (void)setKey:(id)fp8;
- (id)key;
- (id)encodedValue;
- (id)encodedKey;
- (id)encodedPair;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)description;
- (id)initWithKey:(id)fp8 andValue:(id)fp12;

@end


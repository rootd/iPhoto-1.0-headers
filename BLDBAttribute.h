/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSString;

@interface BLDBAttribute : _ACAccountTypeIdentifierTwitter
{
    NSString *m_name;
    int m_type;
    NSString *m_modelKey;
}

+ (id)primaryKeyAttributeInList:(id)fp8;
+ (id)attributeWithModelKey:(id)fp8 inList:(id)fp12;
+ (id)attributeWithName:(id)fp8 type:(int)fp12 modelKey:(id)fp16;
- (void)setModelKey:(id)fp8;
- (id)modelKey;
- (void)setType:(int)fp8;
- (int)type;
- (void)setName:(id)fp8;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;

@end

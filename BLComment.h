/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSDate, NSString, NSURL;

@interface BLComment : _ACAccountTypeIdentifierTwitter
{
    NSString *m_comment;
    NSString *m_name;
    NSDate *m_date;
    NSURL *m_imageUrl;
}

+ (id)commentWithString:(id)fp8 date:(id)fp12 name:(id)fp16 imageUrl:(id)fp20;
- (void)setImageUrl:(id)fp8;
- (id)imageUrl;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setName:(id)fp8;
- (id)name;
- (void)setComment:(id)fp8;
- (id)comment;
- (void)dealloc;
- (int)compare:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)description;

@end


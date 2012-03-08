/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class UIImageView, UILabel;

@interface BLCommentTableCell : _ACAccountTypeIdentifierTwitter
{
    UILabel *m_commentLabel;
    UIImageView *m_imageView;
    UILabel *m_nameLabel;
    UILabel *m_dateLabel;
}

+ (id)defaultTextColor;
+ (id)defaultFont;
+ (float)heightForCommentString:(id)fp8 withWidth:(float)fp12;
- (void)dealloc;
- (void)setDate:(id)fp8;
- (void)setComment:(id)fp8;
- (void)setName:(id)fp8;
- (void)setImage:(id)fp8;
- (void)layoutSubviews;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end


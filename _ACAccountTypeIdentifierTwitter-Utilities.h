/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface _ACAccountTypeIdentifierTwitter (Utilities)
+ (BOOL)isString:(id)fp8 equalToString:(id)fp12;
- (id)rangesOfString:(id)fp8;
- (id)rangesOfStringsSurroundedBy:(id)fp8;
- (struct _NSRange)rangeOfStringSurroundedBy:(id)fp8;
- (struct _NSRange)rangeOfStringSurroundedBy:(id)fp8 range:(struct _NSRange)fp12;
- (struct _NSRange)range;
- (int)caseInsensitiveLocalizedNumericCompare:(id)fp8;
- (int)compareLiteral:(id)fp8;
- (id)displayablePathString;
- (id)stringByReplacingOccurancesOfString:(id)fp8 withString:(id)fp12;
- (id)stringByDeletingPathExtensionInExtensions:(id)fp8;
- (id)stringByTruncatingStringWithFont:(id)fp8 forWidth:(float)fp12 lineBreakMode:(int)fp16;
- (id)stringByReplacingRedundantWhiteSpaceWithSingleSpace;
- (id)stringByChangingWhiteSpaceToSpace;
- (id)stringByRemovingRedundantWhiteSpace;
- (id)stringByRemovingSingleCharacterWords;
- (id)stringByRemovingSuffix:(id)fp8;
- (id)stringByRemovingPrefix:(id)fp8;
- (id)stringByRemovingPathPrefix:(id)fp8;
- (id)stringByPrefixingPathComponent:(id)fp8;
- (id)stringByRemovingTrailingOccurrencesOfCharactersInSet:(id)fp8;
- (BOOL)isCaseInsensitiveEqualToString:(id)fp8;
- (int)numericalCaseInsensitiveCompare:(id)fp8;
- (id)stringByIncrementingTrailingCountWithDelimiter:(id)fp8;
- (unsigned int)getTrailingCountWithDelimiter:(id)fp8 range:(struct _NSRange *)fp12;
@end

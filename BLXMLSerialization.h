/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSMutableString;

@interface BLXMLSerialization : _ACAccountTypeIdentifierTwitter <NSXMLParserDelegate>
{
    NSMutableArray *m_result;
    NSMutableString *m_text;
    id *m_error;
}

+ (id)dictionaryFromXMLData:(id)fp8 error:(id *)fp12;
+ (id)sharedInstance;
- (void)parser:(id)fp8 parseErrorOccurred:(id)fp12;
- (void)parser:(id)fp8 foundCharacters:(id)fp12;
- (void)parser:(id)fp8 didEndElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (id)objectWithData:(id)fp8 error:(id *)fp12;
- (void)dealloc;
- (id)init;

@end


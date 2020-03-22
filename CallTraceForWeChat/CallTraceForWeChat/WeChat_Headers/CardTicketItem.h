//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface CardTicketItem : MMObject <PBCoding, NSCopying>
{
    NSString *fromUserName;
    unsigned int fromScene;
    unsigned int cardType;
    NSString *cardTypeName;
    NSString *cardId;
    NSString *color;
    NSString *brandName;
    NSString *cardExt;
    unsigned int cardShareFrom;
    _Bool isRecommend;
    NSString *recommendCardId;
}

+ (void)initialize;
+ (void)PBArrayAdd_recommendCardId;
+ (void)PBArrayAdd_isRecommend;
+ (void)PBArrayAdd_cardShareFrom;
+ (void)PBArrayAdd_cardExt;
+ (void)PBArrayAdd_brandName;
+ (void)PBArrayAdd_cardTypeName;
+ (void)PBArrayAdd_color;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_cardType;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_fromUserName;
@property(retain, nonatomic) NSString *recommendCardId; // @synthesize recommendCardId;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend;
@property(nonatomic) unsigned int cardShareFrom; // @synthesize cardShareFrom;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName;
@property(retain, nonatomic) NSString *color; // @synthesize color;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned int cardType; // @synthesize cardType;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

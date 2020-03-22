//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerResponse.h"

@class NSData;

@interface GCDWebServerDataResponse : GCDWebServerResponse
{
    NSData *_data;
    _Bool _done;
}

+ (id)responseWithData:(id)arg1 contentType:(id)arg2;
+ (id)responseWithJSONObject:(id)arg1 contentType:(id)arg2;
+ (id)responseWithJSONObject:(id)arg1;
+ (id)responseWithHTMLTemplate:(id)arg1 variables:(id)arg2;
+ (id)responseWithHTML:(id)arg1;
+ (id)responseWithText:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)readData:(id *)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithJSONObject:(id)arg1 contentType:(id)arg2;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithHTMLTemplate:(id)arg1 variables:(id)arg2;
- (id)initWithHTML:(id)arg1;
- (id)initWithText:(id)arg1;

@end

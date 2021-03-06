//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSMessage-Protocol.h>

@class NSArray, NSDictionary, NSError, NSUUID;

@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage>
{
    NSUUID *_requestIdentifier;
    NSArray *_certificateDataCollection;
    NSError *_error;
}

+ (id)instanceWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSArray *certificateDataCollection; // @synthesize certificateDataCollection=_certificateDataCollection;
@property(readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithRequestIdentifier:(id)arg1 certificateDataCollection:(id)arg2 error:(id)arg3;

@end


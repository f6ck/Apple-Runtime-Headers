//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKRecordGraphNode : NSObject
{
    NSMutableSet *_edges;
    NSMutableSet *_indegrees;
    CKRecord *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) NSMutableSet *indegrees; // @synthesize indegrees=_indegrees;
@property(retain, nonatomic) NSMutableSet *edges; // @synthesize edges=_edges;
- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long indegree;
- (id)init;

@end


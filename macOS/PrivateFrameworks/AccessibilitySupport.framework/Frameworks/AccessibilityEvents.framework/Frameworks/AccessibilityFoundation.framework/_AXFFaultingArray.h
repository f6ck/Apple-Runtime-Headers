//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <AccessibilityFoundation/_AXFFaultingArrayDataSource-Protocol.h>

@class NSMutableIndexSet, NSString;
@protocol _AXFFaultingArrayDataSource;

@interface _AXFFaultingArray : NSArray <_AXFFaultingArrayDataSource>
{
    id *_elements;
    unsigned long long __count;
    NSMutableIndexSet *__faultedBlocks;
    unsigned long long __blockSize;
    id <_AXFFaultingArrayDataSource> __source;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_AXFFaultingArrayDataSource> _source; // @synthesize _source=__source;
@property(nonatomic) unsigned long long _blockSize; // @synthesize _blockSize=__blockSize;
@property(retain, nonatomic) NSMutableIndexSet *_faultedBlocks; // @synthesize _faultedBlocks=__faultedBlocks;
@property(nonatomic) unsigned long long _count; // @synthesize _count=__count;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (unsigned long long)elementsCount;
- (id)copyElementsForRange:(struct _NSRange)arg1;
- (void)_faultBlockIfNeeded:(unsigned long long)arg1;
- (unsigned long long)_blockForIndex:(unsigned long long)arg1;
- (void)rebuild;
- (id)nilSentinel;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 blockSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


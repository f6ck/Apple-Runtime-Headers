//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/CPRegion.h>

@class CPParagraphListItem;

__attribute__((visibility("hidden")))
@interface CPParagraph : CPRegion
{
    BOOL noIndentation;
    BOOL below;
    unsigned long long alignment;
    BOOL hasDropCap;
    id flowProperties;
    CPParagraphListItem *listItem;
    double preformatWidth;
}

@property(retain, nonatomic) CPParagraphListItem *listItem; // @synthesize listItem;
- (BOOL)isPreformattedWithUnitWidth:(double *)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (BOOL)below;
- (void)setBelow:(BOOL)arg1;
- (double)selectionBottom;
- (struct CGRect)reducedBounds;
- (void)explode;
- (void)setHasDropCap:(BOOL)arg1;
- (BOOL)hasDropCap;
- (BOOL)noIndentation;
- (void)setNoIndentation:(BOOL)arg1;
- (BOOL)isShapeRegion;
- (BOOL)isImageRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isRowRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isBoxRegion;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isTextRegion;
- (unsigned long long)index;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (void)accept:(id)arg1;
- (void)setFlowProperties:(id)arg1;
- (id)flowProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end


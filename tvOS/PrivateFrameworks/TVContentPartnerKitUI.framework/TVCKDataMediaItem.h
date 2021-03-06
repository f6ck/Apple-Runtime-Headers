//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVCKDataItem;

@interface TVCKDataMediaItem : TVPBaseMediaItem
{
    TVCKDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TVCKDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)_mediaTypeStringFromDataType:(id)arg1;
- (id)_propertyNameMappings;
- (_Bool)_hasVideoContent;
- (_Bool)_supportsPlayCounts;
- (_Bool)_supportsBookmarks;
- (id)_dataItemValueForProperty:(id)arg1;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemURL;
- (id)description;
- (id)initWithDataItem:(id)arg1;

@end


/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MTMMailbox.h"

@class NSMutableArray, NSMutableIndexSet;

@interface MTMFakeMailbox : MTMMailbox
{
    NSMutableArray *_fakeMessages;
    NSMutableIndexSet *_fakeSelectionIndexes;
}

- (id)selectedMessageIndexes;
- (id)messages;
- (void)dealloc;
- (id)initWithMessageDescriptions:(id)arg1;

@end


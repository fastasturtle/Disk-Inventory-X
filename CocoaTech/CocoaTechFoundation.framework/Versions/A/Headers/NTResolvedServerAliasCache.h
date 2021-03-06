//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface NTResolvedServerAliasCache : NSObject
{
    NSLock *_threadLock;
    NSMutableDictionary *_cache;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)cachedServerAlias:(id)arg1;
- (void)addAliasToCache:(id)arg1 resolved:(id)arg2;

@end


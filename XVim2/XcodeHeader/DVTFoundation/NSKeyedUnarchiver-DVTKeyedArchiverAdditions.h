//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (DVTKeyedArchiverAdditions)
+ (id)dvt_unarchiveObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)dvt_unarchiveObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (void)dvt_unarchiveData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)dvt_initRequiringSecureCoding:(BOOL)arg1 forReadingFromData:(id)arg2 error:(id *)arg3;
@end


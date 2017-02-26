//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FTSTopHitMgr : NSObject
{
    NSMutableArray *_arrTopHitContactItem;
    NSMutableArray *_arrTopHitAddressBookItem;
    NSMutableDictionary *_dicTopHitExtItem;
    NSMutableDictionary *_dicTopHitResultItem;
    NSMutableDictionary *_dicTopHitResultItemValue;
    NSMutableDictionary *_dicTopHitResultCache;
    NSString *_lastQueryText;
    _Bool _hasInit;
    _Bool _bNeedSearch;
    _Bool _needSaveContactTopHit;
    _Bool _needSaveAddressBookTopHit;
    _Bool _needSaveExtTopHit;
    unsigned int _thType;
    id <FTSTopHitDelegate> _delegateForContactSearch;
    id <FTSTopHitDelegate> _delegateForFeatureSearch;
}

@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForFeatureSearch; // @synthesize delegateForFeatureSearch=_delegateForFeatureSearch;
@property(nonatomic) __weak id <FTSTopHitDelegate> delegateForContactSearch; // @synthesize delegateForContactSearch=_delegateForContactSearch;
- (void).cxx_destruct;
- (void)logSearchInfo;
- (void)checkAndFillTimestamp;
- (void)doReportTopHitStatus;
- (void)tryReportTopHitStatus;
- (void)onAppTerminate;
- (void)onClearData;
- (void)onReloadData;
- (void)onEnterBackGround;
- (void)trySaveTopHitExtItem;
- (void)trySaveTopHitAddressBookItem;
- (void)trySaveTopHitContactItem;
- (void)trySaveTopHitItem;
- (void)tryLoadTopHitItem;
- (id)pathForTopHitExtItem;
- (id)pathForTopHitAddressBookItem;
- (id)pathForTopHitContactItem;
- (void)clearTopHitValue;
- (void)clearTopHitResult;
- (id)getTopHitItems:(unsigned int)arg1;
- (unsigned int)getTopHitCount:(unsigned int)arg1;
- (_Bool)hasTopHit:(unsigned int)arg1;
- (void)sortTopHitValueList:(id)arg1;
- (_Bool)selectItemKey:(id)arg1 typeKey:(id)arg2;
- (unsigned int)convertFeatureIDFromItemKey:(id)arg1;
- (id)convertTopHitKeyFromType:(unsigned int)arg1;
- (id)getTopHitItemKey:(id)arg1;
- (void)addScore:(id)arg1 arrTopHitItem:(id)arg2;
- (void)selectItem:(id)arg1 type:(unsigned int)arg2;
- (void)removeInvalidValue:(id)arg1 withTopHitItem:(id)arg2 withTopHitKey:(id)arg3;
- (_Bool)isTopHitList:(id)arg1 keyContainsValue:(id)arg2;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3 maxCount:(unsigned int)arg4;
- (void)searchTopHit:(id)arg1 dicCheckList:(id)arg2 matchTips:(id)arg3;
- (void)setNeedsSearch;
- (void)cancelSearch;
- (void)doInitWorker;
- (void)initData;
- (void)dealloc;
- (id)initWithType:(unsigned int)arg1;
- (id)init;

@end

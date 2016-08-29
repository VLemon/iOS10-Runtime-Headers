/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCXCallDirectoryChanged : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int totalBlockedHandles : 1; 
        unsigned int totalIdentifiedHandles : 1; 
        unsigned int isEnabled : 1; 
    }  _has;
    bool  _isEnabled;
    NSString * _providerBundleId;
    unsigned long long  _timestamp;
    unsigned int  _totalBlockedHandles;
    unsigned int  _totalIdentifiedHandles;
}

@property (nonatomic) bool hasIsEnabled;
@property (nonatomic, readonly) bool hasProviderBundleId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalBlockedHandles;
@property (nonatomic) bool hasTotalIdentifiedHandles;
@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) NSString *providerBundleId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalBlockedHandles;
@property (nonatomic) unsigned int totalIdentifiedHandles;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsEnabled;
- (bool)hasProviderBundleId;
- (bool)hasTimestamp;
- (bool)hasTotalBlockedHandles;
- (bool)hasTotalIdentifiedHandles;
- (unsigned long long)hash;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerBundleId;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalBlockedHandles:(bool)arg1;
- (void)setHasTotalIdentifiedHandles:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setProviderBundleId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalBlockedHandles:(unsigned int)arg1;
- (void)setTotalIdentifiedHandles:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalBlockedHandles;
- (unsigned int)totalIdentifiedHandles;
- (void)writeTo:(id)arg1;

@end
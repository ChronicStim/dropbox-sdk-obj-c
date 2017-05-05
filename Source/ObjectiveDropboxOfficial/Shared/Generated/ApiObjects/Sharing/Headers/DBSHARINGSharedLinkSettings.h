///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGRequestedVisibility;
@class DBSHARINGSharedLinkSettings;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedLinkSettings` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedLinkSettings : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The requested access for this shared link.
@property (nonatomic, readonly, nullable) DBSHARINGRequestedVisibility *requestedVisibility;

/// If requestedVisibility is `password` in `DBSHARINGRequestedVisibility` this
/// is needed to specify the password to access the link.
@property (nonatomic, readonly, copy, nullable) NSString *linkPassword;

/// Expiration time of the shared link. By default the link won't expire.
@property (nonatomic, readonly, nullable) NSDate *expires;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

///
/// Convenience constructor.
///
/// @param requestedVisibility The requested access for this shared link.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestedVisibility:(nullable DBSHARINGRequestedVisibility *)requestedVisibility;

///
/// Convenience constructor.
///
/// @param requestedVisibility The requested access for this shared link.
/// @param linkPassword If requestedVisibility is `password` in
/// `DBSHARINGRequestedVisibility` this is needed to specify the password to
/// access the link.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestedVisibility:(nullable DBSHARINGRequestedVisibility *)requestedVisibility
                               linkPassword:(nullable NSString *)linkPassword;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param requestedVisibility The requested access for this shared link.
/// @param linkPassword If requestedVisibility is `password` in
/// `DBSHARINGRequestedVisibility` this is needed to specify the password to
/// access the link.
/// @param expires Expiration time of the shared link. By default the link won't
/// expire.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestedVisibility:(nullable DBSHARINGRequestedVisibility *)requestedVisibility
                               linkPassword:(nullable NSString *)linkPassword
                                    expires:(nullable NSDate *)expires;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedLinkSettings` struct.
///
@interface DBSHARINGSharedLinkSettingsSerializer : NSObject

///
/// Serializes `DBSHARINGSharedLinkSettings` instances.
///
/// @param instance An instance of the `DBSHARINGSharedLinkSettings` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedLinkSettings` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGSharedLinkSettings *)instance;

///
/// Deserializes `DBSHARINGSharedLinkSettings` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedLinkSettings` API object.
///
/// @return An instantiation of the `DBSHARINGSharedLinkSettings` object.
///
+ (DBSHARINGSharedLinkSettings *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

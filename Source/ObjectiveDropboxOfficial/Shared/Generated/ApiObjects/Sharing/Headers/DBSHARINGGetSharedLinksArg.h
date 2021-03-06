///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGetSharedLinksArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetSharedLinksArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGGetSharedLinksArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// See `getSharedLinks` description.
@property (nonatomic, readonly, copy, nullable) NSString *path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path See `getSharedLinks` description.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(nullable NSString *)path;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetSharedLinksArg` struct.
///
@interface DBSHARINGGetSharedLinksArgSerializer : NSObject

///
/// Serializes `DBSHARINGGetSharedLinksArg` instances.
///
/// @param instance An instance of the `DBSHARINGGetSharedLinksArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGGetSharedLinksArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGGetSharedLinksArg *)instance;

///
/// Deserializes `DBSHARINGGetSharedLinksArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGGetSharedLinksArg` API object.
///
/// @return An instantiation of the `DBSHARINGGetSharedLinksArg` object.
///
+ (DBSHARINGGetSharedLinksArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamFolderListArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderListArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderListArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The maximum number of results to return per request.
@property (nonatomic, readonly) NSNumber *limit;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param limit The maximum number of results to return per request.
///
/// @return An initialized instance.
///
- (instancetype)initWithLimit:(nullable NSNumber *)limit;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderListArg` struct.
///
@interface DBTEAMTeamFolderListArgSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderListArg` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderListArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderListArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderListArg *)instance;

///
/// Deserializes `DBTEAMTeamFolderListArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderListArg` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderListArg` object.
///
+ (DBTEAMTeamFolderListArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

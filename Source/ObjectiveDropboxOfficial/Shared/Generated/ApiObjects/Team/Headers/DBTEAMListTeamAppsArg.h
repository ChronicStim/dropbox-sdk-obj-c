///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMListTeamAppsArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListTeamAppsArg` struct.
///
/// Arguments for `linkedAppsListTeamLinkedApps`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListTeamAppsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// At the first call to the `linkedAppsListTeamLinkedApps` the cursor shouldn't
/// be passed. Then, if the result of the call includes a cursor, the following
/// requests should include the received cursors in order to receive the next
/// sub list of the team applications
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

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
/// @param cursor At the first call to the `linkedAppsListTeamLinkedApps` the
/// cursor shouldn't be passed. Then, if the result of the call includes a
/// cursor, the following requests should include the received cursors in order
/// to receive the next sub list of the team applications
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(nullable NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTeamAppsArg` struct.
///
@interface DBTEAMListTeamAppsArgSerializer : NSObject

///
/// Serializes `DBTEAMListTeamAppsArg` instances.
///
/// @param instance An instance of the `DBTEAMListTeamAppsArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListTeamAppsArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMListTeamAppsArg *)instance;

///
/// Deserializes `DBTEAMListTeamAppsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListTeamAppsArg` API object.
///
/// @return An instantiation of the `DBTEAMListTeamAppsArg` object.
///
+ (DBTEAMListTeamAppsArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

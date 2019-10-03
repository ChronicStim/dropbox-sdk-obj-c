///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMListTeamAppsResult;
@class DBTEAMMemberLinkedApps;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListTeamAppsResult` struct.
///
/// Information returned by `linkedAppsListTeamLinkedApps`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListTeamAppsResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The linked applications of each member of the team.
@property (nonatomic, readonly) NSArray<DBTEAMMemberLinkedApps *> *apps;

/// If true, then there are more apps available. Pass the cursor to
/// `linkedAppsListTeamLinkedApps` to retrieve the rest.
@property (nonatomic, readonly) NSNumber *hasMore;

/// Pass the cursor into `linkedAppsListTeamLinkedApps` to receive the next sub
/// list of team's applications.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param apps The linked applications of each member of the team.
/// @param hasMore If true, then there are more apps available. Pass the cursor
/// to `linkedAppsListTeamLinkedApps` to retrieve the rest.
///
/// @return An initialized instance.
///
- (instancetype)initWithApps:(NSArray<DBTEAMMemberLinkedApps *> *)apps hasMore:(NSNumber *)hasMore;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param apps The linked applications of each member of the team.
/// @param hasMore If true, then there are more apps available. Pass the cursor
/// to `linkedAppsListTeamLinkedApps` to retrieve the rest.
/// @param cursor Pass the cursor into `linkedAppsListTeamLinkedApps` to receive
/// the next sub list of team's applications.
///
/// @return An initialized instance.
///
- (instancetype)initWithApps:(NSArray<DBTEAMMemberLinkedApps *> *)apps
                     hasMore:(NSNumber *)hasMore
                      cursor:(nullable NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTeamAppsResult` struct.
///
@interface DBTEAMListTeamAppsResultSerializer : NSObject

///
/// Serializes `DBTEAMListTeamAppsResult` instances.
///
/// @param instance An instance of the `DBTEAMListTeamAppsResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListTeamAppsResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMListTeamAppsResult *)instance;

///
/// Deserializes `DBTEAMListTeamAppsResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListTeamAppsResult` API object.
///
/// @return An instantiation of the `DBTEAMListTeamAppsResult` object.
///
+ (DBTEAMListTeamAppsResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

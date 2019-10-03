///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGTeamMemberInfo;
@class DBUSERSTeam;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMemberInfo` struct.
///
/// Information about a team member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGTeamMemberInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Information about the member's team.
@property (nonatomic, readonly) DBUSERSTeam *teamInfo;

/// The display name of the user.
@property (nonatomic, readonly, copy) NSString *displayName;

/// ID of user as a member of a team. This field will only be present if the
/// member is in the same team as current user.
@property (nonatomic, readonly, copy, nullable) NSString *memberId;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param teamInfo Information about the member's team.
/// @param displayName The display name of the user.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamInfo:(DBUSERSTeam *)teamInfo displayName:(NSString *)displayName;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamInfo Information about the member's team.
/// @param displayName The display name of the user.
/// @param memberId ID of user as a member of a team. This field will only be
/// present if the member is in the same team as current user.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamInfo:(DBUSERSTeam *)teamInfo
                     displayName:(NSString *)displayName
                        memberId:(nullable NSString *)memberId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamMemberInfo` struct.
///
@interface DBSHARINGTeamMemberInfoSerializer : NSObject

///
/// Serializes `DBSHARINGTeamMemberInfo` instances.
///
/// @param instance An instance of the `DBSHARINGTeamMemberInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGTeamMemberInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGTeamMemberInfo *)instance;

///
/// Deserializes `DBSHARINGTeamMemberInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGTeamMemberInfo` API object.
///
/// @return An instantiation of the `DBSHARINGTeamMemberInfo` object.
///
+ (DBSHARINGTeamMemberInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSHARINGMembershipInfo.h"
#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBSHARINGGroupInfo;
@class DBSHARINGGroupMembershipInfo;
@class DBSHARINGMemberPermission;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupMembershipInfo` struct.
///
/// The information about a group member of the shared content.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGGroupMembershipInfo : DBSHARINGMembershipInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The information about the membership group.
@property (nonatomic, readonly) DBSHARINGGroupInfo *group;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param accessType The access type for this member.
/// @param group The information about the membership group.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType group:(DBSHARINGGroupInfo *)group;

///
/// Convenience constructor.
///
/// @param accessType The access type for this member.
/// @param group The information about the membership group.
/// @param permissions The permissions that requesting user has on this member.
/// The set of permissions corresponds to the MemberActions in the request.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                             group:(DBSHARINGGroupInfo *)group
                       permissions:(nullable NSArray<DBSHARINGMemberPermission *> *)permissions;

///
/// Convenience constructor.
///
/// @param accessType The access type for this member.
/// @param group The information about the membership group.
/// @param permissions The permissions that requesting user has on this member.
/// The set of permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                             group:(DBSHARINGGroupInfo *)group
                       permissions:(nullable NSArray<DBSHARINGMemberPermission *> *)permissions
                          initials:(nullable NSString *)initials;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessType The access type for this member.
/// @param group The information about the membership group.
/// @param permissions The permissions that requesting user has on this member.
/// The set of permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
/// @param isInherited True if the member has access from a parent folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                             group:(DBSHARINGGroupInfo *)group
                       permissions:(nullable NSArray<DBSHARINGMemberPermission *> *)permissions
                          initials:(nullable NSString *)initials
                       isInherited:(nullable NSNumber *)isInherited;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupMembershipInfo` struct.
///
@interface DBSHARINGGroupMembershipInfoSerializer : NSObject

///
/// Serializes `DBSHARINGGroupMembershipInfo` instances.
///
/// @param instance An instance of the `DBSHARINGGroupMembershipInfo` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGGroupMembershipInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGGroupMembershipInfo *)instance;

///
/// Deserializes `DBSHARINGGroupMembershipInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGGroupMembershipInfo` API object.
///
/// @return An instantiation of the `DBSHARINGGroupMembershipInfo` object.
///
+ (DBSHARINGGroupMembershipInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

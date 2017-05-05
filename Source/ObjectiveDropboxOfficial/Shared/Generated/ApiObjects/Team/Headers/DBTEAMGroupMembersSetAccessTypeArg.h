///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMGroupMemberSelector.h"

@class DBTEAMGroupAccessType;
@class DBTEAMGroupMembersSetAccessTypeArg;
@class DBTEAMGroupSelector;
@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupMembersSetAccessTypeArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupMembersSetAccessTypeArg : DBTEAMGroupMemberSelector <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New group access type the user will have.
@property (nonatomic, readonly) DBTEAMGroupAccessType *accessType;

/// Whether to return the list of members in the group.  Note that the default
/// value will cause all the group members  to be returned in the response. This
/// may take a long time for large groups.
@property (nonatomic, readonly) NSNumber *returnMembers;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param group Specify a group.
/// @param user Identity of a user that is a member of group.
/// @param accessType New group access type the user will have.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group
                         user:(DBTEAMUserSelectorArg *)user
                   accessType:(DBTEAMGroupAccessType *)accessType;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param group Specify a group.
/// @param user Identity of a user that is a member of group.
/// @param accessType New group access type the user will have.
/// @param returnMembers Whether to return the list of members in the group.
/// Note that the default value will cause all the group members  to be returned
/// in the response. This may take a long time for large groups.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group
                         user:(DBTEAMUserSelectorArg *)user
                   accessType:(DBTEAMGroupAccessType *)accessType
                returnMembers:(nullable NSNumber *)returnMembers;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupMembersSetAccessTypeArg` struct.
///
@interface DBTEAMGroupMembersSetAccessTypeArgSerializer : NSObject

///
/// Serializes `DBTEAMGroupMembersSetAccessTypeArg` instances.
///
/// @param instance An instance of the `DBTEAMGroupMembersSetAccessTypeArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersSetAccessTypeArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMGroupMembersSetAccessTypeArg *)instance;

///
/// Deserializes `DBTEAMGroupMembersSetAccessTypeArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersSetAccessTypeArg` API object.
///
/// @return An instantiation of the `DBTEAMGroupMembersSetAccessTypeArg` object.
///
+ (DBTEAMGroupMembersSetAccessTypeArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSHARINGSharedFolderMetadataBase.h"
#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBSHARINGFolderPermission;
@class DBSHARINGFolderPolicy;
@class DBSHARINGSharedContentLinkMetadata;
@class DBSHARINGSharedFolderMetadata;
@class DBUSERSTeam;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderMetadata` struct.
///
/// The metadata which includes basic information about the shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedFolderMetadata : DBSHARINGSharedFolderMetadataBase <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The metadata of the shared content link to this shared folder. Absent if
/// there is no link on the folder.
@property (nonatomic, readonly, nullable) DBSHARINGSharedContentLinkMetadata *linkMetadata;

/// The name of the this shared folder.
@property (nonatomic, readonly, copy) NSString *name;

/// Actions the current user may perform on the folder and its contents. The set
/// of permissions corresponds to the FolderActions in the request.
@property (nonatomic, readonly, nullable) NSArray<DBSHARINGFolderPermission *> *permissions;

/// Policies governing this shared folder.
@property (nonatomic, readonly) DBSHARINGFolderPolicy *policy;

/// URL for displaying a web preview of the shared folder.
@property (nonatomic, readonly, copy) NSString *previewUrl;

/// The ID of the shared folder.
@property (nonatomic, readonly, copy) NSString *sharedFolderId;

/// Timestamp indicating when the current user was invited to this shared
/// folder.
@property (nonatomic, readonly) NSDate *timeInvited;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param accessType The current user's access level for this shared folder.
/// @param isInsideTeamFolder Whether this folder is inside of a team folder.
/// @param isTeamFolder Whether this folder is a team folder
/// https://www.dropbox.com/en/help/986.
/// @param name The name of the this shared folder.
/// @param policy Policies governing this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to
/// this shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                isInsideTeamFolder:(NSNumber *)isInsideTeamFolder
                      isTeamFolder:(NSNumber *)isTeamFolder
                              name:(NSString *)name
                            policy:(DBSHARINGFolderPolicy *)policy
                        previewUrl:(NSString *)previewUrl
                    sharedFolderId:(NSString *)sharedFolderId
                       timeInvited:(NSDate *)timeInvited;

///
/// Convenience constructor.
///
/// @param accessType The current user's access level for this shared folder.
/// @param isInsideTeamFolder Whether this folder is inside of a team folder.
/// @param isTeamFolder Whether this folder is a team folder
/// https://www.dropbox.com/en/help/986.
/// @param name The name of the this shared folder.
/// @param policy Policies governing this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to
/// this shared folder.
/// @param ownerTeam The team that owns the folder. This field is not present if
/// the folder is not owned by a team.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                isInsideTeamFolder:(NSNumber *)isInsideTeamFolder
                      isTeamFolder:(NSNumber *)isTeamFolder
                              name:(NSString *)name
                            policy:(DBSHARINGFolderPolicy *)policy
                        previewUrl:(NSString *)previewUrl
                    sharedFolderId:(NSString *)sharedFolderId
                       timeInvited:(NSDate *)timeInvited
                         ownerTeam:(nullable DBUSERSTeam *)ownerTeam;

///
/// Convenience constructor.
///
/// @param accessType The current user's access level for this shared folder.
/// @param isInsideTeamFolder Whether this folder is inside of a team folder.
/// @param isTeamFolder Whether this folder is a team folder
/// https://www.dropbox.com/en/help/986.
/// @param name The name of the this shared folder.
/// @param policy Policies governing this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to
/// this shared folder.
/// @param ownerTeam The team that owns the folder. This field is not present if
/// the folder is not owned by a team.
/// @param parentSharedFolderId The ID of the parent shared folder. This field
/// is present only if the folder is contained within another shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                isInsideTeamFolder:(NSNumber *)isInsideTeamFolder
                      isTeamFolder:(NSNumber *)isTeamFolder
                              name:(NSString *)name
                            policy:(DBSHARINGFolderPolicy *)policy
                        previewUrl:(NSString *)previewUrl
                    sharedFolderId:(NSString *)sharedFolderId
                       timeInvited:(NSDate *)timeInvited
                         ownerTeam:(nullable DBUSERSTeam *)ownerTeam
              parentSharedFolderId:(nullable NSString *)parentSharedFolderId;

///
/// Convenience constructor.
///
/// @param accessType The current user's access level for this shared folder.
/// @param isInsideTeamFolder Whether this folder is inside of a team folder.
/// @param isTeamFolder Whether this folder is a team folder
/// https://www.dropbox.com/en/help/986.
/// @param name The name of the this shared folder.
/// @param policy Policies governing this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to
/// this shared folder.
/// @param ownerTeam The team that owns the folder. This field is not present if
/// the folder is not owned by a team.
/// @param parentSharedFolderId The ID of the parent shared folder. This field
/// is present only if the folder is contained within another shared folder.
/// @param pathLower The lower-cased full path of this shared folder. Absent for
/// unmounted folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                isInsideTeamFolder:(NSNumber *)isInsideTeamFolder
                      isTeamFolder:(NSNumber *)isTeamFolder
                              name:(NSString *)name
                            policy:(DBSHARINGFolderPolicy *)policy
                        previewUrl:(NSString *)previewUrl
                    sharedFolderId:(NSString *)sharedFolderId
                       timeInvited:(NSDate *)timeInvited
                         ownerTeam:(nullable DBUSERSTeam *)ownerTeam
              parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                         pathLower:(nullable NSString *)pathLower;

///
/// Convenience constructor.
///
/// @param accessType The current user's access level for this shared folder.
/// @param isInsideTeamFolder Whether this folder is inside of a team folder.
/// @param isTeamFolder Whether this folder is a team folder
/// https://www.dropbox.com/en/help/986.
/// @param name The name of the this shared folder.
/// @param policy Policies governing this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to
/// this shared folder.
/// @param ownerTeam The team that owns the folder. This field is not present if
/// the folder is not owned by a team.
/// @param parentSharedFolderId The ID of the parent shared folder. This field
/// is present only if the folder is contained within another shared folder.
/// @param pathLower The lower-cased full path of this shared folder. Absent for
/// unmounted folders.
/// @param linkMetadata The metadata of the shared content link to this shared
/// folder. Absent if there is no link on the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                isInsideTeamFolder:(NSNumber *)isInsideTeamFolder
                      isTeamFolder:(NSNumber *)isTeamFolder
                              name:(NSString *)name
                            policy:(DBSHARINGFolderPolicy *)policy
                        previewUrl:(NSString *)previewUrl
                    sharedFolderId:(NSString *)sharedFolderId
                       timeInvited:(NSDate *)timeInvited
                         ownerTeam:(nullable DBUSERSTeam *)ownerTeam
              parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                         pathLower:(nullable NSString *)pathLower
                      linkMetadata:(nullable DBSHARINGSharedContentLinkMetadata *)linkMetadata;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessType The current user's access level for this shared folder.
/// @param isInsideTeamFolder Whether this folder is inside of a team folder.
/// @param isTeamFolder Whether this folder is a team folder
/// https://www.dropbox.com/en/help/986.
/// @param name The name of the this shared folder.
/// @param policy Policies governing this shared folder.
/// @param previewUrl URL for displaying a web preview of the shared folder.
/// @param sharedFolderId The ID of the shared folder.
/// @param timeInvited Timestamp indicating when the current user was invited to
/// this shared folder.
/// @param ownerTeam The team that owns the folder. This field is not present if
/// the folder is not owned by a team.
/// @param parentSharedFolderId The ID of the parent shared folder. This field
/// is present only if the folder is contained within another shared folder.
/// @param pathLower The lower-cased full path of this shared folder. Absent for
/// unmounted folders.
/// @param linkMetadata The metadata of the shared content link to this shared
/// folder. Absent if there is no link on the folder.
/// @param permissions Actions the current user may perform on the folder and
/// its contents. The set of permissions corresponds to the FolderActions in the
/// request.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                isInsideTeamFolder:(NSNumber *)isInsideTeamFolder
                      isTeamFolder:(NSNumber *)isTeamFolder
                              name:(NSString *)name
                            policy:(DBSHARINGFolderPolicy *)policy
                        previewUrl:(NSString *)previewUrl
                    sharedFolderId:(NSString *)sharedFolderId
                       timeInvited:(NSDate *)timeInvited
                         ownerTeam:(nullable DBUSERSTeam *)ownerTeam
              parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                         pathLower:(nullable NSString *)pathLower
                      linkMetadata:(nullable DBSHARINGSharedContentLinkMetadata *)linkMetadata
                       permissions:(nullable NSArray<DBSHARINGFolderPermission *> *)permissions;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderMetadata` struct.
///
@interface DBSHARINGSharedFolderMetadataSerializer : NSObject

///
/// Serializes `DBSHARINGSharedFolderMetadata` instances.
///
/// @param instance An instance of the `DBSHARINGSharedFolderMetadata` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedFolderMetadata` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGSharedFolderMetadata *)instance;

///
/// Deserializes `DBSHARINGSharedFolderMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedFolderMetadata` API object.
///
/// @return An instantiation of the `DBSHARINGSharedFolderMetadata` object.
///
+ (DBSHARINGSharedFolderMetadata *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

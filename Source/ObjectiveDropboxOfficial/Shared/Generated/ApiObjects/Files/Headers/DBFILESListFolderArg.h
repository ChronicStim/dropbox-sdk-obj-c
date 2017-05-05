///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESListFolderArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFolderArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path to the folder you want to see the contents of.
@property (nonatomic, readonly, copy) NSString *path;

/// If true, the list folder operation will be applied recursively to all
/// subfolders and the response will contain contents of all subfolders.
@property (nonatomic, readonly) NSNumber *recursive;

/// If true, `mediaInfo` in `DBFILESFileMetadata` is set for photo and video.
@property (nonatomic, readonly) NSNumber *includeMediaInfo;

/// If true, the results will include entries for files and folders that used to
/// exist but were deleted.
@property (nonatomic, readonly) NSNumber *includeDeleted;

/// If true, the results will include a flag for each file indicating whether or
/// not  that file has any explicit members.
@property (nonatomic, readonly) NSNumber *includeHasExplicitSharedMembers;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param path The path to the folder you want to see the contents of.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

///
/// Convenience constructor.
///
/// @param path The path to the folder you want to see the contents of.
/// @param recursive If true, the list folder operation will be applied
/// recursively to all subfolders and the response will contain contents of all
/// subfolders.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path recursive:(nullable NSNumber *)recursive;

///
/// Convenience constructor.
///
/// @param path The path to the folder you want to see the contents of.
/// @param recursive If true, the list folder operation will be applied
/// recursively to all subfolders and the response will contain contents of all
/// subfolders.
/// @param includeMediaInfo If true, `mediaInfo` in `DBFILESFileMetadata` is set
/// for photo and video.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                   recursive:(nullable NSNumber *)recursive
            includeMediaInfo:(nullable NSNumber *)includeMediaInfo;

///
/// Convenience constructor.
///
/// @param path The path to the folder you want to see the contents of.
/// @param recursive If true, the list folder operation will be applied
/// recursively to all subfolders and the response will contain contents of all
/// subfolders.
/// @param includeMediaInfo If true, `mediaInfo` in `DBFILESFileMetadata` is set
/// for photo and video.
/// @param includeDeleted If true, the results will include entries for files
/// and folders that used to exist but were deleted.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                   recursive:(nullable NSNumber *)recursive
            includeMediaInfo:(nullable NSNumber *)includeMediaInfo
              includeDeleted:(nullable NSNumber *)includeDeleted;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path to the folder you want to see the contents of.
/// @param recursive If true, the list folder operation will be applied
/// recursively to all subfolders and the response will contain contents of all
/// subfolders.
/// @param includeMediaInfo If true, `mediaInfo` in `DBFILESFileMetadata` is set
/// for photo and video.
/// @param includeDeleted If true, the results will include entries for files
/// and folders that used to exist but were deleted.
/// @param includeHasExplicitSharedMembers If true, the results will include a
/// flag for each file indicating whether or not  that file has any explicit
/// members.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                          recursive:(nullable NSNumber *)recursive
                   includeMediaInfo:(nullable NSNumber *)includeMediaInfo
                     includeDeleted:(nullable NSNumber *)includeDeleted
    includeHasExplicitSharedMembers:(nullable NSNumber *)includeHasExplicitSharedMembers;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderArg` struct.
///
@interface DBFILESListFolderArgSerializer : NSObject

///
/// Serializes `DBFILESListFolderArg` instances.
///
/// @param instance An instance of the `DBFILESListFolderArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderArg` API object.
///
+ (NSDictionary *)serialize:(DBFILESListFolderArg *)instance;

///
/// Deserializes `DBFILESListFolderArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderArg` API object.
///
/// @return An instantiation of the `DBFILESListFolderArg` object.
///
+ (DBFILESListFolderArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

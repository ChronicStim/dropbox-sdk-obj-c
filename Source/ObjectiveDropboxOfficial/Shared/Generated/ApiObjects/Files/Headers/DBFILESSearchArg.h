///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESSearchArg;
@class DBFILESSearchMode;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SearchArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSearchArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path in the user's Dropbox to search. Should probably be a folder.
@property (nonatomic, readonly, copy) NSString *path;

/// The string to search for. The search string is split on spaces into multiple
/// tokens. For file name searching, the last token is used for prefix matching
/// (i.e. "bat c" matches "bat cave" but not "batman car").
@property (nonatomic, readonly, copy) NSString *query;

/// The starting index within the search results (used for paging).
@property (nonatomic, readonly) NSNumber *start;

/// The maximum number of search results to return.
@property (nonatomic, readonly) NSNumber *maxResults;

/// The search mode (filename, filename_and_content, or deleted_filename). Note
/// that searching file content is only available for Dropbox Business accounts.
@property (nonatomic, readonly) DBFILESSearchMode *mode;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param path The path in the user's Dropbox to search. Should probably be a
/// folder.
/// @param query The string to search for. The search string is split on spaces
/// into multiple tokens. For file name searching, the last token is used for
/// prefix matching (i.e. "bat c" matches "bat cave" but not "batman car").
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path query:(NSString *)query;

///
/// Convenience constructor.
///
/// @param path The path in the user's Dropbox to search. Should probably be a
/// folder.
/// @param query The string to search for. The search string is split on spaces
/// into multiple tokens. For file name searching, the last token is used for
/// prefix matching (i.e. "bat c" matches "bat cave" but not "batman car").
/// @param start The starting index within the search results (used for paging).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path query:(NSString *)query start:(nullable NSNumber *)start;

///
/// Convenience constructor.
///
/// @param path The path in the user's Dropbox to search. Should probably be a
/// folder.
/// @param query The string to search for. The search string is split on spaces
/// into multiple tokens. For file name searching, the last token is used for
/// prefix matching (i.e. "bat c" matches "bat cave" but not "batman car").
/// @param start The starting index within the search results (used for paging).
/// @param maxResults The maximum number of search results to return.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                       query:(NSString *)query
                       start:(nullable NSNumber *)start
                  maxResults:(nullable NSNumber *)maxResults;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path in the user's Dropbox to search. Should probably be a
/// folder.
/// @param query The string to search for. The search string is split on spaces
/// into multiple tokens. For file name searching, the last token is used for
/// prefix matching (i.e. "bat c" matches "bat cave" but not "batman car").
/// @param start The starting index within the search results (used for paging).
/// @param maxResults The maximum number of search results to return.
/// @param mode The search mode (filename, filename_and_content, or
/// deleted_filename). Note that searching file content is only available for
/// Dropbox Business accounts.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                       query:(NSString *)query
                       start:(nullable NSNumber *)start
                  maxResults:(nullable NSNumber *)maxResults
                        mode:(nullable DBFILESSearchMode *)mode;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SearchArg` struct.
///
@interface DBFILESSearchArgSerializer : NSObject

///
/// Serializes `DBFILESSearchArg` instances.
///
/// @param instance An instance of the `DBFILESSearchArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSearchArg` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESSearchArg *)instance;

///
/// Deserializes `DBFILESSearchArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSearchArg` API object.
///
/// @return An instantiation of the `DBFILESSearchArg` object.
///
+ (DBFILESSearchArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END

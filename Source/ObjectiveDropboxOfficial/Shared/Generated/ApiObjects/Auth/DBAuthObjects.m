///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

/// Arguments, results, and errors for the `Auth` namespace.

#import "DBAUTHAccessError.h"
#import "DBAUTHInvalidAccountTypeError.h"
#import "DBAUTHPaperAccessError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHAccessError

@synthesize invalidAccountType = _invalidAccountType;
@synthesize paperAccessDenied = _paperAccessDenied;

#pragma mark - Constructors

- (instancetype)initWithInvalidAccountType:(DBAUTHInvalidAccountTypeError *)invalidAccountType {
  self = [super init];
  if (self) {
    _tag = DBAUTHAccessErrorInvalidAccountType;
    _invalidAccountType = invalidAccountType;
  }
  return self;
}

- (instancetype)initWithPaperAccessDenied:(DBAUTHPaperAccessError *)paperAccessDenied {
  self = [super init];
  if (self) {
    _tag = DBAUTHAccessErrorPaperAccessDenied;
    _paperAccessDenied = paperAccessDenied;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBAUTHAccessErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

- (DBAUTHInvalidAccountTypeError *)invalidAccountType {
  if (![self isInvalidAccountType]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBAUTHAccessErrorInvalidAccountType, but was %@.", [self tagName]];
  }
  return _invalidAccountType;
}

- (DBAUTHPaperAccessError *)paperAccessDenied {
  if (![self isPaperAccessDenied]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBAUTHAccessErrorPaperAccessDenied, but was %@.", [self tagName]];
  }
  return _paperAccessDenied;
}

#pragma mark - Tag state methods

- (BOOL)isInvalidAccountType {
  return _tag == DBAUTHAccessErrorInvalidAccountType;
}

- (BOOL)isPaperAccessDenied {
  return _tag == DBAUTHAccessErrorPaperAccessDenied;
}

- (BOOL)isOther {
  return _tag == DBAUTHAccessErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBAUTHAccessErrorInvalidAccountType:
    return @"DBAUTHAccessErrorInvalidAccountType";
  case DBAUTHAccessErrorPaperAccessDenied:
    return @"DBAUTHAccessErrorPaperAccessDenied";
  case DBAUTHAccessErrorOther:
    return @"DBAUTHAccessErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHAccessErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHAccessErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHAccessErrorSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBAUTHAccessErrorInvalidAccountType:
    result = prime * result + [self.invalidAccountType hash];
  case DBAUTHAccessErrorPaperAccessDenied:
    result = prime * result + [self.paperAccessDenied hash];
  case DBAUTHAccessErrorOther:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToAccessError:other];
}

- (BOOL)isEqualToAccessError:(DBAUTHAccessError *)anAccessError {
  if (self == anAccessError) {
    return YES;
  }
  if (self.tag != anAccessError.tag) {
    return NO;
  }
  switch (_tag) {
  case DBAUTHAccessErrorInvalidAccountType:
    return [self.invalidAccountType isEqual:anAccessError.invalidAccountType];
  case DBAUTHAccessErrorPaperAccessDenied:
    return [self.paperAccessDenied isEqual:anAccessError.paperAccessDenied];
  case DBAUTHAccessErrorOther:
    return [[self tagName] isEqual:[anAccessError tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHAccessErrorSerializer

+ (NSDictionary *)serialize:(DBAUTHAccessError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isInvalidAccountType]) {
    jsonDict[@"invalid_account_type"] =
        [[DBAUTHInvalidAccountTypeErrorSerializer serialize:valueObj.invalidAccountType] mutableCopy];
    jsonDict[@".tag"] = @"invalid_account_type";
  } else if ([valueObj isPaperAccessDenied]) {
    jsonDict[@"paper_access_denied"] =
        [[DBAUTHPaperAccessErrorSerializer serialize:valueObj.paperAccessDenied] mutableCopy];
    jsonDict[@".tag"] = @"paper_access_denied";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    jsonDict[@".tag"] = @"other";
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHAccessError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"invalid_account_type"]) {
    DBAUTHInvalidAccountTypeError *invalidAccountType =
        [DBAUTHInvalidAccountTypeErrorSerializer deserialize:valueDict[@"invalid_account_type"]];
    return [[DBAUTHAccessError alloc] initWithInvalidAccountType:invalidAccountType];
  } else if ([tag isEqualToString:@"paper_access_denied"]) {
    DBAUTHPaperAccessError *paperAccessDenied =
        [DBAUTHPaperAccessErrorSerializer deserialize:valueDict[@"paper_access_denied"]];
    return [[DBAUTHAccessError alloc] initWithPaperAccessDenied:paperAccessDenied];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBAUTHAccessError alloc] initWithOther];
  } else {
    return [[DBAUTHAccessError alloc] initWithOther];
  }
}

@end

#import "DBAUTHAuthError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHAuthError

#pragma mark - Constructors

- (instancetype)initWithInvalidAccessToken {
  self = [super init];
  if (self) {
    _tag = DBAUTHAuthErrorInvalidAccessToken;
  }
  return self;
}

- (instancetype)initWithInvalidSelectUser {
  self = [super init];
  if (self) {
    _tag = DBAUTHAuthErrorInvalidSelectUser;
  }
  return self;
}

- (instancetype)initWithInvalidSelectAdmin {
  self = [super init];
  if (self) {
    _tag = DBAUTHAuthErrorInvalidSelectAdmin;
  }
  return self;
}

- (instancetype)initWithUserSuspended {
  self = [super init];
  if (self) {
    _tag = DBAUTHAuthErrorUserSuspended;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBAUTHAuthErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isInvalidAccessToken {
  return _tag == DBAUTHAuthErrorInvalidAccessToken;
}

- (BOOL)isInvalidSelectUser {
  return _tag == DBAUTHAuthErrorInvalidSelectUser;
}

- (BOOL)isInvalidSelectAdmin {
  return _tag == DBAUTHAuthErrorInvalidSelectAdmin;
}

- (BOOL)isUserSuspended {
  return _tag == DBAUTHAuthErrorUserSuspended;
}

- (BOOL)isOther {
  return _tag == DBAUTHAuthErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBAUTHAuthErrorInvalidAccessToken:
    return @"DBAUTHAuthErrorInvalidAccessToken";
  case DBAUTHAuthErrorInvalidSelectUser:
    return @"DBAUTHAuthErrorInvalidSelectUser";
  case DBAUTHAuthErrorInvalidSelectAdmin:
    return @"DBAUTHAuthErrorInvalidSelectAdmin";
  case DBAUTHAuthErrorUserSuspended:
    return @"DBAUTHAuthErrorUserSuspended";
  case DBAUTHAuthErrorOther:
    return @"DBAUTHAuthErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHAuthErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHAuthErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHAuthErrorSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBAUTHAuthErrorInvalidAccessToken:
    result = prime * result + [[self tagName] hash];
  case DBAUTHAuthErrorInvalidSelectUser:
    result = prime * result + [[self tagName] hash];
  case DBAUTHAuthErrorInvalidSelectAdmin:
    result = prime * result + [[self tagName] hash];
  case DBAUTHAuthErrorUserSuspended:
    result = prime * result + [[self tagName] hash];
  case DBAUTHAuthErrorOther:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToAuthError:other];
}

- (BOOL)isEqualToAuthError:(DBAUTHAuthError *)anAuthError {
  if (self == anAuthError) {
    return YES;
  }
  if (self.tag != anAuthError.tag) {
    return NO;
  }
  switch (_tag) {
  case DBAUTHAuthErrorInvalidAccessToken:
    return [[self tagName] isEqual:[anAuthError tagName]];
  case DBAUTHAuthErrorInvalidSelectUser:
    return [[self tagName] isEqual:[anAuthError tagName]];
  case DBAUTHAuthErrorInvalidSelectAdmin:
    return [[self tagName] isEqual:[anAuthError tagName]];
  case DBAUTHAuthErrorUserSuspended:
    return [[self tagName] isEqual:[anAuthError tagName]];
  case DBAUTHAuthErrorOther:
    return [[self tagName] isEqual:[anAuthError tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHAuthErrorSerializer

+ (NSDictionary *)serialize:(DBAUTHAuthError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isInvalidAccessToken]) {
    jsonDict[@".tag"] = @"invalid_access_token";
  } else if ([valueObj isInvalidSelectUser]) {
    jsonDict[@".tag"] = @"invalid_select_user";
  } else if ([valueObj isInvalidSelectAdmin]) {
    jsonDict[@".tag"] = @"invalid_select_admin";
  } else if ([valueObj isUserSuspended]) {
    jsonDict[@".tag"] = @"user_suspended";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    jsonDict[@".tag"] = @"other";
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHAuthError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"invalid_access_token"]) {
    return [[DBAUTHAuthError alloc] initWithInvalidAccessToken];
  } else if ([tag isEqualToString:@"invalid_select_user"]) {
    return [[DBAUTHAuthError alloc] initWithInvalidSelectUser];
  } else if ([tag isEqualToString:@"invalid_select_admin"]) {
    return [[DBAUTHAuthError alloc] initWithInvalidSelectAdmin];
  } else if ([tag isEqualToString:@"user_suspended"]) {
    return [[DBAUTHAuthError alloc] initWithUserSuspended];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBAUTHAuthError alloc] initWithOther];
  } else {
    return [[DBAUTHAuthError alloc] initWithOther];
  }
}

@end

#import "DBAUTHInvalidAccountTypeError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHInvalidAccountTypeError

#pragma mark - Constructors

- (instancetype)initWithEndpoint {
  self = [super init];
  if (self) {
    _tag = DBAUTHInvalidAccountTypeErrorEndpoint;
  }
  return self;
}

- (instancetype)initWithFeature {
  self = [super init];
  if (self) {
    _tag = DBAUTHInvalidAccountTypeErrorFeature;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBAUTHInvalidAccountTypeErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isEndpoint {
  return _tag == DBAUTHInvalidAccountTypeErrorEndpoint;
}

- (BOOL)isFeature {
  return _tag == DBAUTHInvalidAccountTypeErrorFeature;
}

- (BOOL)isOther {
  return _tag == DBAUTHInvalidAccountTypeErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBAUTHInvalidAccountTypeErrorEndpoint:
    return @"DBAUTHInvalidAccountTypeErrorEndpoint";
  case DBAUTHInvalidAccountTypeErrorFeature:
    return @"DBAUTHInvalidAccountTypeErrorFeature";
  case DBAUTHInvalidAccountTypeErrorOther:
    return @"DBAUTHInvalidAccountTypeErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHInvalidAccountTypeErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHInvalidAccountTypeErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHInvalidAccountTypeErrorSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBAUTHInvalidAccountTypeErrorEndpoint:
    result = prime * result + [[self tagName] hash];
  case DBAUTHInvalidAccountTypeErrorFeature:
    result = prime * result + [[self tagName] hash];
  case DBAUTHInvalidAccountTypeErrorOther:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToInvalidAccountTypeError:other];
}

- (BOOL)isEqualToInvalidAccountTypeError:(DBAUTHInvalidAccountTypeError *)anInvalidAccountTypeError {
  if (self == anInvalidAccountTypeError) {
    return YES;
  }
  if (self.tag != anInvalidAccountTypeError.tag) {
    return NO;
  }
  switch (_tag) {
  case DBAUTHInvalidAccountTypeErrorEndpoint:
    return [[self tagName] isEqual:[anInvalidAccountTypeError tagName]];
  case DBAUTHInvalidAccountTypeErrorFeature:
    return [[self tagName] isEqual:[anInvalidAccountTypeError tagName]];
  case DBAUTHInvalidAccountTypeErrorOther:
    return [[self tagName] isEqual:[anInvalidAccountTypeError tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHInvalidAccountTypeErrorSerializer

+ (NSDictionary *)serialize:(DBAUTHInvalidAccountTypeError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isEndpoint]) {
    jsonDict[@".tag"] = @"endpoint";
  } else if ([valueObj isFeature]) {
    jsonDict[@".tag"] = @"feature";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    jsonDict[@".tag"] = @"other";
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHInvalidAccountTypeError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"endpoint"]) {
    return [[DBAUTHInvalidAccountTypeError alloc] initWithEndpoint];
  } else if ([tag isEqualToString:@"feature"]) {
    return [[DBAUTHInvalidAccountTypeError alloc] initWithFeature];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBAUTHInvalidAccountTypeError alloc] initWithOther];
  } else {
    return [[DBAUTHInvalidAccountTypeError alloc] initWithOther];
  }
}

@end

#import "DBAUTHPaperAccessError.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHPaperAccessError

#pragma mark - Constructors

- (instancetype)initWithPaperDisabled {
  self = [super init];
  if (self) {
    _tag = DBAUTHPaperAccessErrorPaperDisabled;
  }
  return self;
}

- (instancetype)initWithNotPaperUser {
  self = [super init];
  if (self) {
    _tag = DBAUTHPaperAccessErrorNotPaperUser;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBAUTHPaperAccessErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isPaperDisabled {
  return _tag == DBAUTHPaperAccessErrorPaperDisabled;
}

- (BOOL)isNotPaperUser {
  return _tag == DBAUTHPaperAccessErrorNotPaperUser;
}

- (BOOL)isOther {
  return _tag == DBAUTHPaperAccessErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBAUTHPaperAccessErrorPaperDisabled:
    return @"DBAUTHPaperAccessErrorPaperDisabled";
  case DBAUTHPaperAccessErrorNotPaperUser:
    return @"DBAUTHPaperAccessErrorNotPaperUser";
  case DBAUTHPaperAccessErrorOther:
    return @"DBAUTHPaperAccessErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHPaperAccessErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHPaperAccessErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHPaperAccessErrorSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBAUTHPaperAccessErrorPaperDisabled:
    result = prime * result + [[self tagName] hash];
  case DBAUTHPaperAccessErrorNotPaperUser:
    result = prime * result + [[self tagName] hash];
  case DBAUTHPaperAccessErrorOther:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToPaperAccessError:other];
}

- (BOOL)isEqualToPaperAccessError:(DBAUTHPaperAccessError *)aPaperAccessError {
  if (self == aPaperAccessError) {
    return YES;
  }
  if (self.tag != aPaperAccessError.tag) {
    return NO;
  }
  switch (_tag) {
  case DBAUTHPaperAccessErrorPaperDisabled:
    return [[self tagName] isEqual:[aPaperAccessError tagName]];
  case DBAUTHPaperAccessErrorNotPaperUser:
    return [[self tagName] isEqual:[aPaperAccessError tagName]];
  case DBAUTHPaperAccessErrorOther:
    return [[self tagName] isEqual:[aPaperAccessError tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHPaperAccessErrorSerializer

+ (NSDictionary *)serialize:(DBAUTHPaperAccessError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isPaperDisabled]) {
    jsonDict[@".tag"] = @"paper_disabled";
  } else if ([valueObj isNotPaperUser]) {
    jsonDict[@".tag"] = @"not_paper_user";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    jsonDict[@".tag"] = @"other";
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHPaperAccessError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"paper_disabled"]) {
    return [[DBAUTHPaperAccessError alloc] initWithPaperDisabled];
  } else if ([tag isEqualToString:@"not_paper_user"]) {
    return [[DBAUTHPaperAccessError alloc] initWithNotPaperUser];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBAUTHPaperAccessError alloc] initWithOther];
  } else {
    return [[DBAUTHPaperAccessError alloc] initWithOther];
  }
}

@end

#import "DBAUTHRateLimitError.h"
#import "DBAUTHRateLimitReason.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHRateLimitError

#pragma mark - Constructors

- (instancetype)initWithReason:(DBAUTHRateLimitReason *)reason {
  return [self initWithReason:reason retryAfter:nil];
}

- (instancetype)initWithReason:(DBAUTHRateLimitReason *)reason retryAfter:(NSNumber *)retryAfter {
  [DBStoneValidators nonnullValidator:nil](reason);

  self = [super init];
  if (self) {
    _reason = reason;
    _retryAfter = retryAfter ?: @(1);
  }
  return self;
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHRateLimitErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHRateLimitErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHRateLimitErrorSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  result = prime * result + [self.reason hash];
  result = prime * result + [self.retryAfter hash];

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToRateLimitError:other];
}

- (BOOL)isEqualToRateLimitError:(DBAUTHRateLimitError *)aRateLimitError {
  if (self == aRateLimitError) {
    return YES;
  }
  if (![self.reason isEqual:aRateLimitError.reason]) {
    return NO;
  }
  if (![self.retryAfter isEqual:aRateLimitError.retryAfter]) {
    return NO;
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHRateLimitErrorSerializer

+ (NSDictionary *)serialize:(DBAUTHRateLimitError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"reason"] = [DBAUTHRateLimitReasonSerializer serialize:valueObj.reason];
  jsonDict[@"retry_after"] = valueObj.retryAfter;

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHRateLimitError *)deserialize:(NSDictionary *)valueDict {
  DBAUTHRateLimitReason *reason = [DBAUTHRateLimitReasonSerializer deserialize:valueDict[@"reason"]];
  NSNumber *retryAfter = valueDict[@"retry_after"] ?: @(1);

  return [[DBAUTHRateLimitError alloc] initWithReason:reason retryAfter:retryAfter];
}

@end

#import "DBAUTHRateLimitReason.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHRateLimitReason

#pragma mark - Constructors

- (instancetype)initWithTooManyRequests {
  self = [super init];
  if (self) {
    _tag = DBAUTHRateLimitReasonTooManyRequests;
  }
  return self;
}

- (instancetype)initWithTooManyWriteOperations {
  self = [super init];
  if (self) {
    _tag = DBAUTHRateLimitReasonTooManyWriteOperations;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBAUTHRateLimitReasonOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isTooManyRequests {
  return _tag == DBAUTHRateLimitReasonTooManyRequests;
}

- (BOOL)isTooManyWriteOperations {
  return _tag == DBAUTHRateLimitReasonTooManyWriteOperations;
}

- (BOOL)isOther {
  return _tag == DBAUTHRateLimitReasonOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBAUTHRateLimitReasonTooManyRequests:
    return @"DBAUTHRateLimitReasonTooManyRequests";
  case DBAUTHRateLimitReasonTooManyWriteOperations:
    return @"DBAUTHRateLimitReasonTooManyWriteOperations";
  case DBAUTHRateLimitReasonOther:
    return @"DBAUTHRateLimitReasonOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHRateLimitReasonSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHRateLimitReasonSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHRateLimitReasonSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBAUTHRateLimitReasonTooManyRequests:
    result = prime * result + [[self tagName] hash];
  case DBAUTHRateLimitReasonTooManyWriteOperations:
    result = prime * result + [[self tagName] hash];
  case DBAUTHRateLimitReasonOther:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToRateLimitReason:other];
}

- (BOOL)isEqualToRateLimitReason:(DBAUTHRateLimitReason *)aRateLimitReason {
  if (self == aRateLimitReason) {
    return YES;
  }
  if (self.tag != aRateLimitReason.tag) {
    return NO;
  }
  switch (_tag) {
  case DBAUTHRateLimitReasonTooManyRequests:
    return [[self tagName] isEqual:[aRateLimitReason tagName]];
  case DBAUTHRateLimitReasonTooManyWriteOperations:
    return [[self tagName] isEqual:[aRateLimitReason tagName]];
  case DBAUTHRateLimitReasonOther:
    return [[self tagName] isEqual:[aRateLimitReason tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHRateLimitReasonSerializer

+ (NSDictionary *)serialize:(DBAUTHRateLimitReason *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isTooManyRequests]) {
    jsonDict[@".tag"] = @"too_many_requests";
  } else if ([valueObj isTooManyWriteOperations]) {
    jsonDict[@".tag"] = @"too_many_write_operations";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    jsonDict[@".tag"] = @"other";
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHRateLimitReason *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"too_many_requests"]) {
    return [[DBAUTHRateLimitReason alloc] initWithTooManyRequests];
  } else if ([tag isEqualToString:@"too_many_write_operations"]) {
    return [[DBAUTHRateLimitReason alloc] initWithTooManyWriteOperations];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBAUTHRateLimitReason alloc] initWithOther];
  } else {
    return [[DBAUTHRateLimitReason alloc] initWithOther];
  }
}

@end

#import "DBAUTHTokenFromOAuth1Arg.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHTokenFromOAuth1Arg

#pragma mark - Constructors

- (instancetype)initWithOauth1Token:(NSString *)oauth1Token oauth1TokenSecret:(NSString *)oauth1TokenSecret {
  [DBStoneValidators nonnullValidator:[DBStoneValidators stringValidator:@(1) maxLength:nil pattern:nil]](oauth1Token);
  [DBStoneValidators
   nonnullValidator:[DBStoneValidators stringValidator:@(1) maxLength:nil pattern:nil]](oauth1TokenSecret);

  self = [super init];
  if (self) {
    _oauth1Token = oauth1Token;
    _oauth1TokenSecret = oauth1TokenSecret;
  }
  return self;
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHTokenFromOAuth1ArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHTokenFromOAuth1ArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHTokenFromOAuth1ArgSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  result = prime * result + [self.oauth1Token hash];
  result = prime * result + [self.oauth1TokenSecret hash];

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToTokenFromOAuth1Arg:other];
}

- (BOOL)isEqualToTokenFromOAuth1Arg:(DBAUTHTokenFromOAuth1Arg *)aTokenFromOAuth1Arg {
  if (self == aTokenFromOAuth1Arg) {
    return YES;
  }
  if (![self.oauth1Token isEqual:aTokenFromOAuth1Arg.oauth1Token]) {
    return NO;
  }
  if (![self.oauth1TokenSecret isEqual:aTokenFromOAuth1Arg.oauth1TokenSecret]) {
    return NO;
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHTokenFromOAuth1ArgSerializer

+ (NSDictionary *)serialize:(DBAUTHTokenFromOAuth1Arg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"oauth1_token"] = valueObj.oauth1Token;
  jsonDict[@"oauth1_token_secret"] = valueObj.oauth1TokenSecret;

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHTokenFromOAuth1Arg *)deserialize:(NSDictionary *)valueDict {
  NSString *oauth1Token = valueDict[@"oauth1_token"];
  NSString *oauth1TokenSecret = valueDict[@"oauth1_token_secret"];

  return [[DBAUTHTokenFromOAuth1Arg alloc] initWithOauth1Token:oauth1Token oauth1TokenSecret:oauth1TokenSecret];
}

@end

#import "DBAUTHTokenFromOAuth1Error.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHTokenFromOAuth1Error

#pragma mark - Constructors

- (instancetype)initWithInvalidOauth1TokenInfo {
  self = [super init];
  if (self) {
    _tag = DBAUTHTokenFromOAuth1ErrorInvalidOauth1TokenInfo;
  }
  return self;
}

- (instancetype)initWithAppIdMismatch {
  self = [super init];
  if (self) {
    _tag = DBAUTHTokenFromOAuth1ErrorAppIdMismatch;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBAUTHTokenFromOAuth1ErrorOther;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isInvalidOauth1TokenInfo {
  return _tag == DBAUTHTokenFromOAuth1ErrorInvalidOauth1TokenInfo;
}

- (BOOL)isAppIdMismatch {
  return _tag == DBAUTHTokenFromOAuth1ErrorAppIdMismatch;
}

- (BOOL)isOther {
  return _tag == DBAUTHTokenFromOAuth1ErrorOther;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBAUTHTokenFromOAuth1ErrorInvalidOauth1TokenInfo:
    return @"DBAUTHTokenFromOAuth1ErrorInvalidOauth1TokenInfo";
  case DBAUTHTokenFromOAuth1ErrorAppIdMismatch:
    return @"DBAUTHTokenFromOAuth1ErrorAppIdMismatch";
  case DBAUTHTokenFromOAuth1ErrorOther:
    return @"DBAUTHTokenFromOAuth1ErrorOther";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHTokenFromOAuth1ErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHTokenFromOAuth1ErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHTokenFromOAuth1ErrorSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  switch (_tag) {
  case DBAUTHTokenFromOAuth1ErrorInvalidOauth1TokenInfo:
    result = prime * result + [[self tagName] hash];
  case DBAUTHTokenFromOAuth1ErrorAppIdMismatch:
    result = prime * result + [[self tagName] hash];
  case DBAUTHTokenFromOAuth1ErrorOther:
    result = prime * result + [[self tagName] hash];
  }

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToTokenFromOAuth1Error:other];
}

- (BOOL)isEqualToTokenFromOAuth1Error:(DBAUTHTokenFromOAuth1Error *)aTokenFromOAuth1Error {
  if (self == aTokenFromOAuth1Error) {
    return YES;
  }
  if (self.tag != aTokenFromOAuth1Error.tag) {
    return NO;
  }
  switch (_tag) {
  case DBAUTHTokenFromOAuth1ErrorInvalidOauth1TokenInfo:
    return [[self tagName] isEqual:[aTokenFromOAuth1Error tagName]];
  case DBAUTHTokenFromOAuth1ErrorAppIdMismatch:
    return [[self tagName] isEqual:[aTokenFromOAuth1Error tagName]];
  case DBAUTHTokenFromOAuth1ErrorOther:
    return [[self tagName] isEqual:[aTokenFromOAuth1Error tagName]];
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHTokenFromOAuth1ErrorSerializer

+ (NSDictionary *)serialize:(DBAUTHTokenFromOAuth1Error *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isInvalidOauth1TokenInfo]) {
    jsonDict[@".tag"] = @"invalid_oauth1_token_info";
  } else if ([valueObj isAppIdMismatch]) {
    jsonDict[@".tag"] = @"app_id_mismatch";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else {
    jsonDict[@".tag"] = @"other";
  }

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHTokenFromOAuth1Error *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"invalid_oauth1_token_info"]) {
    return [[DBAUTHTokenFromOAuth1Error alloc] initWithInvalidOauth1TokenInfo];
  } else if ([tag isEqualToString:@"app_id_mismatch"]) {
    return [[DBAUTHTokenFromOAuth1Error alloc] initWithAppIdMismatch];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBAUTHTokenFromOAuth1Error alloc] initWithOther];
  } else {
    return [[DBAUTHTokenFromOAuth1Error alloc] initWithOther];
  }
}

@end

#import "DBAUTHTokenFromOAuth1Result.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBAUTHTokenFromOAuth1Result

#pragma mark - Constructors

- (instancetype)initWithOauth2Token:(NSString *)oauth2Token {
  [DBStoneValidators nonnullValidator:[DBStoneValidators stringValidator:@(1) maxLength:nil pattern:nil]](oauth2Token);

  self = [super init];
  if (self) {
    _oauth2Token = oauth2Token;
  }
  return self;
}

#pragma mark - Serialization methods

+ (nullable NSDictionary *)serialize:(id)instance {
  return [DBAUTHTokenFromOAuth1ResultSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBAUTHTokenFromOAuth1ResultSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBAUTHTokenFromOAuth1ResultSerializer serialize:self] description];
}

#pragma mark - Copyable method

- (instancetype)copyWithZone:(NSZone *)zone {
#pragma unused(zone)
  /// object is immutable
  return self;
}

#pragma mark - Hash method

- (NSUInteger)hash {
  NSUInteger prime = 31;
  NSUInteger result = 1;

  result = prime * result + [self.oauth2Token hash];

  return prime * result;
}

#pragma mark - Equality method

- (BOOL)isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (!other || ![other isKindOfClass:[self class]]) {
    return NO;
  }
  return [self isEqualToTokenFromOAuth1Result:other];
}

- (BOOL)isEqualToTokenFromOAuth1Result:(DBAUTHTokenFromOAuth1Result *)aTokenFromOAuth1Result {
  if (self == aTokenFromOAuth1Result) {
    return YES;
  }
  if (![self.oauth2Token isEqual:aTokenFromOAuth1Result.oauth2Token]) {
    return NO;
  }
  return YES;
}

@end

#pragma mark - Serializer Object

@implementation DBAUTHTokenFromOAuth1ResultSerializer

+ (NSDictionary *)serialize:(DBAUTHTokenFromOAuth1Result *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"oauth2_token"] = valueObj.oauth2Token;

  return [jsonDict count] > 0 ? jsonDict : nil;
}

+ (DBAUTHTokenFromOAuth1Result *)deserialize:(NSDictionary *)valueDict {
  NSString *oauth2Token = valueDict[@"oauth2_token"];

  return [[DBAUTHTokenFromOAuth1Result alloc] initWithOauth2Token:oauth2Token];
}

@end

//
//  NLBindingFilesystem.h
//  NodelikeDemo
//
//  Created by Sam Rijs on 10/13/13.
//  Copyright (c) 2013 Sam Rijs. All rights reserved.
//

#import "NLBinding.h"

@protocol NLBindingFilesystemExports <JSExport>

@property JSValue *Stats;

JSExportAs(open,  - (JSValue *)open:(NSString *)path flags:(NSNumber *)flags mode:(NSNumber *)mode callback:(JSValue *)cb);
JSExportAs(close, - (JSValue *)close:(NSNumber *)file callback:(JSValue *)cb);

JSExportAs(readdir, - (JSValue *)readDir:(NSString *)path callback:(JSValue *)cb);

JSExportAs(fdatasync, - (JSValue *)fdatasync:(NSNumber *)file callback:(JSValue *)cb);
JSExportAs(fsync,     - (JSValue *)fsync:    (NSNumber *)file callback:(JSValue *)cb);

JSExportAs(rename, - (JSValue *)rename:(NSString *)oldpath to:(NSString *)newpath callback:(JSValue *)cb);

@end

@interface NLBindingFilesystem : NLBinding <NLBindingFilesystemExports>

@property JSValue *Stats;

@end

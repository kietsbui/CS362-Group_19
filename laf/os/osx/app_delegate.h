// LAF OS Library
// Copyright (C) 2012-2017  David Capello
//
// This file is released under the terms of the MIT license.
// Read LICENSE.txt for more information.

#ifndef OS_OSX_APP_DELEGATE_H_INCLUDED
#define OS_OSX_APP_DELEGATE_H_INCLUDED
#pragma once

#include <Cocoa/Cocoa.h>

@interface OSXNSApplication : NSApplication

- (void)sendEvent:(NSEvent *)event;

@end

@interface OSXAppDelegate : NSObject<NSApplicationDelegate>
- (NSApplicationTerminateReply)applicationShouldTerminate:(NSApplication*)sender;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication*)app;
- (void)applicationWillTerminate:(NSNotification*)notification;
- (void)applicationWillResignActive:(NSNotification*)notification;
- (void)applicationDidBecomeActive:(NSNotification*)notification;
- (BOOL)application:(NSApplication*)app openFiles:(NSArray*)filenames;
- (void)executeMenuItem:(id)sender;
- (BOOL)validateMenuItem:(NSMenuItem*)menuItem;
@end

#endif

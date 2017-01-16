//
//  SystemPermissionsManager.h
//  BHFangChuang
//
//  Created by Kenvin on 2016/11/24.
//  Copyright © 2016年 上海方创金融股份信息服务有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum KSystemPermissionsType {
    KAVMediaTypeVideo = 0,  // 相机
    KALAssetsLibrary,       //相册
    KCLLocationManager,     //地理位置信息
    KAVAudioSession,        //音频
    KABAddressBook          //手机通讯录
} KSystemPermissions;


@interface SystemPermissionsManager : NSObject


+ (instancetype)sharedManager ;

/**
 *  根据场景选择合适的提示系统权限类型
 *
 *  @param systemPermissions 系统权限类型
 *
 *  @return 是否具有权限
 */
- (BOOL)requestAuthorization:(KSystemPermissions)systemPermissions;
@end
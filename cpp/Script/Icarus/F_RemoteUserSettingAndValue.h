// /Script/Icarus.RemoteUserSettingAndValue
// size 0x8, declared in Icarus/Source/Icarus/PlayerData/RemoteUserSettings.h

USTRUCT()
struct FRemoteUserSettingAndValue
{
public:
    UPROPERTY() ERemoteUserSetting ID;  // 0x0000, size 0x1
    UPROPERTY() int32 Value;  // 0x0004, size 0x4
};

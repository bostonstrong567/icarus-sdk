// /Script/Icarus.RemoteUserSettings
// Derives from: UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/PlayerData/RemoteUserSettings.h

UCLASS(Config=Engine)
class URemoteUserSettings : public UActorComponent
{
private:
    TMap<enum ERemoteUserSetting,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum ERemoteUserSetting,int,0> > Settings;  // 0x00B0, not reflected
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PushSetting(ERemoteUserSetting ID, int32 Value);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PushSettings();
    UFUNCTION() void RemoteUserSettingChanged(ERemoteUserSetting UserSetting, int32 Value);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_ReceiveSetting(FRemoteUserSettingAndValue SettingIn);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_ReceiveSettings(TArray<FRemoteUserSettingAndValue> SettingsIn);  // parameters 0x10

    // Virtual functions that start here:
    //   Client_PushSetting_Implementation, Client_PushSettings_Implementation
    //   Server_ReceiveSetting_Implementation, Server_ReceiveSettings_Implementation
};

// /Script/AdvancedSessions.AdvancedFriendsInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedFriendsInterface.h

UCLASS(Abstract, MinimalAPI)
class UAdvancedFriendsInterface : public UInterface
{
public:
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerLoginChanged(int32 PlayerNum);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID);  // parameters 0x28
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);  // parameters 0x21
    UFUNCTION(BlueprintImplementableEvent) void OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SearchResult);  // parameters 0x128
    UFUNCTION(BlueprintImplementableEvent) void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, const FBlueprintSessionResult& SearchResult);  // parameters 0x128
};

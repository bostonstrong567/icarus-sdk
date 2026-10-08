// /Script/AdvancedSessions.AdvancedVoiceLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedVoiceLibrary.h

UCLASS()
class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetNumLocalTalkers(int32& NumLocalTalkers);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsHeadsetPresent(bool& bHasHeadset, uint8 LocalPlayerNum);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsLocalPlayerTalking(uint8 LocalPlayerNum);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsPlayerMuted(uint8 LocalUserNumChecking, const FBPUniqueNetId& UniqueNetId);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsRemotePlayerTalking(const FBPUniqueNetId& UniqueNetId);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool MuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);  // parameters 0x2A
    UFUNCTION(BlueprintCallable) static void RegisterAllLocalTalkers();
    UFUNCTION(BlueprintCallable) static bool RegisterLocalTalker(uint8 LocalPlayerNum);  // parameters 0x2
    UFUNCTION(BlueprintCallable) static bool RegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void RemoveAllRemoteTalkers();
    UFUNCTION(BlueprintCallable) static void StartNetworkedVoice(uint8 LocalPlayerNum);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void StopNetworkedVoice(uint8 LocalPlayerNum);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool UnMuteRemoteTalker(uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);  // parameters 0x2A
    UFUNCTION(BlueprintCallable) static void UnRegisterAllLocalTalkers();
    UFUNCTION(BlueprintCallable) static void UnRegisterLocalTalker(uint8 LocalPlayerNum);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool UnRegisterRemoteTalker(const FBPUniqueNetId& UniqueNetId);  // parameters 0x21
};

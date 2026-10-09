// /Script/Engine.VOIPTalker
// Derives from: UActorComponent > UObject
// size 0xE8, declared in Engine/Source/Runtime/Engine/Public/Net/VoiceConfig.h

UCLASS(Config=Engine)
class UVOIPTalker : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVoiceSettings Settings;  // 0x00B0, size 0x18
private:
    FUniqueNetIdWrapper PlayerId;  // 0x00C8, not reflected
    float CachedVolumeLevel;  // 0x00E0, not reflected
    uint8 : 1 bIsRegistered;  // 0x00E4, not reflected
public:
    UFUNCTION(BlueprintNativeEvent) void BPOnTalkingBegin(UAudioComponent* AudioComponent);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void BPOnTalkingEnd();
    UFUNCTION(BlueprintCallable) static UVOIPTalker* CreateTalkerForPlayer(APlayerState* OwningState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) float GetVoiceLevel();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RegisterWithPlayerState(APlayerState* OwningState);  // parameters 0x8

    // Virtual functions that start here:
    //   BPOnTalkingBegin_Implementation, BPOnTalkingEnd_Implementation, OnTalkingBegin, OnTalkingEnd
};

// /Script/Icarus.RequestPlayerPersona
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Subsystems/Online/RequestFriendInfo.h

UCLASS()
class URequestPlayerPersona : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FRequestPlayerPersonaResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FRequestPlayerPersonaResult OnFailure;  // 0x0040, size 0x10
private:
    FString PlayerId;  // 0x0050, not reflected
    bool bGetNameOnly;  // 0x0060, not reflected
    bool bHasName;  // 0x0061, not reflected
    bool bHasAvatar;  // 0x0062, not reflected
    FIcarusPlayerPersona PersonaData;  // 0x0068, not reflected
    FTimerHandle RequestInfoTimer;  // 0x0098, not reflected
    FTimerHandle RequestTimeoutTimer;  // 0x00A0, not reflected
    bool bIsSteam;  // 0x00A8, not reflected
public:
    UFUNCTION(BlueprintCallable) static URequestPlayerPersona* IcarusRequestPlayerPersona(UObject* WorldContextObject, FString PlayerId, bool bNameOnly);  // parameters 0x28
    UFUNCTION() void RequestTimedOut();
    UFUNCTION() void TryCompleteRequest();
};

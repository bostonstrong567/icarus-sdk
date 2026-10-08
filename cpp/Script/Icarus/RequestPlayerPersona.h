// /Script/Icarus.RequestPlayerPersona
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Subsystems/Online/RequestFriendInfo.h

UCLASS()
class URequestPlayerPersona : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FRequestPlayerPersonaResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FRequestPlayerPersonaResult OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FString PlayerId;  // 0x0050, private
    bool bGetNameOnly;  // 0x0060, private
    bool bHasName;  // 0x0061, private
    bool bHasAvatar;  // 0x0062, private
    FIcarusPlayerPersona PersonaData;  // 0x0068, private
    FTimerHandle RequestInfoTimer;  // 0x0098, private
    FTimerHandle RequestTimeoutTimer;  // 0x00A0, private
    bool bIsSteam;  // 0x00A8, private

    UFUNCTION(BlueprintCallable) static URequestPlayerPersona* IcarusRequestPlayerPersona(UObject* WorldContextObject, FString PlayerId, bool bNameOnly);  // parameters 0x28
    UFUNCTION() void RequestTimedOut();
    UFUNCTION() void TryCompleteRequest();
};

// /Script/Icarus.IcarusErrorSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Systems/IcarusErrorSubsystem.h

UCLASS()
class UIcarusErrorSubsystem : public UGameInstanceSubsystem
{
private:
    TQueue<TTuple<enum EErrorCodes,FString>,1> ErrorCodesForTitleScreen;  // 0x0030, not reflected
public:
    UFUNCTION(BlueprintCallable) void PushError(FErrorCodesEnum ErrorCode, EErrorTarget Target, EErrorAction ErrorAction, FString ErrorInfo);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void RequestErrorsForAction(EErrorAction Action);  // parameters 0x1
};

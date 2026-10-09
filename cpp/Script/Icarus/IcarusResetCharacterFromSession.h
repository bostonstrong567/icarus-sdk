// /Script/Icarus.IcarusResetCharacterFromSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x398, declared in Icarus/Source/Icarus/Session/IcarusResetCharacterFromSession.h

UCLASS(MinimalAPI)
class UIcarusResetCharacterFromSession : public UIcarusSessionBase
{
public:
    UFUNCTION(BlueprintCallable) static UIcarusResetCharacterFromSession* IcarusResetCharacterFromSession(UObject* WorldContextObject, APlayerController* PlayerController, FOnlineProfileCharacter OnlineProfileCharacter);  // parameters 0x108
};

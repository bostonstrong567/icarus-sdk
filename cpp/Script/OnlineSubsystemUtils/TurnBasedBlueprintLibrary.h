// /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/TurnBasedBlueprintLibrary.h

UCLASS()
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32& PlayerIndex);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32 PlayerIndex, FString& PlayerDisplayName);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object);  // parameters 0x18
};

// /Game/BP/Accolades/BP_PlayerTrackerFunctionLibrary.BP_PlayerTrackerFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerTrackerFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FString GetPlayerTrackerSaveFormat(FString PlayerID, int32 Slot, UObject* __WorldContext);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FString GetPlayerTrackerSaveName(FPlayerCharacterID PlayerCharacterID, UObject* __WorldContext);  // parameters 0x30
};

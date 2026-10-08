// /Game/BP/Player/Components/BP_SpectatorFunctionLibrary.BP_SpectatorFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SpectatorFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static ABP_CinematicPawn_C* GetCinematicPawn(UObject* __WorldContext);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static ABP_PhotoCamera_C* GetPhotoCameraPawn(UObject* __WorldContext);  // parameters 0x10
};

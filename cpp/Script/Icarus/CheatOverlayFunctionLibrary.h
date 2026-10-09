// /Script/Icarus.CheatOverlayFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/UI/Cheats/CheatOverlayBase.h

UCLASS()
class UCheatOverlayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static UCheatOverlayBase* GetCheatOverlay(UObject* WorldContextObject);  // parameters 0x10
};

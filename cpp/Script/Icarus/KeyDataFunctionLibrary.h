// /Script/Icarus.KeyDataFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/KeyData.h

UCLASS()
class UKeyDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FText GetDisplayNameForKey(const FKey& Key, bool bLongDisplay);  // parameters 0x38
};

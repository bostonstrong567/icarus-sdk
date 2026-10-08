// /Script/IcarusUtilities.IcarusHashesFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/IcarusUtilities/Public/IcarusHashes.h

UCLASS()
class UIcarusHashesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FName HashToName(int32 Hash);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NameToHash(const FName& Name);  // parameters 0xC
};

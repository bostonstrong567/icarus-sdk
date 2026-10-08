// /Script/Icarus.IcarusResourceFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Resources/IcarusResourceFunctionLibrary.h

UCLASS()
class UIcarusResourceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool ResourceIsValid(FIcarusResourcesEnum Resource);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void ResourceIsValidExec(FIcarusResourcesEnum Resource, EResourceLibraryExec& Paths);  // parameters 0x11
};

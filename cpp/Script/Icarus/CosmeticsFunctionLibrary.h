// /Script/Icarus.CosmeticsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Cosmetics/CosmeticsFunctionLibrary.h

UCLASS()
class UCosmeticsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool IsDLCPackageInstalled(FDLCPackageDataRowHandle DLCPackage);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void LogDLCInfo();
};

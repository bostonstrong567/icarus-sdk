// /Script/Icarus.KeyIconDataFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/KeyIconData.h

UCLASS()
class UKeyIconDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void GetIconsForKey(const FKey& Key, EControllerIconSet IconSet, FKeyIconData& OutData);  // parameters 0x80
};

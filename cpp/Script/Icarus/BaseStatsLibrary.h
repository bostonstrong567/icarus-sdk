// /Script/Icarus.BaseStatsLibrary
// Derives from: UStatsLibrary > URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Utility/Enum/BaseStatsLibrary.h

UCLASS()
class UBaseStatsLibrary : public UStatsLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakBaseStatsEnum(FBaseStatsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION() static bool Filter(int32 Index);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBaseStatsEnum MakeBaseStatsEnum(FBaseStatsEnum Enum);  // parameters 0x20
};

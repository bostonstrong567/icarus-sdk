// /Script/Icarus.WorldStatsLibrary
// Derives from: UStatsLibrary > URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Utility/Enum/WorldStatsLibrary.h

UCLASS()
class UWorldStatsLibrary : public UStatsLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakWorldStatsEnum(FWorldStatsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION() static bool Filter(int32 Index);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static FWorldStatsEnum MakeWorldStatsEnum(FWorldStatsEnum Enum);  // parameters 0x20
};

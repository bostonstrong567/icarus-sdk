// /Script/Icarus.VirtualStatsLibrary
// Derives from: UStatsLibrary > URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Utility/Enum/VirtualStatsLibrary.h

UCLASS()
class UVirtualStatsLibrary : public UStatsLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakVirtualStatsEnum(FVirtualStatsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void EnableVirtualStatsLogging(bool bEnable);  // parameters 0x1
    UFUNCTION() static bool Filter(int32 Index);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsVirtualStatLogging();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVirtualStatsEnum MakeVirtualStatsEnum(FVirtualStatsEnum Enum);  // parameters 0x20
};

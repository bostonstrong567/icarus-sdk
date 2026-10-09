// /Script/Icarus.VirtualStatFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Stats/VirtualStats.h

UCLASS()
class UVirtualStatFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool IsVirtualStat(FStatsEnum Stat);  // parameters 0x11
};

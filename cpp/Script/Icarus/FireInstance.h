// /Script/Icarus.FireInstance
// Derives from: AFireInstanceBase > AIcarusActor > AActor > UObject
// size 0x318, declared in Icarus/Source/Icarus/Systems/Disaster/FireInstance.h

UCLASS(Config=Engine)
class AFireInstance : public AFireInstanceBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeBetweenPropagation;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTimeBetweenPropagation;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NextPropagationTime;  // 0x0310, size 0x4

    UFUNCTION() void OnFlammableInstanceState_Combusting_Exit(UFlammableInstance* Instance, UFlammableState* FlammableState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ResetFirePropagation();
};

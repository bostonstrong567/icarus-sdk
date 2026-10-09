// /Script/Icarus.ProcessingData
// size 0x68, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/ProcessingData.h

USTRUCT()
struct FProcessingData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UProcessingComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRecipeSetsRowHandle DefaultRecipeSet;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresEnergy;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRequiresShelter;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoSelectRecipe;  // 0x005A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManualActivation;  // 0x005B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 QueueSize;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxMilliwattage;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectedByPlayerStats;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SendOutputDirectlyToPlayer;  // 0x0065, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoTurnOffDeviceWhileNotProcessing;  // 0x0066, size 0x1
};

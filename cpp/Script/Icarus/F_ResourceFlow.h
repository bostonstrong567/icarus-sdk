// /Script/Icarus.ResourceFlow
// size 0x10, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceComponent.h

USTRUCT()
struct FResourceFlow
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TWeakObjectPtr<UObject> Source;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FlowRate;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bConsume;  // 0x000C, size 0x1
};

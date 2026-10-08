// /Script/Icarus.ResourceFlowSummary
// size 0x38, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceComponent.h

USTRUCT()
struct FResourceFlowSummary
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FIcarusResourcesEnum ResourceType;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TotalProduceRate;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TotalConsumeRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TotalNetworkFlow;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FResourceFlow> Flows;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BrownOutStrength;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CurrentFlowRate;  // 0x0034, size 0x4
};

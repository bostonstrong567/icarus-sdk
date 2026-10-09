// /Script/Icarus.ResourceNetworkData
// size 0x60, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceComponent.h

USTRUCT()
struct FResourceNetworkData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EResourceNetworkFlowType FlowType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlwaysActive;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoActivate;  // 0x001A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ResourceFlowRate;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowPullingResourceFromInventory;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowPushingResourceToInventory;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStorageIsInFlowOnly;  // 0x0022, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle BrownOutModifier;  // 0x0024, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AutoShutoffFlowPercent;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowAutoRestart;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsOptional;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOptionalResourceFlowsRowHandle OptionalFlowType;  // 0x0044, size 0x18
};

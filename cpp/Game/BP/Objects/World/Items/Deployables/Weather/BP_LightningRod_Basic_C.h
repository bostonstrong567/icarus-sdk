// /Game/BP/Objects/World/Items/Deployables/Weather/BP_LightningRod_Basic.BP_LightningRod_Basic_C
// Derives from: ABP_LightningRod_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LightningRod_Basic_C : public ABP_LightningRod_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_LightningRod_Basic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

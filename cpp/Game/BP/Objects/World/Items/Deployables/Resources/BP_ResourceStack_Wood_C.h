// /Game/BP/Objects/World/Items/Deployables/Resources/BP_ResourceStack_Wood.BP_ResourceStack_Wood_C
// Derives from: ABP_ResourceStack_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ResourceStack_Wood_C : public ABP_ResourceStack_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0740, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ResourceStack_Wood(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

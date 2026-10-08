// /Game/BP/Objects/World/Items/Deployables/Doors/BP_Door_Thatch.BP_Door_Thatch_C
// Derives from: ABP_Door_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Door_Thatch_C : public ABP_Door_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_BLD_Door_Thatch;  // 0x0770, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Door_Thatch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

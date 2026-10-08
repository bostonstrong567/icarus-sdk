// /Game/BP/Objects/World/Items/Deployables/Traps/BP_Animal_Trap_Small.BP_Animal_Trap_Small_C
// Derives from: ABP_Animal_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Animal_Trap_Small_C : public ABP_Animal_Trap_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trap_Small_T2;  // 0x0790, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Animal_Trap_Small(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

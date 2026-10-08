// /Game/BP/Objects/World/Items/Deployables/MortarAndPestle/BP_MortarAndPestle.BP_MortarAndPestle_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x990, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MortarAndPestle_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Mortar_Pestle_02;  // 0x0988, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_MortarAndPestle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

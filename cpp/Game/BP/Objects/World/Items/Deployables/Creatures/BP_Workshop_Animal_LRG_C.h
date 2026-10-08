// /Game/BP/Objects/World/Items/Deployables/Creatures/BP_Workshop_Animal_LRG.BP_Workshop_Animal_LRG_C
// Derives from: ABP_Workshop_Animal_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Workshop_Animal_LRG_C : public ABP_Workshop_Animal_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CryonOpenVFXLocator;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CryogenicCrate_0;  // 0x07D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Workshop_Animal_LRG(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_OpenCage();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

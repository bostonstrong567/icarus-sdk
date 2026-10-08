// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Metal_Wardrobe.BP_Metal_Wardrobe_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Metal_Wardrobe_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* ShadowGeo;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Metal_Wardrobe(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

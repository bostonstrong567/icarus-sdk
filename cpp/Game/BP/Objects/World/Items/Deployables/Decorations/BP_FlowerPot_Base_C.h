// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_FlowerPot_Base.BP_FlowerPot_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FlowerPot_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Strawflower;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Poppy;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Lavender;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Daisy;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Bluebell;  // 0x0750, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
};

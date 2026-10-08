// /Game/BP/Objects/World/Items/Deployables/Resources/BP_ResourceStack_Base.BP_ResourceStack_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ResourceStack_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemToGive;  // 0x0724, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StackSize;  // 0x073C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
};

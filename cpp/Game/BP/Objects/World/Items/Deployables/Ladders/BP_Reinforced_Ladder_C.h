// /Game/BP/Objects/World/Items/Deployables/Ladders/BP_Reinforced_Ladder.BP_Reinforced_Ladder_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Reinforced_Ladder_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Collision;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_LadderComponent_C* BP_LadderComponent;  // 0x0738, size 0x8

    UFUNCTION() void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Reinforced_Ladder(int32 EntryPoint);  // parameters 0x4
};

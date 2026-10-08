// /Game/BP/Objects/World/Resources/Nodes/BP_FLODItemActor.BP_FLODItemActor_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FLODItemActor_C : public AStaticItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFLODRewardComponent* IcarusFLODReward;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFLODActorComponent* IcarusFLODActor;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0598, size 0x8

    UFUNCTION() void BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature(UFLODActorComponent* Component, const FFLODActorRecordInstance& Current, const FFLODActorRecordInstance& Previous);  // parameters 0x40
    UFUNCTION() void ExecuteUbergraph_BP_FLODItemActor(int32 EntryPoint);  // parameters 0x4
};

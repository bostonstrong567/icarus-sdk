// /Game/BP/Behaviours/Flammable/BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C
// Derives from: UFlammableActorFLOD > UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x120, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_FLODActor_Tree_C : public UFlammableActorFLOD
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ATreeBase* OwnerTree;  // 0x0118, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Flammable_FLODActor_Tree(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceAttached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceDetached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};

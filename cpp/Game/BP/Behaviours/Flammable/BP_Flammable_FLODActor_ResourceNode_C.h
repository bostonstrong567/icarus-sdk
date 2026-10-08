// /Game/BP/Behaviours/Flammable/BP_Flammable_FLODActor_ResourceNode.BP_Flammable_FLODActor_ResourceNode_C
// Derives from: UFlammableActorFLOD > UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_FLODActor_ResourceNode_C : public UFlammableActorFLOD
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0110, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Flammable_FLODActor_ResourceNode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature);  // parameters 0x8
};

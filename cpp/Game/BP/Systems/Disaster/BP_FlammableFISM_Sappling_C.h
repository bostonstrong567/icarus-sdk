// /Game/BP/Systems/Disaster/BP_FlammableFISM_Sappling.BP_FlammableFISM_Sappling_C
// Derives from: UBP_FlammableFISM_ResourceNode_C > UBP_FlammableFISM_C > UFlammableFISM > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x3A0, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FlammableFISM_Sappling_C : public UBP_FlammableFISM_ResourceNode_C
{
public:
    UFUNCTION(BlueprintCallable) void CombustingEnter(UFlammableInstanceFLOD* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CombustingExit(UFlammableInstanceFLOD* Instance);  // parameters 0x8
};

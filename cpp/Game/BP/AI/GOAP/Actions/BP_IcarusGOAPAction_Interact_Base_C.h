// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Abstract, Config=Engine)
class UBP_IcarusGOAPAction_Interact_Base_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ProjectionExtent;  // 0x0080, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ABP_GOAPInteractable_Base_C> InteractableClass;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_GOAPInteractable_Base_C* SpawnedNode;  // 0x0098, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void GetInteractLocation(AIcarusNPCGOAPController* ForController, FVector& OutLocation, bool& Success);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInRange(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SpawnDummyNode(AIcarusNPCGOAPController* ForController, FVector Spawn_Transform_Location, ABP_GOAPInteractable_Base_C*& SpawnedNode);  // parameters 0x20
};

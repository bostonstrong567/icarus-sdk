// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_Rest_AnimalBed.BP_IcarusGOAPAction_Rest_AnimalBed_C
// Derives from: UBP_IcarusGOAPAction_Rest_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x90, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_Rest_AnimalBed_C : public UBP_IcarusGOAPAction_Rest_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetNearestUnoccupiedAnimalBed(AActor*& ValidBed, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void IsAnimalBedUnoccupied(AActor* BedActor, bool& Unoccupied) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};

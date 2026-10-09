// /Game/BP/AI/BP_MountInterface.BP_MountInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_MountInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetMountCombatBehaviour(EMountCombatBehaviourState& CombatBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountConsumptionBehaviour(EMountConsumptionBehaviourState& ConsumptionBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountGrazingBehaviour(EMountGrazingBehaviourState& GrazingBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountMovementBehaviour(EMountMovementBehaviourState& MovementBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountCombatBehaviourUpdated(EMountCombatBehaviourState NewCombatBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountConsumptionBehaviourUpdated(EMountConsumptionBehaviourState NewConsumptionBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountGrazingBehaviourUpdated(EMountGrazingBehaviourState NewGrazingBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountMovementBehaviourUpdated(EMountMovementBehaviourState NewMovementBehaviour);  // parameters 0x1
};

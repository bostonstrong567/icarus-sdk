// /Script/Icarus.IcarusGOAPGoal
// Derives from: UObject
// size 0x40, declared in Icarus/Source/Icarus/AI/IcarusGOAPGoal.h

UCLASS()
class UIcarusGOAPGoal : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPGoalsRowHandle CachedRowHandle;  // 0x0028, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) FGOAPGoal GetGoalData() const;  // parameters 0x68
    UFUNCTION(BlueprintNativeEvent) bool SetInitialState(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool SetWorkingData(AIcarusNPCGOAPController* controller);  // parameters 0x9

    // Virtual functions that start here:
    //   SetInitialState_Implementation, SetWorkingData_Implementation
};

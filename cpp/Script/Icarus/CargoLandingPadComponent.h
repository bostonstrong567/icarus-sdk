// /Script/Icarus.CargoLandingPadComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Icarus/Source/Icarus/Objects/CargoLandingPadComponent.h

UCLASS(Config=Engine)
class UCargoLandingPadComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) int32 LeftSlotUID;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) int32 RightSlotUID;  // 0x00B4, size 0x4
public:
    UFUNCTION(BlueprintCallable) int32 AssignAvailableSlot(AIcarusActor* Object);  // parameters 0xC
    UFUNCTION(BlueprintCallable) int32 ClearSlot(AIcarusActor* Object);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLeftSlotUID() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRightSlotUID() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAssignedSlot() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAvailableSlot() const;  // parameters 0x1
};

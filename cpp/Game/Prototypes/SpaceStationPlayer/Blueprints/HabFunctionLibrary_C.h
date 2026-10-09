// /Game/Prototypes/SpaceStationPlayer/Blueprints/HabFunctionLibrary.HabFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UHabFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector ConditionallyFilterUpDirection(FVector Vector, FVector UpAxis, bool IgnoreUp, UObject* __WorldContext) const;  // parameters 0x34
    UFUNCTION(BlueprintCallable) static void FindBestGripTransform(UPrimitiveComponent* GripTargetComponent, bool ForLeftHand, FVector TargetLocation, FRotator TargetRotation, UObject* __WorldContext, FTransform& BestTransform);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void GetAutoOrientLocationAndDirection(AIcarusPlayerCharacter* Character, HabHandStateStruct HandState, bool ForLeftHand, FVector& DesiredHeadLocation, FVector& DesiredFacingDirection, UObject* __WorldContext, bool& FoundLocationSuccessfully);  // parameters 0x61
    UFUNCTION(BlueprintCallable) static void GetAutoOrientUpAxis(AIcarusPlayerCharacter* Character, HabHandStateStruct HandState, bool ForLeftHand, FVector& UpAxis, UObject* __WorldContext, bool& Success);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetHabCharacterShoulderName(bool ForLeftHand, UObject* __WorldContext) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetHabCharacterWristName(bool ForLeftHand, UObject* __WorldContext) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetHandStateWorldLocation(HabHandStateStruct State, UObject* __WorldContext) const;  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetHandStateWorldNormal(HabHandStateStruct State, UObject* __WorldContext) const;  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString HandStateToString(HabHandStateStruct HandState, UObject* __WorldContext) const;  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasEnoughMassToBeRelevant(UPrimitiveComponent* Component, UObject* __WorldContext) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void HitToHandState(TEnumAsByte<ESpaceHandGripMode> HandMode, bool Reaching, FHitResult Hit, float Distance, UObject* __WorldContext, HabHandStateStruct& HandState) const;  // parameters 0xC8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsStableGrip(HabHandStateStruct HandState, UObject* __WorldContext) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsTouchOrStableGrip(HabHandStateStruct HandState, UObject* __WorldContext) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable) static HabHandStateStruct MakeHandStateFromGripTarget(UPrimitiveComponent* GripTarget, FVector TargetLocation, FRotator TargetRotation, bool Reaching, float HandDistance, float Created, UObject* __WorldContext);  // parameters 0x68
};

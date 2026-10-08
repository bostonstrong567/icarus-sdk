// /Game/Prototypes/SpaceStationPlayer/Blueprints/Movement/IGripTargetInterface.IGripTargetInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIGripTargetInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void FindBestAnimation(FVector TargetLocation, FRotator TargetRotation, bool& Success, UAnimMontage*& GripMontage);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void FindBestCharacterDirection(AIcarusPlayerCharacter* Character, bool ForLeftHand, FVector TargetLocation, bool& Success, FVector& BestDirection);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void FindBestCharacterLocation(AIcarusPlayerCharacter* Character, bool ForLeftHand, FVector TargetLocation, bool& Success, FVector& BestLocation);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void FindBestCharacterUpAxisDirection(AIcarusPlayerCharacter* Character, bool ForLeftHand, FVector TargetLocation, bool& Success, FVector& UpAxisDirection);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void FindBestGripTransform(bool ForLeftHand, FVector TargetLocation, FRotator TargetRotation, FTransform& BestTransform);  // parameters 0x50
};

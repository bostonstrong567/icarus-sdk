// /Script/Engine.PawnMovementComponent
// Derives from: UNavMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0x138, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h

UCLASS(Abstract, Config=Engine)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
    UPROPERTY(Transient) APawn* PawnOwner;  // 0x0130, size 0x8

    UFUNCTION(BlueprintCallable) void AddInputVector(FVector WorldVector, bool bForce);  // parameters 0xD
    UFUNCTION(BlueprintCallable) FVector ConsumeInputVector();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLastInputVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) APawn* GetPawnOwner() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPendingInputVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMoveInputIgnored() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector K2_GetInputVector() const;  // parameters 0xC

    // Virtual functions that start here:
    //   AddInputVector, ConsumeInputVector, IsMoveInputIgnored, NotifyBumpedPawn
};

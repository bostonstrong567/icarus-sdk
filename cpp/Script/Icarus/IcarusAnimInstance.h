// /Script/Icarus.IcarusAnimInstance
// Derives from: UAnimInstance > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Animation/IcarusAnimInstance.h

UCLASS(Transient)
class UIcarusAnimInstance : public UAnimInstance
{
public:
    UPROPERTY(BlueprintReadWrite) AIcarusActor* OwningIcarusActor;  // 0x02B8, size 0x8
    FPlayIcarusAnimNotifyDelegate OnPlayIcarusNotify;  // 0x02C0, not reflected

    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesCurveExist(FName CurveName) const;  // parameters 0x9
};

// /Script/AnimationSharing.AnimSharingStateInstance
// Derives from: UAnimInstance > UObject
// size 0x2E0, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingInstances.h

UCLASS(Transient)
class UAnimSharingStateInstance : public UAnimInstance
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) UAnimSequence* AnimationToPlay;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float PermutationTimeOffset;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float PlayRate;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) bool bStateBool;  // 0x02C8, size 0x1
private:
    uint8 StateIndex;  // 0x02C9, not reflected
    uint8 ComponentIndex;  // 0x02CA, not reflected
    UPROPERTY(Transient) UAnimSharingInstance* Instance;  // 0x02D0, size 0x8
public:
    UFUNCTION(BlueprintCallable) void GetInstancedActors(TArray<AActor*>& Actors);  // parameters 0x10
};

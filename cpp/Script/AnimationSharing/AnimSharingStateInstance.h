// /Script/AnimationSharing.AnimSharingStateInstance
// Derives from: UAnimInstance > UObject
// size 0x2E0, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingInstances.h

UCLASS(Transient)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) UAnimSequence* AnimationToPlay;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float PermutationTimeOffset;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float PlayRate;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) bool bStateBool;  // 0x02C8, size 0x1
    UPROPERTY(Transient) UAnimSharingInstance* Instance;  // 0x02D0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 StateIndex;  // 0x02C9, private
    uint8 ComponentIndex;  // 0x02CA, private

    UFUNCTION(BlueprintCallable) void GetInstancedActors(TArray<AActor*>& Actors);  // parameters 0x10
};

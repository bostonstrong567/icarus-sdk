// /Script/Engine.AnimNotifyState
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h

UCLASS(Abstract, Const, EditInlineNew)
class UAnimNotifyState : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bIsNativeBranchingPoint;  // 0x0028

    UFUNCTION(BlueprintNativeEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const;  // parameters 0x15
    UFUNCTION(BlueprintImplementableEvent) bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) bool Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) const;  // parameters 0x15

    // Virtual functions that start here:
    //   BranchingPointNotifyBegin, BranchingPointNotifyEnd, BranchingPointNotifyTick, GetEditorColor
    //   GetEditorComment, GetNotifyName_Implementation, NotifyBegin, NotifyEnd, NotifyTick
};

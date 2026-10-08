// /Script/Engine.AnimNotify
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h

UCLASS(Abstract, Const)
class UAnimNotify : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bIsNativeBranchingPoint;  // 0x0028
    USkeletalMeshComponent * MeshContext;  // 0x0030, private

    UFUNCTION(BlueprintNativeEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11

    // Virtual functions that start here:
    //   BranchingPointNotify, GetEditorColor, GetEditorComment, GetNotifyName_Implementation, Notify
};

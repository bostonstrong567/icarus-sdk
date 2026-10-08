// /Script/Engine.AnimBlueprint
// Derives from: UBlueprint > UBlueprintCore > UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimBlueprint.h

UCLASS(Config=Engine)
class UAnimBlueprint : public UBlueprint, public IInterface_PreviewMeshProvider
{
public:
    UPROPERTY(EditAnywhere) USkeleton* TargetSkeleton;  // 0x00A8, size 0x8
    UPROPERTY() TArray<FAnimGroupInfo> Groups;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) bool bUseMultiThreadedAnimationUpdate;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere) bool bWarnAboutBlueprintUsage;  // 0x00C1, size 0x1
};

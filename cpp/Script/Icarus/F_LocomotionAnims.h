// /Script/Icarus.LocomotionAnims
// size 0x208, declared in Icarus/Source/Icarus/Traits/Behaviours/Focusable/ItemAnimationData.h

USTRUCT()
struct FLocomotionAnims
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> WalkF;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> WalkR;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> WalkB;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> WalkL;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> RunF;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> RunR;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> RunB;  // 0x00F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> RunL;  // 0x0118, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> SprintF;  // 0x0140, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> CrouchWalkF;  // 0x0168, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> CrouchWalkR;  // 0x0190, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> CrouchWalkB;  // 0x01B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> CrouchWalkL;  // 0x01E0, size 0x28
};

// /Script/Icarus.ItemAnimationData
// size 0x360, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FItemAnimationData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> FPJumpStart;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> FPJumpLoop;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> FPJumpEnd;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpace1D> FPLocoBlendSpace;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> TPJumpStart;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> TPJumpLoop;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> TPJumpEnd;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLocomotionAnims TPLocomotionAnims;  // 0x0130, size 0x208
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpace1D> UpToDownBlendSpace;  // 0x0338, size 0x28
};

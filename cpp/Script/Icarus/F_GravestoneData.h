// /Script/Icarus.GravestoneData
// size 0xC0, declared in Icarus/Source/Icarus/Objects/Gravestone.h

USTRUCT()
struct FGravestoneData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot DeathPose;  // 0x0000, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeathVelocity;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics PlayerCosmetics;  // 0x0044, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName UserID;  // 0x00A4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasSettled;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsDataValid;  // 0x00AD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LootBagPosition;  // 0x00B0, size 0xC
};

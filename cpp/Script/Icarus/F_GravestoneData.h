// /Script/Icarus.GravestoneData
// size 0xE0, declared in Icarus/Source/Icarus/Objects/Gravestone.h

USTRUCT()
struct FGravestoneData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot DeathPose;  // 0x0000, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeathVelocity;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics PlayerCosmetics;  // 0x0044, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName UserID;  // 0x00C4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasSettled;  // 0x00CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsDataValid;  // 0x00CD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LootBagPosition;  // 0x00D0, size 0xC
};

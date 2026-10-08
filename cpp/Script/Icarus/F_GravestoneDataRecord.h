// /Script/Icarus.GravestoneDataRecord
// size 0x128, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GravestoneRecorderComponent.h

USTRUCT()
struct FGravestoneDataRecord
{
    UPROPERTY(SaveGame) FPoseSnapshotRecorder DeathPose;  // 0x0000, size 0x38
    UPROPERTY(SaveGame) FVector DeathVelocity;  // 0x0038, size 0xC
    UPROPERTY(SaveGame) FCharacterCosmeticsRecorder PlayerCosmetics;  // 0x0048, size 0xC8
    UPROPERTY(SaveGame) FName UserID;  // 0x0110, size 0x8
    UPROPERTY(SaveGame) bool bHasSettled;  // 0x0118, size 0x1
    UPROPERTY(SaveGame) FVector LootBagPosition;  // 0x011C, size 0xC
};

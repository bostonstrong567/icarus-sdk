// /Script/Icarus.PlayerStateRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x240, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/PlayerStateRecorderComponent.h

UCLASS(Config=Engine)
class UPlayerStateRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID PlayerCharacterID;  // 0x01C0, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) FVector Location;  // 0x01D8, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) FRotator Rotation;  // 0x01E4, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) bool bIsAlive;  // 0x01F0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) int32 Health;  // 0x01F4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 FoodLevel;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 WaterLevel;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 OxygenLevel;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 RadiationLevel;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) TArray<FStomachContentSaveData> StomachContents;  // 0x0208, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 RespawnCount;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) bool HasGrantedLoadout;  // 0x021C, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) int32 PlayerStateRecorderVersion;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) TArray<FName> CosmeticArmourOverrides;  // 0x0228, size 0x10
};

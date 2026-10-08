// /Script/LevelSequence.LevelSequencePlayerSnapshot
// size 0xB8, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequencePlayer.h

USTRUCT()
struct FLevelSequencePlayerSnapshot
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString MasterName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FQualifiedFrameTime MasterTime;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FQualifiedFrameTime SourceTime;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString CurrentShotName;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FQualifiedFrameTime CurrentShotLocalTime;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FQualifiedFrameTime CurrentShotSourceTime;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString SourceTimecode;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) TSoftObjectPtr<UCameraComponent> CameraComponent;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLevelSequenceSnapshotSettings Settings;  // 0x0098, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ULevelSequence* ActiveShot;  // 0x00A8, size 0x8
    UPROPERTY() FMovieSceneSequenceID ShotID;  // 0x00B0, size 0x4
};

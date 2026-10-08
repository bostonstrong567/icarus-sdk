// /Script/Icarus.PoseSnapshotRecorder
// size 0x38, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/Types/GenericTypes.h

USTRUCT()
struct FPoseSnapshotRecorder
{
    UPROPERTY(SaveGame) TArray<FTransform> LocalTransforms;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) TArray<FName> BoneNames;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) FName SkeletalMeshName;  // 0x0020, size 0x8
    UPROPERTY(SaveGame) FName SnapshotName;  // 0x0028, size 0x8
    UPROPERTY(SaveGame) bool bIsValid;  // 0x0030, size 0x1
};

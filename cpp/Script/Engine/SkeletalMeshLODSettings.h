// /Script/Engine.SkeletalMeshLODSettings
// Derives from: UDataAsset > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h

UCLASS(MinimalAPI, Config=Engine)
class USkeletalMeshLODSettings : public UDataAsset
{
public:
    UPROPERTY(EditAnywhere, Config) FPerPlatformInt MinLod;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Config) FPerPlatformBool DisableBelowMinLodStripping;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bOverrideLODStreamingSettings;  // 0x0035, size 0x1
    UPROPERTY(EditAnywhere, Config) FPerPlatformBool bSupportLODStreaming;  // 0x0036, size 0x1
    UPROPERTY(EditAnywhere, Config) FPerPlatformInt MaxNumStreamedLODs;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) FPerPlatformInt MaxNumOptionalLODs;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FSkeletalMeshLODGroupSettings> LODGroups;  // 0x0040, size 0x10
};

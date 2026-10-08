// /Script/Engine.AnimationSettings
// Derives from: UDeveloperSettings > UObject
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationSettings.h

UCLASS(Config=Engine)
class UAnimationSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) int32 CompressCommandletVersion;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FString> KeyEndEffectorsMatchNameArray;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) bool ForceRecompression;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForceBelowThreshold;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bFirstRecompressUsingCurrentOrDefault;  // 0x0052, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bRaiseMaxErrorToExisting;  // 0x0053, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnablePerformanceLog;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bStripAnimationDataOnDedicatedServer;  // 0x0055, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bTickAnimationOnSkeletalMeshInit;  // 0x0056, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FCustomAttributeSetting> BoneCustomAttributesNames;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> BoneNamesWithCustomAttributes;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config) TMap<FName, ECustomAttributeBlendType> AttributeBlendModes;  // 0x0078, size 0x50
    UPROPERTY(EditAnywhere, Config) ECustomAttributeBlendType DefaultAttributeBlendMode;  // 0x00C8, size 0x1
};

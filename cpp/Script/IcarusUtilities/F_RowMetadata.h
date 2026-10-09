// /Script/IcarusUtilities.RowMetadata
// size 0x88, declared in Icarus/Source/IcarusUtilities/Public/RowMetadata.h

USTRUCT()
struct FRowMetadata : public FTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFeatureLevelsRowHandle RequiredFeatureLevel;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsDeprecated;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Notes;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FName, FString> ExtraMetadata;  // 0x0038, size 0x50
};

// /Script/CoreUObject.PrimaryAssetId
// size 0x10, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/PrimaryAssetId.h

USTRUCT()
struct FPrimaryAssetId
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FPrimaryAssetType PrimaryAssetType;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FName PrimaryAssetName;  // 0x0008, size 0x8
};
